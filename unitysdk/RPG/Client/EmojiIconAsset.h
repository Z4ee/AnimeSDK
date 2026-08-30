#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define RPG_CLIENT_EMOJIICONASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xCE99FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmojiIconAsset_TypeDefinitionIndex = 60176;

	class EmojiIconAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* NormalBubbleIconPath; // 0x18
		::System::String* FlippedBubbleIconPath; // 0x20
		::System::Boolean IsFlipbook; // 0x28
		::System::Single FlipbookSpeed; // 0x2C
		::System::Int32 FlipbookFrameCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIICONASSET__CTOR_OFFSET))(this);
		}
	};
}

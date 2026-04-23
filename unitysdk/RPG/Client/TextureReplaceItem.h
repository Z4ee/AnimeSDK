#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_TEXTUREREPLACEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB2DA800)

namespace RPG::Client
{
	inline static constexpr unsigned int TextureReplaceItem_TypeDefinitionIndex = 65225;

	class TextureReplaceItem : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10
		::UnityEngine::Texture2D* Tex2D; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTUREREPLACEITEM__CTOR_OFFSET))(this);
		}
	};
}

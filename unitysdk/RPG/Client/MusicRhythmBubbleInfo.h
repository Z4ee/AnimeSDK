#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_MUSICRHYTHMBUBBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71B990)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmBubbleInfo_TypeDefinitionIndex = 60307;

	class MusicRhythmBubbleInfo : public ::System::Object
	{
	public:
		::System::String* PeppyText; // 0x10
		::System::String* Text; // 0x18
		::System::UInt32 TextId; // 0x20
		::System::UInt32 RuntimeId; // 0x24
		::System::Single Duration; // 0x28
		::UnityEngine::Vector3 Position; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBUBBLEINFO__CTOR_OFFSET))(this);
		}
	};
}

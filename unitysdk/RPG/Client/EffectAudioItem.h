#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_EFFECTAUDIOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9532F40)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectAudioItem_TypeDefinitionIndex = 57304;

	class EffectAudioItem : public ::System::Object
	{
	public:
		::System::String* EventName; // 0x10
		::System::Single DelayTime; // 0x18
		::System::Single TriggerCD; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTAUDIOITEM__CTOR_OFFSET))(this);
		}
	};
}

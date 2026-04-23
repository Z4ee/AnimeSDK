#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class TimeRewindParterrePuzzleContainerConfig; }

#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xAEF1DA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TimeRewindParterrePuzzleConfig_TypeDefinitionIndex = 72402;

	class TimeRewindParterrePuzzleConfig : public ::System::Object
	{
	public:
		::System::UInt32 ParterreID; // 0x10
		::Il2CppArray<::RPG::Client::Prop::TimeRewindParterrePuzzleContainerConfig*>* ContainerConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLECONFIG__CTOR_OFFSET))(this);
		}
	};
}

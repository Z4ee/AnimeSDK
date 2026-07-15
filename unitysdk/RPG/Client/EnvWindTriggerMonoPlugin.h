#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/WindTriggerType.h"
#include "unitysdk/RPG/Client/EnvWindTriggerMonoPlugin_WindApplyType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class EnvWindTriggerBehavior; }

#define RPG_CLIENT_ENVWINDTRIGGERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x18D9A790)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvWindTriggerMonoPlugin_TypeDefinitionIndex = 67864;

	class EnvWindTriggerMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::EnvWindTriggerBehavior*>
	{
	public:
		::EnviromentSystem::WindTriggerType TriggerType; // 0x30
		::RPG::Client::EnvWindTriggerMonoPlugin_WindApplyType ApplyType; // 0x34
		::System::Single Intensity; // 0x38
		::System::Single RadiusSoftness; // 0x3C
		::System::Single RangeSofness; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDTRIGGERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoTimelineControlGameLevelGroup_TriggerActionConfig.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERACTIONCONFIG_ACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3EBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelGroup_TriggerActionConfig_Active_TypeDefinitionIndex = 48944;

	class MonoTimelineControlGameLevelGroup_TriggerActionConfig_Active : public ::RPG::Client::MonoTimelineControlGameLevelGroup_TriggerActionConfig
	{
	public:
		::System::Boolean active; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERACTIONCONFIG_ACTIVE__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/MonoTimelineControlGameLevelGroup_TriggerActionConfig.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERACTIONCONFIG_ROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC14FF60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelGroup_TriggerActionConfig_Rotate_TypeDefinitionIndex = 56489;

	class MonoTimelineControlGameLevelGroup_TriggerActionConfig_Rotate : public ::RPG::Client::MonoTimelineControlGameLevelGroup_TriggerActionConfig
	{
	public:
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation deltaRotation; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERACTIONCONFIG_ROTATE__CTOR_OFFSET))(this);
		}
	};
}

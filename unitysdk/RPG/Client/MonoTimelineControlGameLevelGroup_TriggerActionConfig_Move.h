#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoTimelineControlGameLevelGroup_TriggerActionConfig.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERACTIONCONFIG_MOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xD86DAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelGroup_TriggerActionConfig_Move_TypeDefinitionIndex = 60546;

	class MonoTimelineControlGameLevelGroup_TriggerActionConfig_Move : public ::RPG::Client::MonoTimelineControlGameLevelGroup_TriggerActionConfig
	{
	public:
		::UnityEngine::Vector3Int deltaMove; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERACTIONCONFIG_MOVE__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC14FF30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelGroup_TriggerActionConfig_TypeDefinitionIndex = 56487;

	class MonoTimelineControlGameLevelGroup_TriggerActionConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERACTIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}

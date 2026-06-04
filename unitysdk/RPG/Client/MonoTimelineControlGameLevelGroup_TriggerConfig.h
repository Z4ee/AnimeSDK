#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoTimelineControlGameLevelGroup_TriggerActionConfig; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC14FF70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelGroup_TriggerConfig_TypeDefinitionIndex = 56491;

	class MonoTimelineControlGameLevelGroup_TriggerConfig : public ::System::Object
	{
	public:
		::System::String* uniqueName; // 0x10
		::UnityEngine::Animator* animator; // 0x18
		::System::String* animatorTriggerParam; // 0x20
		::RPG::Client::MonoTimelineControlGameLevelGroup_TriggerActionConfig* actionConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELGROUP_TRIGGERCONFIG__CTOR_OFFSET))(this);
		}
	};
}

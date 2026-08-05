#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONFOLLOWCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x6516C0)
#define NPCCROWD_AI_AIACTIONFOLLOWCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x651710)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionFollowConfig_TypeDefinitionIndex = 61030;

	struct alignas(8) AIActionFollowConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Single duration; // 0x18
		::System::Boolean completeOnEnter; // 0x1C
		::System::Boolean isExit; // 0x1D
		::System::Single stopRadius; // 0x20

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONFOLLOWCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONFOLLOWCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

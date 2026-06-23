#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONRETURNTOPATHFOLLOWCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x5B0FF0)
#define NPCCROWD_AI_AIACTIONRETURNTOPATHFOLLOWCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x5B1040)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionReturnToPathFollowConfig_TypeDefinitionIndex = 54510;

	struct alignas(8) AIActionReturnToPathFollowConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRETURNTOPATHFOLLOWCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRETURNTOPATHFOLLOWCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

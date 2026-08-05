#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONSETPATHFOLLOWTARGETCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x669990)
#define NPCCROWD_AI_AIACTIONSETPATHFOLLOWTARGETCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x6699E0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionSetPathFollowTargetConfig_TypeDefinitionIndex = 70425;

	struct alignas(8) AIActionSetPathFollowTargetConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Int32 targetFeaturePoint; // 0x18

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONSETPATHFOLLOWTARGETCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONSETPATHFOLLOWTARGETCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

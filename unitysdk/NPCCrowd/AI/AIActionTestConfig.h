#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/NPCCrowd/Accessories/NPCUnionAnimatorManager_NPCAnimationStateParams.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONTESTCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x580950)
#define NPCCROWD_AI_AIACTIONTESTCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x5809A0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionTestConfig_TypeDefinitionIndex = 65983;

	struct alignas(8) AIActionTestConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::NPCCrowd::Accessories::NPCUnionAnimatorManager_NPCAnimationStateParams key; // 0x18
		::System::Single value; // 0x1C

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONTESTCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONTESTCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

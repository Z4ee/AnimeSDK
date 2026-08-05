#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AIActionStateParamType.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/NPCCrowd/Animation/NPCUnionAnimatorManager_NPCAnimationStateParams.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONSETSTATEPARAMCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x753510)
#define NPCCROWD_AI_AIACTIONSETSTATEPARAMCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x753560)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionSetStateParamConfig_TypeDefinitionIndex = 56203;

	struct alignas(8) AIActionSetStateParamConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::NPCCrowd::AI::AIActionStateParamType paramType; // 0x18
		::NPCCrowd::Animation::NPCUnionAnimatorManager_NPCAnimationStateParams key; // 0x1C
		::System::Single value; // 0x20
		::System::Boolean keepValueOnEnd; // 0x24

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONSETSTATEPARAMCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONSETSTATEPARAMCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

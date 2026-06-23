#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONDELAYDESTROYCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x591380)
#define NPCCROWD_AI_AIACTIONDELAYDESTROYCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x5913D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionDelayDestroyConfig_TypeDefinitionIndex = 81794;

	struct alignas(8) AIActionDelayDestroyConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Single delay; // 0x18

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONDELAYDESTROYCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONDELAYDESTROYCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

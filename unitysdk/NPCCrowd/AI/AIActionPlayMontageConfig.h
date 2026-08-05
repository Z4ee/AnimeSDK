#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/NPCCrowd/Ability/EMontagePriorityLayer.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONPLAYMONTAGECONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x6326C0)
#define NPCCROWD_AI_AIACTIONPLAYMONTAGECONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x632710)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionPlayMontageConfig_TypeDefinitionIndex = 80694;

	struct alignas(8) AIActionPlayMontageConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Int32 montageKey; // 0x18
		::NPCCrowd::Ability::EMontagePriorityLayer montageLayer; // 0x1C
		::System::Boolean controlDuration; // 0x20
		::System::Single duration; // 0x24
		::System::Boolean isLoop; // 0x28

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYMONTAGECONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYMONTAGECONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

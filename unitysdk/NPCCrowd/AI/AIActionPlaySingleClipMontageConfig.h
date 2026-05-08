#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONPLAYSINGLECLIPMONTAGECONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x686F40)
#define NPCCROWD_AI_AIACTIONPLAYSINGLECLIPMONTAGECONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x686F90)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionPlaySingleClipMontageConfig_TypeDefinitionIndex = 61387;

	struct alignas(8) AIActionPlaySingleClipMontageConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Int32 animID; // 0x18
		::System::Boolean controlDuration; // 0x1C
		::System::Single duration; // 0x20

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYSINGLECLIPMONTAGECONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYSINGLECLIPMONTAGECONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

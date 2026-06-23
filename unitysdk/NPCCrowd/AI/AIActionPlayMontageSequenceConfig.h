#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/NPCCrowd/Ability/EMontagePriorityLayer.h"
#include "unitysdk/NPCCrowd/Animation/ClipSequenceMontageData.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONPLAYMONTAGESEQUENCECONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x693F90)
#define NPCCROWD_AI_AIACTIONPLAYMONTAGESEQUENCECONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x693FE0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionPlayMontageSequenceConfig_TypeDefinitionIndex = 48577;

	struct alignas(8) AIActionPlayMontageSequenceConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::NPCCrowd::Animation::ClipSequenceMontageData sequenceData; // 0x18
		::NPCCrowd::Ability::EMontagePriorityLayer montageLayer; // 0x2C
		::System::UInt32 repeatCount; // 0x30

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYMONTAGESEQUENCECONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYMONTAGESEQUENCECONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

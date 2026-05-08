#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONPLAYMONTAGECONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x72D970)
#define NPCCROWD_AI_AIACTIONPLAYMONTAGECONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x72D9C0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionPlayMontageConfig_TypeDefinitionIndex = 38068;

	struct alignas(8) AIActionPlayMontageConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Int32 montageKey; // 0x18
		::System::Boolean controlDuration; // 0x1C
		::System::Single duration; // 0x20
		::System::Boolean isLoop; // 0x24

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

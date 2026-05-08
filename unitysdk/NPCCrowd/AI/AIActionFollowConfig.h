#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONFOLLOWCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x6B4090)
#define NPCCROWD_AI_AIACTIONFOLLOWCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x6B40E0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionFollowConfig_TypeDefinitionIndex = 68012;

	struct alignas(8) AIActionFollowConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Single duration; // 0x18

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

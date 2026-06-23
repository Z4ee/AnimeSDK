#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_AIACTIONCOLLIDERENABLECONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x731C80)
#define NPCCROWD_AI_AIACTIONCOLLIDERENABLECONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x731CD0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionColliderEnableConfig_TypeDefinitionIndex = 79683;

	struct alignas(8) AIActionColliderEnableConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Boolean enable; // 0x18
		::System::Boolean resetDither; // 0x19

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONCOLLIDERENABLECONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONCOLLIDERENABLECONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

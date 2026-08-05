#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_AI_AIACTIONROOTROTATECONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x69C8B0)
#define NPCCROWD_AI_AIACTIONROOTROTATECONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x69C900)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionRootRotateConfig_TypeDefinitionIndex = 90807;

	struct alignas(8) AIActionRootRotateConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::UnityEngine::Vector3 axis; // 0x18
		::System::Single angularSpeed; // 0x24

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONROOTROTATECONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONROOTROTATECONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

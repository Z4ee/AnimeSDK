#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_AI_AIACTIONINTERACTMOVETOCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x462D10)
#define NPCCROWD_AI_AIACTIONINTERACTMOVETOCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x462D60)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionInteractMoveToConfig_TypeDefinitionIndex = 84623;

	struct alignas(8) AIActionInteractMoveToConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::UnityEngine::Vector3 destination; // 0x18
		::UnityEngine::Vector3 direction; // 0x24
		::System::Boolean stopOnArrival; // 0x30
		::System::Boolean disableTurn; // 0x31
		::System::Boolean disablePhysicsGrounded; // 0x32

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONINTERACTMOVETOCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONINTERACTMOVETOCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}

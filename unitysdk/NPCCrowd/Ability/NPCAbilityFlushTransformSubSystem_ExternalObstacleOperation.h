#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityFlushTransformSubSystem_ExternalObstacleOperationType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFlushTransformSubSystem_ExternalObstacleOperation_TypeDefinitionIndex = 48633;

	struct alignas(4) NPCAbilityFlushTransformSubSystem_ExternalObstacleOperation
	{
		::NPCCrowd::Ability::NPCAbilityFlushTransformSubSystem_ExternalObstacleOperationType operationType; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::UnityEngine::Vector3 velocity; // 0x20
	};
}

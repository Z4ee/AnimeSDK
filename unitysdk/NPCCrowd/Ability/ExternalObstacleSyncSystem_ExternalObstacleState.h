#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ExternalObstacleSyncSystem_ExternalObstacleState_TypeDefinitionIndex = 85098;

	struct alignas(4) ExternalObstacleSyncSystem_ExternalObstacleState
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 velocity; // 0x1C
	};
}

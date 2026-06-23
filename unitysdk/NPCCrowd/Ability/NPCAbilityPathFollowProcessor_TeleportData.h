#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowProcessor_TeleportData_TypeDefinitionIndex = 67699;

	struct alignas(4) NPCAbilityPathFollowProcessor_TeleportData
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Int32 pathID; // 0x1C
		::System::Byte nearestControlPointIdx; // 0x20
		::System::Byte nearest2ndControlPointIdx; // 0x21
		::System::Int32 laneIdx; // 0x24
		::System::Single distanceToNearestPoint; // 0x28
		::System::Single distanceToNearest2ndPoint; // 0x2C
	};
}

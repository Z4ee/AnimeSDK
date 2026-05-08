#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowProcessor_NearestData_TypeDefinitionIndex = 57252;

	struct alignas(4) NPCAbilityPathFollowProcessor_NearestData
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Int32 pathID; // 0x1C
		::System::Byte nearestControlPointIdx; // 0x20
		::System::Int32 laneIdx; // 0x24
		::System::Boolean forward; // 0x28
	};
}

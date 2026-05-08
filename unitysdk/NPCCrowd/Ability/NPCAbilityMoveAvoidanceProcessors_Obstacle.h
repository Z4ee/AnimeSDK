#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityMoveAvoidanceProcessors_ObstacleFlags.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_OBSTACLE_GET_CANAVOID_OFFSET UNITYSDK_OFFSET(0x50C280)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_OBSTACLE_GET_ISMOVING_OFFSET UNITYSDK_OFFSET(0x50C2A0)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_OBSTACLE_SET_CANAVOID_OFFSET UNITYSDK_OFFSET(0x50C290)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_OBSTACLE_SET_ISMOVING_OFFSET UNITYSDK_OFFSET(0x50C2B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMoveAvoidanceProcessors_Obstacle_TypeDefinitionIndex = 41979;

	struct alignas(4) NPCAbilityMoveAvoidanceProcessors_Obstacle
	{
		::UnityEngine::Vector3 Location; // 0x10
		::UnityEngine::Vector3 Velocity; // 0x1C
		::System::Single Raidus; // 0x28
		::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors_ObstacleFlags _flags; // 0x2C

		::System::Boolean get_CanAvoid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_OBSTACLE_GET_CANAVOID_OFFSET))(this);
		}

		::System::Void set_CanAvoid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_OBSTACLE_SET_CANAVOID_OFFSET))(this, value);
		}

		::System::Boolean get_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_OBSTACLE_GET_ISMOVING_OFFSET))(this);
		}

		::System::Void set_IsMoving(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_OBSTACLE_SET_ISMOVING_OFFSET))(this, value);
		}
	};
}

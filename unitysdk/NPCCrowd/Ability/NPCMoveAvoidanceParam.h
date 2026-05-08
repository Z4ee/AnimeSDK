#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ABILITY_NPCMOVEAVOIDANCEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x11D85C60)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCMoveAvoidanceParam_TypeDefinitionIndex = 41539;

	class NPCMoveAvoidanceParam : public ::System::Object
	{
	public:
		// static const ::System::Single MinDistanceValue; // 0x0
		::System::Single obstacleDetectionDistance; // 0x10
		::System::Single obstacleSeparationDistance; // 0x14
		::System::Single obstacleRadius; // 0x18
		::System::Single standingObstacleAvoidanceScale; // 0x1C
		::System::Single separationRadius; // 0x20
		::System::Single obstacleSeparationStiffness; // 0x24
		::System::Single obstaclePredictiveAvoidanceStiffness; // 0x28
		::System::Single predictiveAvoidanceTime; // 0x2C
		::System::Single predictiveAvoidanceRadius; // 0x30
		::System::Single obstaclePredictiveAvoidanceDistance; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCMOVEAVOIDANCEPARAM__CTOR_OFFSET))(this);
		}
	};
}

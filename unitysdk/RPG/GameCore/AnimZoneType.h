#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimZoneType_TypeDefinitionIndex = 15644;

	enum class AnimZoneType : ::System::Int32
	{
		Unknow = 0,
		LogicAnimZoneStart = 1,
		Standby = 2,
		Idle = 3,
		Move = 4,
		LogicAnimZoneEnd = 5,
		ForbidMove = 6,
		ForbidRotation = 7,
		ForbidAtk = 8,
		ForbidOffStage = 9,
		EnableLookAt = 10,
		StepOnRight = 11,
		Foot = 12,
		TurnBack = 13,
		AnimSteer = 14,
		CurveSteer = 15,
		FootIK = 16,
		FootIKLockLeft = 17,
		FootIKLockRight = 18,
		ForbidTeamEdit = 19,
		ForbidSelected = 20,
		EnableModifyMoveAnimSpeed = 21,
		AllowEffectShowAfterImage = 22,
		EnableOnlySpringBoneCollision = 23,
		EnableNavigationMove = 24,
		EnableNavigationRootMotionRotation = 25,
		CacheAttackInput = 26,
		CacheMazeSkillInput = 27,
		AnimFollow = 28,
		EnableInteractionInSkill = 29,
		DesignerCustomZone1 = 30,
		DesignerCustomZone2 = 31,
		DesignerCustomZone3 = 32,
		DesignerCustomZone4 = 33,
		DesignerCustomZone5 = 34,
	};
}

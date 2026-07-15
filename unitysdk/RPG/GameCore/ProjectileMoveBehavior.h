#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileMoveBehavior_TypeDefinitionIndex = 15042;

	enum class ProjectileMoveBehavior : ::System::Int32
	{
		Unknow = 0,
		Linear = 1,
		RandomTrace = 2,
		Boomerang = 3,
		HalfBoomerang = 4,
		Parabola = 5,
		Bezier = 6,
		BGCurvePrefab = 7,
		LinearWithHitDetect = 8,
		FollowWithDetect = 9,
		Static = 10,
		Bouncy = 11,
		HalfBoomerangWithDetect = 12,
		TraceWithDetect = 13,
		BGCurvePrefabWithDetect = 14,
		CameraForwardWithDetect = 15,
	};
}

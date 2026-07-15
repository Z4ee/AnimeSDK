#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactSimFlags_TypeDefinitionIndex = 35083;

	enum class B2ContactSimFlags : ::System::Int32
	{
		b2_simTouchingFlag = 65536,
		b2_simDisjoint = 131072,
		b2_simStartedTouching = 262144,
		b2_simStoppedTouching = 524288,
		b2_simEnableHitEvent = 1048576,
		b2_simEnablePreSolveEvents = 2097152,
	};
}

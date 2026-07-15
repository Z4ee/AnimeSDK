#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BodyFlags_TypeDefinitionIndex = 35046;

	enum class B2BodyFlags : ::System::Int32
	{
		b2_lockLinearX = 1,
		b2_lockLinearY = 2,
		b2_lockAngularZ = 4,
		b2_isFast = 8,
		b2_isBullet = 16,
		b2_isSpeedCapped = 32,
		b2_hadTimeOfImpact = 64,
		b2_allowFastRotation = 128,
		b2_enlargeBounds = 256,
		b2_allLocks = 7,
	};
}

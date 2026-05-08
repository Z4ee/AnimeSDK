#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_BulletMode_TypeDefinitionIndex = 73423;

	enum class ShootingGroundSubsystem_BulletMode : ::System::Int32
	{
		SingleShot = 0,
		BurstFire = 1,
		ScopedShot = 2,
	};
}

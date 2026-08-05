#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_BulletMode_TypeDefinitionIndex = 78098;

	enum class ShootingGroundSubsystem_BulletMode : ::System::Int32
	{
		BurstFire = 1,
		ScopedShot = 2,
		SingleShot = 0,
	};
}

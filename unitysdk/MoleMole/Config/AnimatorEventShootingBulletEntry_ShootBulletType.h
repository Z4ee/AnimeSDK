#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventShootingBulletEntry_ShootBulletType_TypeDefinitionIndex = 46323;

	enum class AnimatorEventShootingBulletEntry_ShootBulletType : ::System::Int32
	{
		ScopedShot = 2,
		BurstFire = 1,
		SingleShot = 0,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventShootingBulletEntry_ShootBulletType_TypeDefinitionIndex = 53391;

	enum class AnimatorEventShootingBulletEntry_ShootBulletType : ::System::Int32
	{
		SingleShot = 0,
		BurstFire = 1,
		ScopedShot = 2,
	};
}

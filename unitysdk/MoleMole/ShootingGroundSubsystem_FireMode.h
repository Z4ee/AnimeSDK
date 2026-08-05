#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_FireMode_TypeDefinitionIndex = 78099;

	enum class ShootingGroundSubsystem_FireMode : ::System::Int32
	{
		Normal = 0,
		UnLimitBullet = 1,
	};
}

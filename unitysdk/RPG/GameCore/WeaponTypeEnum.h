#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WeaponTypeEnum_TypeDefinitionIndex = 15849;

	enum class WeaponTypeEnum : ::System::Int32
	{
		WP_Punch = 0,
		WP_Bullet = 1,
		WP_Punch_Mech = 2,
		WP_Scythe = 3,
		WP_Sword = 4,
		WP_Sword_Long = 5,
		WP_Explode = 6,
		WP_Silence = 7,
		WP_Magic = 8,
	};
}

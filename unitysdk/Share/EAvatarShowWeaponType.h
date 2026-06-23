#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarShowWeaponType_TypeDefinitionIndex = 14064;

	enum class EAvatarShowWeaponType : ::System::Int32
	{
		SHOW_WEAPON_LOCK = 0,
		SHOW_WEAPON_INACTIVE = 2,
		SHOW_WEAPON_ACTIVE = 1,
	};
}

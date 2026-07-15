#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int UpgradeAvatarSubRelicType_TypeDefinitionIndex = 14848;

	enum class UpgradeAvatarSubRelicType : ::System::Int32
	{
		None = 0,
		Base = 1,
		LowSpeed = 2,
		HighSpeed = 3,
		HighAttack = 4,
		HighDefence = 5,
		HighHP = 6,
		HighBreakDamage = 7,
		DOT = 8,
	};
}

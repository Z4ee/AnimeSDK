#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBonusType_TypeDefinitionIndex = 12917;

	enum class GridFightBonusType : ::System::Int32
	{
		Gold = 0,
		Refresh = 2,
		SpecificAvatar = 5,
		RandomAvatar = 6,
		Item = 7,
		Exp = 8,
		Orb = 9,
		RandomEquipByCategory = 13,
		RandomEquipByFunc = 14,
		RandomSameAvatar = 15,
		SpecificAvatarWithEquip = 16,
		SpecificAvatarWithRandomEquip = 17,
	};
}

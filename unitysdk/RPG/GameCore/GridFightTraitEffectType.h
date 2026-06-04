#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEffectType_TypeDefinitionIndex = 13012;

	enum class GridFightTraitEffectType : ::System::Int32
	{
		None = 0,
		TempEquip = 1,
		TraitBonus = 2,
		Bonus = 3,
		MazeBuffEnhance = 4,
		CoreRoleChoose = 5,
		SPSlot = 6,
		CoreRoleByEquipNum = 7,
		TraitEffectByJson = 8,
		SelectEnhance = 9,
		GainFrontTrait = 10,
		BackStrengthenFront = 11,
		Elation = 12,
	};
}

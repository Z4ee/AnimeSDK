#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipDressType_TypeDefinitionIndex = 12942;

	enum class GridFightEquipDressType : ::System::Int32
	{
		DressRuleNotUnique = 0,
		DressRuleUnique = 1,
		DressRuleAllSlotEmpty = 2,
		DressRuleLeader = 3,
		DressRuleTraitOnly = 4,
		DressRuleUniqueAndExclusiveTrait = 5,
		DressRuleRoleOnly = 6,
	};
}

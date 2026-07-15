#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitRemarkActiveType_TypeDefinitionIndex = 13161;

	enum class GridFightTraitRemarkActiveType : ::System::Int32
	{
		None = 0,
		RoleActivate = 1,
		LayerEqual = 2,
		LayerGreaterEqual = 3,
		EquipActivate = 4,
		Default = 5,
		CoreRoleByEquipNumActivate = 6,
		CoreRoleActivate = 7,
		ExpertActivate = 8,
		RandomPropertyByRole = 9,
		RandomPropertyByEquip = 10,
		EffectRoleActivate = 11,
		EffectEquipActivate = 12,
	};
}

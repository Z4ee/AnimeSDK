#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipCategory_TypeDefinitionIndex = 10202;

	enum class GridFightEquipCategory : ::System::Int32
	{
		None = 0,
		Basic = 1,
		Craftable = 2,
		Emblem = 3,
		Crown = 4,
		TraitSpecial = 5,
		Artifacts = 6,
		Radiant = 7,
		Support = 8,
		Other = 9,
		Material = 10,
		Trash = 11,
		GoldTrash = 12,
		Hack = 13,
		FateEquip = 14,
	};
}

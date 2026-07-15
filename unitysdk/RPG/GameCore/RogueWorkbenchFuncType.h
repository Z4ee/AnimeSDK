#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncType_TypeDefinitionIndex = 10251;

	enum class RogueWorkbenchFuncType : ::System::Int32
	{
		None = 0,
		BuffEnhance = 1,
		BuffReforge = 2,
		FormulaReforge = 3,
		MiracleCompose = 4,
		MiracleReforge = 5,
		MagicScepterShop = 6,
		MagicUnitShop = 7,
		MagicUnitCompose = 8,
		MagicUnitReforge = 9,
		MagicScepterLevelUp = 10,
		HexEquipment = 11,
	};
}

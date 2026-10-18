#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftEffectType_TypeDefinitionIndex = 41657;

	enum class MechCraftEffectType : ::System::Int32
	{
		None = 0,
		ExpandBoard = 1,
		CellOverlapCount = 2,
		OrderIncomePercentIncrease = 3,
		UnlockBuffChip = 4,
		BuffChipAdjacentAttributePercentIncrease = 5,
		BuffChipDirectionalAttributePercentIncrease = 6,
		BaseAttributeValue = 7,
		BuffChipFullLineBaseAttributeValueIncrease = 8,
		BuffChipIgnoreOverlapLimit = 9,
		BuffChipOverlappedChipAttributePercentIncrease = 10,
	};
}

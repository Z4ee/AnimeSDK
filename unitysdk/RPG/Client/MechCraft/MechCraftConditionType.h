#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftConditionType_TypeDefinitionIndex = 41650;

	enum class MechCraftConditionType : ::System::Int32
	{
		None = 0,
		And = 1,
		WorkshopLevelReach = 2,
		DesignLevelReach = 3,
		AllAttributeLevelReach = 4,
		ExamPass = 5,
		ChipCountGE = 6,
		ChipCountLE = 7,
		ChipTypeCountGE = 8,
		ChipTypeCountLE = 9,
		ChipTraitCountGE = 10,
		ChipTraitCountLE = 11,
		ChipTypeCount = 12,
		ChipCount = 13,
		IntegrationPercentGE = 14,
		TargetChipCount = 15,
		TargetChipUsed = 16,
		TargetChipsOnly = 17,
		CoverageSymmetrical = 18,
	};
}

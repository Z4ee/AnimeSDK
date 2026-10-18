#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftConstraintConditionStatType_TypeDefinitionIndex = 41653;

	enum class MechCraftConstraintConditionStatType : ::System::Int32
	{
		ChipCount = 0,
		ChipTypeCount = 1,
		TargetTraitCount = 2,
		TargetChipCount = 3,
		TargetChipUsed = 4,
		IntegrationPercent = 5,
		TargetChipsOnly = 6,
		CoverageSymmetrical = 7,
	};
}

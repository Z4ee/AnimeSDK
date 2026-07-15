#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityProperty_TypeDefinitionIndex = 16796;

	enum class AdventureAbilityProperty : ::System::Int32
	{
		Unknow = 0,
		CurrentHP = 1,
		MaxHP = 2,
		BaseHP = 3,
		HPAddedRatio = 4,
		HPDelta = 5,
		DirtyHPRatio = 6,
		CurrentSP = 7,
		MaxSP = 8,
		Rank = 9,
		Promotion = 10,
		Level = 11,
		MoveSpeedAttenuationRatio = 12,
		AlertDecSpeedRatio = 13,
		CurrentSpecialSP = 14,
		MaxSpecialSP = 15,
		Count = 16,
	};
}

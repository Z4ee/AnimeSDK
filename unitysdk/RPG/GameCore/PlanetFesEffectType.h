#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesEffectType_TypeDefinitionIndex = 11710;

	enum class PlanetFesEffectType : ::System::Int32
	{
		None = 0,
		IncomeIncreaseIfLandTypeMatch = 1,
		IncomeIncreaseIfAvatarIdMatch = 2,
		IncomeIncreaseIfOnline = 3,
		EventIncomeIncrease = 4,
		AllLandIncomeIncrease = 9,
		AllEventIncomeIncrease = 10,
		BonusEventIncomeIncrease = 11,
		AllBonusEventIncomeIncrease = 12,
		AllLandIncomeIncreaseWithFesLevel = 13,
	};
}

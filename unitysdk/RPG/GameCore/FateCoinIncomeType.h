#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCoinIncomeType_TypeDefinitionIndex = 10148;

	enum class FateCoinIncomeType : ::System::Int32
	{
		None = 0,
		Round = 1,
		BattleWin = 2,
		Reiju = 3,
		Trait = 4,
	};
}

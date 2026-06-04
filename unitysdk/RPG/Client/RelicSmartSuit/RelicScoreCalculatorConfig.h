#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicScoreCalculatorConfig_TypeDefinitionIndex = 69508;

	enum class RelicScoreCalculatorConfig : ::System::Int32
	{
		Invalid = 0,
		RealScore = 1,
		AsMaxLevel = 2,
		PropertyBonus = 4,
		CriticalChancePenalty = 8,
		CriticalChanceBonus = 16,
		PlanA = 18,
		PlanB = 22,
		PlanC = 30,
		PlanD = 26,
	};
}

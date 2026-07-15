#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicScoreCalculatorConfig_TypeDefinitionIndex = 71031;

	enum class RelicScoreCalculatorConfig : ::System::Int32
	{
		Invalid = 0,
		RealScore = 1,
		AsMaxLevel = 2,
		CriticalChanceBonus = 16,
		PlanA = 18,
	};
}

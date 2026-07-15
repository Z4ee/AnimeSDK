#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PlanExtraScoreCalculatorConfig_TypeDefinitionIndex = 71027;

	enum class PlanExtraScoreCalculatorConfig : ::System::Int32
	{
		Invalid = 0,
		Real = 1,
		AsMaxLevel = 2,
	};
}

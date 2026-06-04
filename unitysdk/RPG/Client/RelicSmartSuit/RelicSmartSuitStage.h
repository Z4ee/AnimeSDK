#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitStage_TypeDefinitionIndex = 69484;

	enum class RelicSmartSuitStage : ::System::Int32
	{
		None = 0,
		SelfPlanStage = 1,
		SystemPlanStage = 2,
		HighlyPlanStage = 4,
		CustomPlanStage = 8,
		AllStages = 15,
		PlanA = 16,
		PlanB = 32,
		PlanC = 64,
		PlanD = 128,
		AllStrategy = 240,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTurnBasedStage_TypeDefinitionIndex = 15211;

	enum class ChimeraTurnBasedStage : ::System::Int32
	{
		None = 0,
		BeforeAction = 1,
		OnTakingAction = 2,
		Action = 3,
		AfterAction = 4,
		FinishWorking = 5,
		BeforeDeath = 6,
		AfterInjured = 7,
		TurnSettle = 8,
	};
}

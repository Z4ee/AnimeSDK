#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTurnBasedActionStage_TypeDefinitionIndex = 15212;

	enum class ChimeraTurnBasedActionStage : ::System::Int32
	{
		None = 0,
		BeforeAction = 1,
		OnTakingAction = 2,
		AfterAction = 4,
		FinishWorking = 5,
		BeforeDeath = 6,
		AfterInjured = 7,
	};
}

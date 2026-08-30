#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudCardAreaViewModel_CardCycleAnimationState_TypeDefinitionIndex = 79565;

	enum class FateRinBattleHudCardAreaViewModel_CardCycleAnimationState : ::System::Int32
	{
		Pending = 0,
		Running = 1,
		Completed = 2,
	};
}

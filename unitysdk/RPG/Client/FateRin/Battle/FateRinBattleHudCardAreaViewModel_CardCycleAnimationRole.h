#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudCardAreaViewModel_CardCycleAnimationRole_TypeDefinitionIndex = 79561;

	enum class FateRinBattleHudCardAreaViewModel_CardCycleAnimationRole : ::System::Int32
	{
		None = 0,
		Draw = 1,
		Discard = 2,
		Recycle = 3,
	};
}

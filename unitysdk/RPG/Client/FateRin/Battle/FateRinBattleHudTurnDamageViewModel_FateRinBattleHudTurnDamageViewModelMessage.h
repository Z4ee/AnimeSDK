#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudTurnDamageViewModel_FateRinBattleHudTurnDamageViewModelMessage_TypeDefinitionIndex = 79616;

	enum class FateRinBattleHudTurnDamageViewModel_FateRinBattleHudTurnDamageViewModelMessage : ::System::Int32
	{
		None = 0,
		OnTotalDamageFinish = 1,
	};
}

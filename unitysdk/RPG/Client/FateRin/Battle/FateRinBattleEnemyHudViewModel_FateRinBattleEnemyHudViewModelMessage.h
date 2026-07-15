#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudViewModel_FateRinBattleEnemyHudViewModelMessage_TypeDefinitionIndex = 75908;

	enum class FateRinBattleEnemyHudViewModel_FateRinBattleEnemyHudViewModelMessage : ::System::Int32
	{
		None = 0,
		OnLevelGameModeStateChangedEvent = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudHideType_TypeDefinitionIndex = 75903;

	enum class FateRinBattleEnemyHudHideType : ::System::Int32
	{
		Show = 0,
		Default = 1,
		DitherAlpha = 2,
		EntityViewActive = 4,
		SetEnemyHudShowTask = 8,
	};
}

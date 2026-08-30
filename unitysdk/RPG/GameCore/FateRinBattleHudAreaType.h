#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinBattleHudAreaType_TypeDefinitionIndex = 24175;

	enum class FateRinBattleHudAreaType : ::System::Int32
	{
		All = 0,
		AllExceptBossBar = 1,
		EndActionButton = 2,
	};
}

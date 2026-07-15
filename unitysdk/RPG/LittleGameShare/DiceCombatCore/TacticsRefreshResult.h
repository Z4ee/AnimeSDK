#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsRefreshResult_TypeDefinitionIndex = 34970;

	enum class TacticsRefreshResult : ::System::Byte
	{
		Success = 0x0,
		AlreadyRefreshedThisTurn = 0x1,
		NotEnoughTacticsPoint = 0x2,
		SystemDisabled = 0x3,
	};
}

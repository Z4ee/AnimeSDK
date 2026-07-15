#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsDiscardResult_TypeDefinitionIndex = 34971;

	enum class TacticsDiscardResult : ::System::Byte
	{
		Success = 0x0,
		CardNotInHand = 0x1,
		InvalidIndex = 0x2,
		SystemDisabled = 0x3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsCardUseCheckResult_TypeDefinitionIndex = 34937;

	enum class TacticsCardUseCheckResult : ::System::Byte
	{
		Success = 0x0,
		TurnMismatch = 0x1,
		InvalidGameState = 0x2,
		NotChallenger = 0x3,
		InvalidIndex = 0x4,
		CardConfigNotFound = 0x5,
		TypeMismatch = 0x6,
		EmptyRequest = 0x7,
		DuplicateIndex = 0x8,
		SystemDisabled = 0x9,
	};
}

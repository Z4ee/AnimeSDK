#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsBuyResult_TypeDefinitionIndex = 34969;

	enum class TacticsBuyResult : ::System::Byte
	{
		Success = 0x0,
		CardNotInShop = 0x1,
		NotEnoughTacticsPoint = 0x2,
		HandIsFull = 0x3,
		SystemDisabled = 0x4,
	};
}

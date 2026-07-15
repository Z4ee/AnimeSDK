#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsBuyFinishResult_TypeDefinitionIndex = 34972;

	enum class TacticsBuyFinishResult : ::System::Byte
	{
		ContinueWaiting = 0x0,
		EnterNextState = 0x1,
		Invalid = 0x2,
	};
}

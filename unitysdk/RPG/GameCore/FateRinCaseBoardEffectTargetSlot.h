#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardEffectTargetSlot_TypeDefinitionIndex = 23592;

	enum class FateRinCaseBoardEffectTargetSlot : ::System::Int32
	{
		None = 0,
		Avatar = 1,
		Master = 2,
		Servant = 3,
		Master2 = 4,
	};
}

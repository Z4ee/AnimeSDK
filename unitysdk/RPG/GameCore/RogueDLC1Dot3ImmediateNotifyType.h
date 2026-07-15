#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3ImmediateNotifyType_TypeDefinitionIndex = 23748;

	enum class RogueDLC1Dot3ImmediateNotifyType : ::System::Int32
	{
		Unknow = 0,
		DiceTurnPanelRefresh = 1,
		DiceRemove = 2,
		CompassInteract = 3,
		RayInteract = 4,
		CandyCrashRoundEnd = 5,
		CandyCrashRoundUIRefresh = 6,
		CandyCrashGameEnd = 7,
	};
}

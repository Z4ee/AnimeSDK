#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController_ReadyState_TypeDefinitionIndex = 65754;

	enum class UIArcadeTeamChildWindowController_ReadyState : ::System::Int32
	{
		MatchReady = 2,
		WaitMatch = 0,
		Matching = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController_ReadyState_TypeDefinitionIndex = 60525;

	enum class UIArcadeTeamChildWindowController_ReadyState : ::System::Int32
	{
		WaitMatch = 0,
		MatchReady = 2,
		Matching = 1,
	};
}

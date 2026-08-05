#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengePageController_PageState_TypeDefinitionIndex = 83094;

	enum class UIDailyChallengePageController_PageState : ::System::Int32
	{
		SelectLineup = 2,
		TurningToLineup = 1,
		TuringToLevel = 3,
		SelectLevel = 0,
	};
}

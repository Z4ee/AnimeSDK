#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDataAdjustGameWidgetController_EDataAdjustGamePhase_TypeDefinitionIndex = 49740;

	enum class UIDataAdjustGameWidgetController_EDataAdjustGamePhase : ::System::Int32
	{
		None = 0,
		Countdown = 2,
		InGame = 3,
		Start = 1,
		Winning = 4,
	};
}

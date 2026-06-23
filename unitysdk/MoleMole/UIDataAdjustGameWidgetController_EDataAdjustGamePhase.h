#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDataAdjustGameWidgetController_EDataAdjustGamePhase_TypeDefinitionIndex = 71161;

	enum class UIDataAdjustGameWidgetController_EDataAdjustGamePhase : ::System::Int32
	{
		None = 0,
		Winning = 4,
		InGame = 3,
		Start = 1,
		Countdown = 2,
	};
}

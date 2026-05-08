#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDataAdjustGameWidgetController_EDataAdjustGamePhase_TypeDefinitionIndex = 43708;

	enum class UIDataAdjustGameWidgetController_EDataAdjustGamePhase : ::System::Int32
	{
		Countdown = 2,
		Start = 1,
		None = 0,
		InGame = 3,
		Winning = 4,
	};
}

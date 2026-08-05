#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityClockWidgetController_ProgressAnimType_TypeDefinitionIndex = 85922;

	enum class UIMainCityClockWidgetController_ProgressAnimType : ::System::Int32
	{
		CrossDayReverse = 3,
		CrossDayFadeOut = 4,
		CrossDay = 2,
		None = 0,
		Advance = 1,
	};
}

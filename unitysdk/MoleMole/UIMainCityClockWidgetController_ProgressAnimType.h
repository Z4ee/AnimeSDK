#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityClockWidgetController_ProgressAnimType_TypeDefinitionIndex = 69183;

	enum class UIMainCityClockWidgetController_ProgressAnimType : ::System::Int32
	{
		Advance = 1,
		None = 0,
		CrossDayReverse = 3,
		CrossDayFadeOut = 4,
		CrossDay = 2,
	};
}

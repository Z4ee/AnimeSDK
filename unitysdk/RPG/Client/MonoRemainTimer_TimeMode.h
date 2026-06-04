#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRemainTimer_TimeMode_TypeDefinitionIndex = 67829;

	enum class MonoRemainTimer_TimeMode : ::System::Int32
	{
		None = 0,
		ShowAll = 1,
		ShowDays = 2,
		ShowHours = 3,
		ShowMinutes = 4,
		ShowSeconds = 5,
		ShowNothing = 6,
	};
}

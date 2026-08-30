#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayTargetShowMode_TypeDefinitionIndex = 79962;

	enum class ChenLingFesGameplayTargetShowMode : ::System::Int32
	{
		WeekOnly = 0,
		GlobalThenWeek = 1,
	};
}

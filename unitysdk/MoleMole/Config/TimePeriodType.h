#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 82064;

	enum class TimePeriodType : ::System::Int32
	{
		Night = 2,
		Dusk = 1,
		Noon = 3,
		Morning = 0,
	};
}

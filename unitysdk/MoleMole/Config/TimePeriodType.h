#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 60998;

	enum class TimePeriodType : ::System::Int32
	{
		Morning = 0,
		Noon = 3,
		Night = 2,
		Dusk = 1,
	};
}

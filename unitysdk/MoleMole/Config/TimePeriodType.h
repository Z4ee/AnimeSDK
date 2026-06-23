#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 69284;

	enum class TimePeriodType : ::System::Int32
	{
		Dusk = 1,
		Noon = 3,
		Night = 2,
		Morning = 0,
	};
}

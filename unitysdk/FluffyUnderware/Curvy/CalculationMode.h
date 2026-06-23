#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CalculationMode_TypeDefinitionIndex = 38953;

	enum class CalculationMode : ::System::Int32
	{
		Precise = 1,
		Fast = 0,
	};
}

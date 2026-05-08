#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CalculationMode_TypeDefinitionIndex = 37202;

	enum class CalculationMode : ::System::Int32
	{
		Fast = 0,
		Precise = 1,
	};
}

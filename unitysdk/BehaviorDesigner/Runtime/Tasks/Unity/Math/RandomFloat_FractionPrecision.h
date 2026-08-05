#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int RandomFloat_FractionPrecision_TypeDefinitionIndex = 34309;

	enum class RandomFloat_FractionPrecision : ::System::Int32
	{
		NotApplied = 0,
		DecimalLength0 = 1,
		DecimalLength1 = 10,
		DecimalLength2 = 100,
		DecimalLength3 = 1000,
		DecimalLength4 = 10000,
	};
}

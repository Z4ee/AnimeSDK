#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AICompareType_TypeDefinitionIndex = 72105;

	enum class AICompareType : ::System::Int32
	{
		Greater = 0,
		Equal = 2,
		LessEqual = 4,
		GreaterEqual = 1,
		Less = 3,
		NotEqual = 5,
	};
}

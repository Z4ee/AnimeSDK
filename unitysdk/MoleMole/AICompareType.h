#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AICompareType_TypeDefinitionIndex = 85912;

	enum class AICompareType : ::System::Int32
	{
		Less = 3,
		Greater = 0,
		NotEqual = 5,
		Equal = 2,
		LessEqual = 4,
		GreaterEqual = 1,
	};
}

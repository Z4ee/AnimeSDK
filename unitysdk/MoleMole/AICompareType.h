#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AICompareType_TypeDefinitionIndex = 46012;

	enum class AICompareType : ::System::Int32
	{
		Greater = 0,
		Less = 3,
		LessEqual = 4,
		NotEqual = 5,
		GreaterEqual = 1,
		Equal = 2,
	};
}

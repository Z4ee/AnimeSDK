#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ValueCompareType_TypeDefinitionIndex = 63610;

	enum class ValueCompareType : ::System::Int32
	{
		Between = 5,
		Less = 3,
		GreaterEqual = 1,
		Greater = 0,
		NotEqual = 6,
		LessEqual = 4,
		Equal = 2,
		NotNullOrEmpty = 7,
	};
}

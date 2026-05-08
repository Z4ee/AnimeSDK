#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ValueCompareType_TypeDefinitionIndex = 60160;

	enum class ValueCompareType : ::System::Int32
	{
		NotEqual = 6,
		Greater = 0,
		LessEqual = 4,
		NotNullOrEmpty = 7,
		GreaterEqual = 1,
		Equal = 2,
		Between = 5,
		Less = 3,
	};
}

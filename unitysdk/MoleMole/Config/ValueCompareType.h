#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ValueCompareType_TypeDefinitionIndex = 42800;

	enum class ValueCompareType : ::System::Int32
	{
		Equal = 2,
		Between = 5,
		GreaterEqual = 1,
		NotEqual = 6,
		Greater = 0,
		LessEqual = 4,
		Less = 3,
		NotNullOrEmpty = 7,
	};
}

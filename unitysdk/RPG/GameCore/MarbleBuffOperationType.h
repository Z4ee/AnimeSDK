#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffOperationType_TypeDefinitionIndex = 11475;

	enum class MarbleBuffOperationType : ::System::Int32
	{
		Equal = 0,
		Greater = 1,
		EqualOrGreater = 2,
		Less = 3,
		EqualOrLess = 4,
		NotEqual = 5,
	};
}

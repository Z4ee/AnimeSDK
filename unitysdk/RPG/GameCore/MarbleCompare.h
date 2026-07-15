#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleCompare_TypeDefinitionIndex = 16166;

	enum class MarbleCompare : ::System::Int32
	{
		Equal = 0,
		Greater = 1,
		EqualOrGreater = 2,
		Less = 3,
		EqualOrLess = 4,
	};
}

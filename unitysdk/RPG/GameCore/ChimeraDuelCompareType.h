#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelCompareType_TypeDefinitionIndex = 15286;

	enum class ChimeraDuelCompareType : ::System::Int32
	{
		None = 0,
		Greater = 1,
		Less = 2,
		Equal = 3,
		LessOrEqual = 4,
		GreaterOrEqual = 5,
		BitAnd = 6,
	};
}

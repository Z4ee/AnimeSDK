#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameValueCompareType_TypeDefinitionIndex = 23701;

	enum class LittleGameValueCompareType : ::System::Int32
	{
		Equal = 0,
		NotEqual = 1,
		Greater = 2,
		GreaterOrEqual = 3,
		Less = 4,
		LessOrEqual = 5,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CompareType_TypeDefinitionIndex = 15803;

	enum class CompareType : ::System::Int32
	{
		Unknow = 0,
		Greater = 1,
		GreaterEqual = 2,
		NotEqual = 3,
		Equal = 4,
		LessEqual = 5,
		Less = 6,
	};
}

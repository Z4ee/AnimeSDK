#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AICompareStrategy_TypeDefinitionIndex = 14967;

	enum class AICompareStrategy : ::System::Int32
	{
		Unknow = 0,
		Min = 1,
		MinRatio = 2,
		Max = 3,
		MaxRatio = 4,
		Compare = 5,
	};
}

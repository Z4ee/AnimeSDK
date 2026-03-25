#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitUniqueGroup_TypeDefinitionIndex = 13926;

	enum class SummonUnitUniqueGroup : ::System::Int32
	{
		None = 0,
		TeamField = 1,
		_Count = 2,
	};
}

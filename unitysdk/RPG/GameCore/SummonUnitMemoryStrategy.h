#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitMemoryStrategy_TypeDefinitionIndex = 16882;

	enum class SummonUnitMemoryStrategy : ::System::Int32
	{
		NotCache = 0,
		ClearOnSwitchMap = 1,
		NotClear = 2,
	};
}

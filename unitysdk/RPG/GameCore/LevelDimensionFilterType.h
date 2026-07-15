#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterType_TypeDefinitionIndex = 16503;

	enum class LevelDimensionFilterType : ::System::Int32
	{
		None = 0,
		All = 1,
		Expression = 2,
	};
}

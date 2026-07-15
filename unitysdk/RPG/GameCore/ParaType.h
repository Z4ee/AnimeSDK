#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParaType_TypeDefinitionIndex = 14834;

	enum class ParaType : ::System::Int32
	{
		undefined = 0,
		GREATEQUAL = 1,
		GREATER = 2,
		EQUAL = 3,
		LOWER = 4,
		LOWEREQUAL = 5,
		BETWEEN = 6,
	};
}

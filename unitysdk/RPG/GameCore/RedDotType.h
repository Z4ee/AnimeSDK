#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotType_TypeDefinitionIndex = 10180;

	enum class RedDotType : ::System::Int32
	{
		Invalid = 0,
		Normal = 1,
		Number = 2,
		New = 3,
		Custom = 4,
	};
}

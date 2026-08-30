#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBarUIStatus_TypeDefinitionIndex = 24395;

	enum class ActionBarUIStatus : ::System::Int32
	{
		Invalid = 0,
		Action = 1,
		Normal = 2,
		Insert = 3,
		Ultra = 4,
		OneMore = 5,
	};
}

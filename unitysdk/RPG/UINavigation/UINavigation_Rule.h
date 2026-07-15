#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigation_Rule_TypeDefinitionIndex = 49404;

	enum class UINavigation_Rule : ::System::Int32
	{
		Escape = 0,
		Explicit = 1,
		Stop = 2,
		Wrap = 3,
		Invalid = 4,
	};
}

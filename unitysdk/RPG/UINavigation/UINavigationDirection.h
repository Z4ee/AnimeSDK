#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationDirection_TypeDefinitionIndex = 49419;

	enum class UINavigationDirection : ::System::Int32
	{
		Left = 0,
		Right = 1,
		Up = 2,
		Down = 3,
		Next = 4,
		Previous = 5,
		Invalid = 6,
	};
}

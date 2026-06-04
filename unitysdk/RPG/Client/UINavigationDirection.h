#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UINavigationDirection_TypeDefinitionIndex = 68331;

	enum class UINavigationDirection : ::System::Int32
	{
		Up = 0,
		Down = 1,
		Left = 2,
		Right = 3,
	};
}

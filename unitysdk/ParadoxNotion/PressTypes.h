#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int PressTypes_TypeDefinitionIndex = 30983;

	enum class PressTypes : ::System::Int32
	{
		Up = 1,
		Down = 0,
		Pressed = 2,
	};
}

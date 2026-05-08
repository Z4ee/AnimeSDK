#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ButtonPressType_TypeDefinitionIndex = 58149;

	enum class ButtonPressType : ::System::Int32
	{
		Down = 0,
		Pressed = 1,
		Up = 2,
	};
}

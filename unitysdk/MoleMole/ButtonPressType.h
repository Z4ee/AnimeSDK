#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ButtonPressType_TypeDefinitionIndex = 48754;

	enum class ButtonPressType : ::System::Int32
	{
		Down = 0,
		Up = 2,
		Pressed = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ColorState_TypeDefinitionIndex = 7013;

	enum class ColorState : ::System::Int32
	{
		Normal = 0,
		Highlighted = 1,
		Pressed = 2,
		Disabled = 3,
	};
}

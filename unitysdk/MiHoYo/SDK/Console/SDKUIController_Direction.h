#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIController_Direction_TypeDefinitionIndex = 8644;

	enum class SDKUIController_Direction : ::System::Int32
	{
		Up = 0,
		Down = 1,
		Left = 2,
		Right = 3,
	};
}

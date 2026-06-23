#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int SDKUIController_Direction_TypeDefinitionIndex = 20671;

	enum class SDKUIController_Direction : ::System::Int32
	{
		Up = 0,
		Down = 1,
		Left = 2,
		Right = 3,
	};
}

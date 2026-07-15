#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int SDKUIControllerInputKey_TypeDefinitionIndex = 8599;

	enum class SDKUIControllerInputKey : ::System::Int32
	{
		Up = 0,
		Down = 1,
		Left = 2,
		Right = 3,
		Select = 4,
		Cancel = 5,
	};
}

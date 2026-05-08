#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIInput_TypeDefinitionIndex = 18986;

	enum class UIInput : ::System::Int32
	{
		Console = 1,
		Keyboard = 2,
	};
}

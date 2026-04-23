#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InputControlSourceType_TypeDefinitionIndex = 37126;

	enum class InputControlSourceType : ::System::Int32
	{
		None = 0,
		Button = 1,
		Analog = 2,
		KeyCode = 3,
	};
}

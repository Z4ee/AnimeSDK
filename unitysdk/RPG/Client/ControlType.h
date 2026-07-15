#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ControlType_TypeDefinitionIndex = 56640;

	enum class ControlType : ::System::Int32
	{
		TAP = 0,
		CLICK = 1,
		PRESS = 2,
	};
}

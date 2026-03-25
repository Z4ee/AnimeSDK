#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int HPBar_ColorMode_TypeDefinitionIndex = 59444;

	enum class HPBar_ColorMode : ::System::Int32
	{
		Single = 0,
		Ramp = 1,
	};
}

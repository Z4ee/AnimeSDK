#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int LightPositionMode_TypeDefinitionIndex = 45959;

	enum class LightPositionMode : ::System::Int32
	{
		World = 0,
		Screen = 1,
	};
}

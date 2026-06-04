#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LightCollection_LightMode_TypeDefinitionIndex = 48462;

	enum class LightCollection_LightMode : ::System::Int32
	{
		Realtime = 0,
		Baked = 1,
	};
}

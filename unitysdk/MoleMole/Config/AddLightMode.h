#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AddLightMode_TypeDefinitionIndex = 90696;

	enum class AddLightMode : ::System::Int32
	{
		Blend = 1,
		Ambient = 2,
		Toon = 3,
	};
}

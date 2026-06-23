#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AddLightMode_TypeDefinitionIndex = 82765;

	enum class AddLightMode : ::System::Int32
	{
		Toon = 3,
		Blend = 1,
		Ambient = 2,
	};
}

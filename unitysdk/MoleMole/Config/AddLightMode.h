#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AddLightMode_TypeDefinitionIndex = 50793;

	enum class AddLightMode : ::System::Int32
	{
		Ambient = 2,
		Blend = 1,
		Toon = 3,
	};
}

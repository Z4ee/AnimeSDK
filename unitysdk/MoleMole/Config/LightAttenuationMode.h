#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LightAttenuationMode_TypeDefinitionIndex = 59727;

	enum class LightAttenuationMode : ::System::Int32
	{
		Exponent = 0,
		Linear = 1,
		None = 2,
	};
}

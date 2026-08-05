#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LightAttenuationMode_TypeDefinitionIndex = 43827;

	enum class LightAttenuationMode : ::System::Int32
	{
		Exponent = 0,
		None = 2,
		Linear = 1,
	};
}

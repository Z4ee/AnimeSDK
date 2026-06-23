#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LightAttenuationMode_TypeDefinitionIndex = 74871;

	enum class LightAttenuationMode : ::System::Int32
	{
		None = 2,
		Exponent = 0,
		Linear = 1,
	};
}

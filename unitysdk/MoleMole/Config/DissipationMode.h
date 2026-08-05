#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DissipationMode_TypeDefinitionIndex = 48884;

	enum class DissipationMode : ::System::Int32
	{
		ExponentialDecay = 4,
		LinearDecay = 2,
		None = 0,
		SoftDecay = 3,
		CustomDecay = 5,
		QuadraticDecay = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DissipationMode_TypeDefinitionIndex = 68970;

	enum class DissipationMode : ::System::Int32
	{
		QuadraticDecay = 1,
		SoftDecay = 3,
		CustomDecay = 5,
		ExponentialDecay = 4,
		None = 0,
		LinearDecay = 2,
	};
}

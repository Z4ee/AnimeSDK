#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DissipationMode_TypeDefinitionIndex = 47451;

	enum class DissipationMode : ::System::Int32
	{
		QuadraticDecay = 1,
		LinearDecay = 2,
		None = 0,
		CustomDecay = 5,
		SoftDecay = 3,
		ExponentialDecay = 4,
	};
}

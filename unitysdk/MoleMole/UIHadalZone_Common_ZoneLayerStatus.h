#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_ZoneLayerStatus_TypeDefinitionIndex = 83412;

	enum class UIHadalZone_Common_ZoneLayerStatus : ::System::Int32
	{
		LOCKED = 0,
		RATE_A = 3,
		RATE_SS = 5,
		RATE_B = 4,
		RATE_S = 2,
		START = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SurfVehicleExtraEffectFlags_TypeDefinitionIndex = 55403;

	enum class SurfVehicleExtraEffectFlags : ::System::Int32
	{
		BuffProlong = 2,
		None = 0,
		DebuffImmune = 1,
	};
}

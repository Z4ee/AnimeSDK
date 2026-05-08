#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SurfVehicleExtraEffectFlags.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfExtraEffect_TypeDefinitionIndex = 66263;

	struct alignas(4) ConfigSurfExtraEffect
	{
		::MoleMole::Config::SurfVehicleExtraEffectFlags ExtraEffects; // 0x10
	};
}

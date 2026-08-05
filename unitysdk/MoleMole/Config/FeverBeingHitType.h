#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverBeingHitType_TypeDefinitionIndex = 66222;

	enum class FeverBeingHitType : ::System::Int32
	{
		Shake = 1,
		Mute = 0,
		HitGroundLight = 2,
		HitGroundHeavy = 3,
		HitSkyFly = 4,
	};
}

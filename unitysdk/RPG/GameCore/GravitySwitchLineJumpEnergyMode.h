#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravitySwitchLineJumpEnergyMode_TypeDefinitionIndex = 18379;

	enum class GravitySwitchLineJumpEnergyMode : ::System::Int32
	{
		NoEffect = 0,
		FillJumpEnergy = 1,
		ClearJumpEnergy = 2,
	};
}

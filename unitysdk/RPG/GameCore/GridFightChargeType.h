#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightChargeType_TypeDefinitionIndex = 12762;

	enum class GridFightChargeType : ::System::Int32
	{
		Speed = 0,
		EnergyBar = 1,
		MaxSP = 2,
		MaxHP = 3,
	};
}

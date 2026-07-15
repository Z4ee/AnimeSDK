#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightFrontSpecialSPDisplayType_TypeDefinitionIndex = 13048;

	enum class GridFightFrontSpecialSPDisplayType : ::System::Int32
	{
		None = 0,
		MaxSP = 1,
		EnergyBar = 2,
	};
}

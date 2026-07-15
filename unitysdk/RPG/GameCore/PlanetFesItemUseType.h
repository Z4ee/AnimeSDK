#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesItemUseType_TypeDefinitionIndex = 11782;

	enum class PlanetFesItemUseType : ::System::Int32
	{
		None = 0,
		Buff = 1,
		Coin = 2,
	};
}

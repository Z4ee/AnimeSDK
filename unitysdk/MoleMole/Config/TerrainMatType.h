#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TerrainMatType_TypeDefinitionIndex = 41414;

	enum class TerrainMatType : ::System::Int32
	{
		Grass = 1,
		Sand = 2,
		Metal = 5,
		Carpet = 6,
		Water = 3,
		Default = -1,
		Wood = 4,
		Concrete = 0,
	};
}

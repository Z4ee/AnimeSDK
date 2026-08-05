#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TerrainMatType_TypeDefinitionIndex = 89616;

	enum class TerrainMatType : ::System::Int32
	{
		Carpet = 6,
		Sand = 2,
		Grass = 1,
		Default = -1,
		Concrete = 0,
		Water = 3,
		Metal = 5,
		Wood = 4,
	};
}

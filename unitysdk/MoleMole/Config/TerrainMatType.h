#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TerrainMatType_TypeDefinitionIndex = 77208;

	enum class TerrainMatType : ::System::Int32
	{
		Sand = 2,
		Concrete = 0,
		Default = -1,
		Grass = 1,
		Wood = 4,
		Carpet = 6,
		Metal = 5,
		Water = 3,
	};
}

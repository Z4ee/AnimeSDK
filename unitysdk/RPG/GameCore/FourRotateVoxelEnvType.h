#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelEnvType_TypeDefinitionIndex = 16555;

	enum class FourRotateVoxelEnvType : ::System::Int32
	{
		Day = 0,
		Night = 1,
		Otherworldly = 2,
		Room = 3,
	};
}

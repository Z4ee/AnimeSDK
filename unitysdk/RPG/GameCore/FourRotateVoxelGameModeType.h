#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelGameModeType_TypeDefinitionIndex = 16080;

	enum class FourRotateVoxelGameModeType : ::System::Int32
	{
		GamePlay = 0,
		Entrance = 1,
		LevelCollection = 2,
	};
}

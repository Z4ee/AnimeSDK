#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameViewDirection_TypeDefinitionIndex = 40595;

	enum class FourRotateVoxelGameViewDirection : ::System::Int32
	{
		Unknown = 0,
		Up = 1,
		Down = 2,
		Left = 3,
		Right = 4,
		Forward = 5,
		Back = 6,
	};
}

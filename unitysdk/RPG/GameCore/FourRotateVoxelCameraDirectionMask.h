#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelCameraDirectionMask_TypeDefinitionIndex = 16557;

	enum class FourRotateVoxelCameraDirectionMask : ::System::Int32
	{
		None = 0,
		Forward = 1,
		Right = 2,
		Back = 4,
		Left = 8,
		All = 15,
	};
}

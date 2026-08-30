#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSceneItemType_TypeDefinitionIndex = 16558;

	enum class FourRotateVoxelSceneItemType : ::System::Int32
	{
		Unknown = 0,
		SceneCube = 1,
		Trigger = 4,
		Brick2D = 11,
		Group = 13,
		CameraSpaceTrigger = 15,
	};
}

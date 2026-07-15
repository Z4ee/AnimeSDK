#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameSceneItemType_TypeDefinitionIndex = 40596;

	enum class FourRotateVoxelGameSceneItemType : ::System::Int32
	{
		Unknown = 0,
		SceneCube = 1,
		SceneGround = 3,
		Trigger = 4,
		CameraSpaceTrigger = 15,
		Brick2D = 11,
		Brick2D_NotGround = 12,
		Group = 13,
	};
}

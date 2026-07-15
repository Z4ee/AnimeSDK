#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelLayerType_TypeDefinitionIndex = 40602;

	enum class FourRotateVoxelLayerType : ::System::Int32
	{
		Col = 0,
		Ground = 1,
		Trigger = 2,
		CameraSpace_Ground = 3,
		CameraSpace_Col = 4,
		CameraSpace_Trigger = 5,
		Count = 6,
	};
}

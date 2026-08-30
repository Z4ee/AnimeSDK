#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelTriggerActionType_TypeDefinitionIndex = 41535;

	enum class FourRotateVoxelTriggerActionType : ::System::Int32
	{
		Default = 0,
		GlobalReset = 1,
		Rotate = 2,
		FinishPoint = 3,
	};
}

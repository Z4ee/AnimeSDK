#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MotionBlurRenderer_MotionBlurPass_TypeDefinitionIndex = 36289;

	enum class MotionBlurRenderer_MotionBlurPass : ::System::Int32
	{
		VelocitySetup = 0,
		VelocityTileMaxHorizontal = 1,
		VelocityTileMaxVertical = 2,
		VelocityNeighborMax = 3,
		MotionBlurReconstuct = 4,
		MotionBlurReconstuctUnity = 5,
		MotionBlurReconstuctUEUnified = 6,
	};
}

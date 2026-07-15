#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VirtualCameraMode_TypeDefinitionIndex = 36147;

	enum class VirtualCameraMode : ::System::Int32
	{
		VCFullControl = 0,
		VCAutoCullBackgroundOverlay = 1,
		VCAutoCull2Camera = 3,
	};
}

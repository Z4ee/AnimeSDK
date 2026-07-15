#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VirtualCameraModeInternal_TypeDefinitionIndex = 36146;

	enum class VirtualCameraModeInternal : ::System::Int32
	{
		VCFullControl = 0,
		VCAutoCullBackgroundOverlay = 1,
		VCAutoCullNormal = 2,
		VCAutoCull2Camera = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CameraState_BlendHintValue_TypeDefinitionIndex = 37644;

	enum class CameraState_BlendHintValue : ::System::Int32
	{
		Nothing = 0,
		NoPosition = 1,
		NoOrientation = 2,
		NoTransform = 3,
		SphericalPositionBlend = 4,
		CylindricalPositionBlend = 8,
		RadialAimBlend = 16,
		IgnoreLookAtTarget = 32,
		RadialAimAndLinearDistance = 64,
		NoLens = 128,
		IgnoreAdjustedTBlendOrientation = 256,
		BlockFovAdjustT = 512,
	};
}

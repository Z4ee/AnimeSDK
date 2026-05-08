#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCameraBase_BlendHint_TypeDefinitionIndex = 32579;

	enum class CinemachineVirtualCameraBase_BlendHint : ::System::Int32
	{
		None = 0,
		SphericalPosition = 1,
		CylindricalPosition = 2,
		ScreenSpaceAimWhenTargetsDiffer = 3,
	};
}

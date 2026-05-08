#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTargetGroup_RotationMode_TypeDefinitionIndex = 32500;

	enum class CinemachineTargetGroup_RotationMode : ::System::Int32
	{
		Manual = 0,
		GroupAverage = 1,
	};
}

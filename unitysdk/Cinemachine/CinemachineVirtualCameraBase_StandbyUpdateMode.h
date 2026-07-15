#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCameraBase_StandbyUpdateMode_TypeDefinitionIndex = 37679;

	enum class CinemachineVirtualCameraBase_StandbyUpdateMode : ::System::Int32
	{
		Never = 0,
		Always = 1,
		RoundRobin = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseManager_ImpulseEvent_DirectionMode_TypeDefinitionIndex = 37719;

	enum class CinemachineImpulseManager_ImpulseEvent_DirectionMode : ::System::Int32
	{
		Fixed = 0,
		RotateTowardSource = 1,
	};
}

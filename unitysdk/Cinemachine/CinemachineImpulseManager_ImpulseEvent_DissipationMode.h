#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseManager_ImpulseEvent_DissipationMode_TypeDefinitionIndex = 30918;

	enum class CinemachineImpulseManager_ImpulseEvent_DissipationMode : ::System::Int32
	{
		LinearDecay = 0,
		SoftDecay = 1,
		ExponentialDecay = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DefaultCameraShakeTimeAttenuationSharePolicy_TypeDefinitionIndex = 38640;

	enum class DefaultCameraShakeTimeAttenuationSharePolicy : ::System::Int32
	{
		None = 0,
		Location = 1,
		Euler = 2,
		All = 3,
	};
}

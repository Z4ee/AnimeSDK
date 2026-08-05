#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DefaultCameraShakeChannel_TypeDefinitionIndex = 38639;

	enum class DefaultCameraShakeChannel : ::System::Int32
	{
		None = 0,
		Forward = 1,
		Right = 2,
		Up = 4,
		Pitch = 8,
		Yaw = 16,
		Roll = 32,
		Location = 7,
		Euler = 56,
		All = 63,
	};
}

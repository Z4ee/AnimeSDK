#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RotatorDampingAxis_TypeDefinitionIndex = 36295;

	enum class RotatorDampingAxis : ::System::Int32
	{
		None = 0,
		Pitch = 1,
		Yaw = 2,
		Roll = 4,
		All = 7,
	};
}

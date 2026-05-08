#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int EulerRotationChannel_TypeDefinitionIndex = 36037;

	enum class EulerRotationChannel : ::System::Int32
	{
		None = 0,
		Pitch = 1,
		Yaw = 2,
		Roll = 4,
		All = 7,
	};
}

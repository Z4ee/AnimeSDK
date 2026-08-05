#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DefaultShakeSequence_ChannelIndex_TypeDefinitionIndex = 38643;

	enum class DefaultShakeSequence_ChannelIndex : ::System::Int32
	{
		Forward = 0,
		Right = 1,
		Up = 2,
		Pitch = 3,
		Yaw = 4,
		Roll = 5,
		Count = 6,
	};
}

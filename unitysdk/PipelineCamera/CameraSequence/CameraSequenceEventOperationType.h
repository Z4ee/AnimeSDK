#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventOperationType_TypeDefinitionIndex = 38494;

	enum class CameraSequenceEventOperationType : ::System::Int32
	{
		Trigger = 0,
		Expire = 1,
	};
}

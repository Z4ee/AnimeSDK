#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceTriggerOffsetType_TypeDefinitionIndex = 36216;

	enum class CameraSequenceTriggerOffsetType : ::System::Int32
	{
		None = 0,
		Before = 1,
		After = 2,
	};
}

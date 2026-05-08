#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCollectionInstance_StepResult_TypeDefinitionIndex = 36196;

	enum class CameraSequenceCollectionInstance_StepResult : ::System::Int32
	{
		Moved = 0,
		NotMoved = 1,
		MovedToEnd = 2,
		InvalidSection = 3,
		InvalidCollection = 4,
	};
}

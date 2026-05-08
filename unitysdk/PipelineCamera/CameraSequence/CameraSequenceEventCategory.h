#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventCategory_TypeDefinitionIndex = 36218;

	enum class CameraSequenceEventCategory : ::System::Int32
	{
		Notify = 0,
		NotifyState = 1,
	};
}

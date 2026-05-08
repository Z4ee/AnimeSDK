#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventTriggerType_TypeDefinitionIndex = 36217;

	enum class CameraSequenceEventTriggerType : ::System::Int32
	{
		Trigger = 0,
		Begin = 1,
		End = 2,
		Tick = 3,
	};
}

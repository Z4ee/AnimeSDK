#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventTriggerType.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventTriggerContext_TypeDefinitionIndex = 36219;

	struct alignas(8) CameraSequenceEventTriggerContext
	{
		::PipelineCamera::CameraSequence::CameraSequenceEventTriggerType Type; // 0x10
		::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath Workspace; // 0x18
		::System::Single DeltaTime; // 0x48
	};
}

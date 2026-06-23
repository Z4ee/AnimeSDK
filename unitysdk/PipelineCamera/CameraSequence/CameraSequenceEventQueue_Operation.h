#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventTriggerContext.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_OPERATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x980060)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_OPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x3E4AA0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventQueue_Operation_TypeDefinitionIndex = 37838;

	struct alignas(8) CameraSequenceEventQueue_Operation
	{
		::PipelineCamera::CameraSequence::CameraSequenceEvent* _event; // 0x10
		::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext _context; // 0x18

		::System::Void _ctor(::PipelineCamera::CameraSequence::CameraSequenceEvent* event, ::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_OPERATION__CTOR_OFFSET))(this, event, context);
		}

		::System::Void Invoke(::PipelineCamera::CameraSequence::CameraSequenceContext* context, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTQUEUE_OPERATION_INVOKE_OFFSET))(this, context, instance);
		}
	};
}

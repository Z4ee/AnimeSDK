#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventCategory.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventTriggerContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTriggerOffsetType.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_GETENDTIME_OFFSET UNITYSDK_OFFSET(0x1EC123D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_GETSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1EC12380)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1EC12420)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_GET_TRIGGEROFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1EC12270)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_GET_TRIGGERTIME_OFFSET UNITYSDK_OFFSET(0x1EC12250)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1EC12850)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_SET_TRIGGEROFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1EC12330)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1EC12430)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC12BE0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceNotifyEvent_TypeDefinitionIndex = 38490;

	class CameraSequenceNotifyEvent : public ::PipelineCamera::CameraSequence::CameraSequenceEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT__CTOR_OFFSET))(this);
		}

		::System::Single get_TriggerTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_GET_TRIGGERTIME_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType get_TriggerOffsetType()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_GET_TRIGGEROFFSETTYPE_OFFSET))(this);
		}

		::System::Void set_TriggerOffsetType(::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType value)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_SET_TRIGGEROFFSETTYPE_OFFSET))(this, value);
		}

		::System::Single GetStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_GETSTARTTIME_OFFSET))(this);
		}

		::System::Single GetEndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_GETENDTIME_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::CameraSequenceEventCategory get_Category()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEventCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void Trigger(::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext eventContext, ::PipelineCamera::CameraSequence::CameraSequenceContext* sequenceContext, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_TRIGGER_OFFSET))(this, eventContext, sequenceContext, instance);
		}

		::System::Void Notify(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYEVENT_NOTIFY_OFFSET))(this, workspace, context);
		}
	};
}

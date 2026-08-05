#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventCategory.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventTriggerContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTriggerOffsetType.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GETENDTIME_OFFSET UNITYSDK_OFFSET(0x1E889E40)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GETSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1E889DF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GET_BEGINOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1E889BD0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1E889B60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1E889EB0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GET_ENDOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1E889CE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1E889B80)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_NOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x1E88A990)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_NOTIFYEND_OFFSET UNITYSDK_OFFSET(0x1E88B0C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_NOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x1E88AD20)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_SET_BEGINOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1E889C90)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_SET_ENDOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1E889DA0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1E889EC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88B450)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceNotifyStateEvent_TypeDefinitionIndex = 38492;

	class CameraSequenceNotifyStateEvent : public ::PipelineCamera::CameraSequence::CameraSequenceEvent
	{
	public:
		::System::Single endTriggerTimeOffset; // 0x48
		::System::Single duration; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Single get_BeginTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Single get_EndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GET_ENDTIME_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType get_BeginOffsetType()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GET_BEGINOFFSETTYPE_OFFSET))(this);
		}

		::System::Void set_BeginOffsetType(::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType value)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_SET_BEGINOFFSETTYPE_OFFSET))(this, value);
		}

		::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType get_EndOffsetType()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GET_ENDOFFSETTYPE_OFFSET))(this);
		}

		::System::Void set_EndOffsetType(::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType value)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_SET_ENDOFFSETTYPE_OFFSET))(this, value);
		}

		::System::Single GetStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GETSTARTTIME_OFFSET))(this);
		}

		::System::Single GetEndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GETENDTIME_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::CameraSequenceEventCategory get_Category()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEventCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void Trigger(::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext eventContext, ::PipelineCamera::CameraSequence::CameraSequenceContext* sequenceContext, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_TRIGGER_OFFSET))(this, eventContext, sequenceContext, instance);
		}

		::System::Void NotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_NOTIFYBEGIN_OFFSET))(this, workspace, context);
		}

		::System::Void NotifyTick(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single frameDeltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_NOTIFYTICK_OFFSET))(this, workspace, context, frameDeltaTime);
		}

		::System::Void NotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCENOTIFYSTATEEVENT_NOTIFYEND_OFFSET))(this, workspace, context);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventCategory.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventTriggerContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTriggerOffsetType.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GETENDTIME_OFFSET UNITYSDK_OFFSET(0x1E910560)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GETSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1E910510)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_BEGINOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1E9102F0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1E910280)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1E9105D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_ENDOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1E910400)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1E9102A0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_NOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x1E9110E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_NOTIFYEND_OFFSET UNITYSDK_OFFSET(0x1E911840)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_NOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x1E911470)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_SET_BEGINOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1E9103B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_SET_ENDOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1E9104C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1E9105E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E911BD0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceInternalNotifyStateEvent_TypeDefinitionIndex = 38493;

	class CameraSequenceInternalNotifyStateEvent : public ::PipelineCamera::CameraSequence::CameraSequenceEvent
	{
	public:
		::System::Single duration; // 0x48
		::System::Single endTriggerTimeOffset; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Single get_BeginTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Single get_EndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_ENDTIME_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType get_BeginOffsetType()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_BEGINOFFSETTYPE_OFFSET))(this);
		}

		::System::Void set_BeginOffsetType(::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType value)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_SET_BEGINOFFSETTYPE_OFFSET))(this, value);
		}

		::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType get_EndOffsetType()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_ENDOFFSETTYPE_OFFSET))(this);
		}

		::System::Void set_EndOffsetType(::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType value)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_SET_ENDOFFSETTYPE_OFFSET))(this, value);
		}

		::System::Single GetStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GETSTARTTIME_OFFSET))(this);
		}

		::System::Single GetEndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GETENDTIME_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::CameraSequenceEventCategory get_Category()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEventCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void Trigger(::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext eventContext, ::PipelineCamera::CameraSequence::CameraSequenceContext* sequenceContext, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEventTriggerContext, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_TRIGGER_OFFSET))(this, eventContext, sequenceContext, instance);
		}

		::System::Void NotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_NOTIFYBEGIN_OFFSET))(this, workspace, context, instance);
		}

		::System::Void NotifyTick(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance, ::System::Single frameDeltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_NOTIFYTICK_OFFSET))(this, workspace, context, instance, frameDeltaTime);
		}

		::System::Void NotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_NOTIFYEND_OFFSET))(this, workspace, context, instance);
		}
	};
}

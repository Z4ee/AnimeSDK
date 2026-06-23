#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventCategory.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventTriggerContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTriggerOffsetType.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GETENDTIME_OFFSET UNITYSDK_OFFSET(0x1D5610D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GETSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1D561080)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_BEGINOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1D560E60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1D560DF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1D561140)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_ENDOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1D560F70)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1D560E10)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_NOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x1D561C50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_NOTIFYEND_OFFSET UNITYSDK_OFFSET(0x1D5623A0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_NOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x1D561FE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_SET_BEGINOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1D560F20)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_SET_ENDOFFSETTYPE_OFFSET UNITYSDK_OFFSET(0x1D561030)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1D561150)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEINTERNALNOTIFYSTATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D562730)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceInternalNotifyStateEvent_TypeDefinitionIndex = 37832;

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

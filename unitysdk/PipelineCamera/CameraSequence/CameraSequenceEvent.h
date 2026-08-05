#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventCategory.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventTriggerContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceLinkable.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTriggerOffsetType.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/SerializableGuid.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceSegmentOwner; }
namespace System { class String; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1F1B3880)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CONVERTTO_1_OFFSET UNITYSDK_OFFSET(0x1F1B37E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1F1B3770)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_LINK_OFFSET UNITYSDK_OFFSET(0x1F1B3530)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_ONLINKTIMECHANGED_OFFSET UNITYSDK_OFFSET(0x1F1B3670)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1B3A80)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT___BASE_LINK_OFFSET UNITYSDK_OFFSET(0x1F1B3AC0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEvent_TypeDefinitionIndex = 38489;

	class CameraSequenceEvent : public ::PipelineCamera::CameraSequence::CameraSequenceLinkable
	{
	public:
		// static const ::System::Single TriggerOffset; // 0x0
		::System::Single triggerTimeOffset; // 0x28
		::PipelineCamera::SerializableGuid eventId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Link(::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner* sequence, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner*, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_LINK_OFFSET))(this, sequence, time);
		}

		::System::Void OnLinkTimeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_ONLINKTIMECHANGED_OFFSET))(this);
		}

		static ::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType ConvertTo(::System::Single offsetTime)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CONVERTTO_OFFSET))(offsetTime);
		}

		static ::System::Single ConvertTo_1(::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType offsetType)
		{
			return ((::System::Single(*)(::PipelineCamera::CameraSequence::CameraSequenceTriggerOffsetType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_CONVERTTO_1_OFFSET))(offsetType);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::System::Void __base_Link(::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner*, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENT___BASE_LINK_OFFSET))(this, P0, P1);
		}
	};
}

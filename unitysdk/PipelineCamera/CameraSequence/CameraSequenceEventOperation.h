#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperationType.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_EXPIREAT_OFFSET UNITYSDK_OFFSET(0x1D8320E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_GET_OPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x7F7C60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_GET_SEQUENCEEVENT_OFFSET UNITYSDK_OFFSET(0x246290)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x490140)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_SET_OPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x7F7C70)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_SET_SEQUENCEEVENT_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA0F2E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_TRIGGERAT_OFFSET UNITYSDK_OFFSET(0x1D831F00)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventOperation_TypeDefinitionIndex = 37834;

	struct alignas(8) CameraSequenceEventOperation
	{
		::PipelineCamera::CameraSequence::CameraSequenceEvent* _SequenceEvent_k__BackingField; // 0x10
		::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath Workspace; // 0x18
		::System::Single _timestamp; // 0x48
		::PipelineCamera::CameraSequence::CameraSequenceEventOperationType _OperationType_k__BackingField; // 0x4C

		::PipelineCamera::CameraSequence::CameraSequenceEvent* get_SequenceEvent()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_GET_SEQUENCEEVENT_OFFSET))(this);
		}

		::System::Void set_SequenceEvent(::PipelineCamera::CameraSequence::CameraSequenceEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEvent*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_SET_SEQUENCEEVENT_OFFSET))(this, value);
		}

		::System::Single get_Timestamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Void set_Timestamp(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_SET_TIMESTAMP_OFFSET))(this, value);
		}

		::PipelineCamera::CameraSequence::CameraSequenceEventOperationType get_OperationType()
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEventOperationType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_GET_OPERATIONTYPE_OFFSET))(this);
		}

		::System::Void set_OperationType(::PipelineCamera::CameraSequence::CameraSequenceEventOperationType value)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEventOperationType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_SET_OPERATIONTYPE_OFFSET))(this, value);
		}

		static ::PipelineCamera::CameraSequence::CameraSequenceEventOperation TriggerAt(::PipelineCamera::CameraSequence::CameraSequenceEvent* cameraEvent, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::System::Single timeStamp)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEventOperation(*)(::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_TRIGGERAT_OFFSET))(cameraEvent, workspace, timeStamp);
		}

		static ::PipelineCamera::CameraSequence::CameraSequenceEventOperation ExpireAt(::PipelineCamera::CameraSequence::CameraSequenceEvent* cameraEvent, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::System::Single timeStamp)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEventOperation(*)(::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTOPERATION_EXPIREAT_OFFSET))(cameraEvent, workspace, timeStamp);
		}
	};
}

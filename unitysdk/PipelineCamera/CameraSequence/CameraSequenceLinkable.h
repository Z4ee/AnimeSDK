#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTimePointType.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class ICameraSequenceLinkableTimePoint; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceSegmentOwner; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_GETLINKTIME_OFFSET UNITYSDK_OFFSET(0x1C842530)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_GET_LINKTIME_OFFSET UNITYSDK_OFFSET(0x1C841F60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1C841F50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_LINK_OFFSET UNITYSDK_OFFSET(0x1C8420F0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_SETLINKTIME_OFFSET UNITYSDK_OFFSET(0x1C842650)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_SET_LINKTIME_OFFSET UNITYSDK_OFFSET(0x1C842070)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C842780)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceLinkable_TypeDefinitionIndex = 37841;

	class CameraSequenceLinkable : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner* LinkedOwner; // 0x10
		::System::Int32 segmentIndex; // 0x18
		::PipelineCamera::CameraSequence::ICameraSequenceLinkableTimePoint* LinkTimePoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE__CTOR_OFFSET))(this);
		}

		::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner* get_Owner()
		{
			return ((::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_GET_OWNER_OFFSET))(this);
		}

		::System::Single get_LinkTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_GET_LINKTIME_OFFSET))(this);
		}

		::System::Void set_LinkTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_SET_LINKTIME_OFFSET))(this, value);
		}

		::System::Void Link(::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner* owner, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner*, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_LINK_OFFSET))(this, owner, time);
		}

		::System::Single GetLinkTime(::PipelineCamera::CameraSequence::CameraSequenceTimePointType timePointType)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_GETLINKTIME_OFFSET))(this, timePointType);
		}

		::System::Void SetLinkTime(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType timePointType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCELINKABLE_SETLINKTIME_OFFSET))(this, time, timePointType);
		}
	};
}

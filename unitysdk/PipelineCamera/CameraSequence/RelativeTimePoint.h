#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTimePointType.h"
#include "unitysdk/System/Object.h"

#define PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x1F620F60)
#define PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_GETTIME_OFFSET UNITYSDK_OFFSET(0x1F621070)
#define PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_GET_PLAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1F620F50)
#define PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_GET_RELATIVETIME_OFFSET UNITYSDK_OFFSET(0x1F620EC0)
#define PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1F620F40)
#define PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_SETSEGMENT_OFFSET UNITYSDK_OFFSET(0x1F620FA0)
#define PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_SETTIME_OFFSET UNITYSDK_OFFSET(0x1F621190)
#define PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_SET_RELATIVETIME_OFFSET UNITYSDK_OFFSET(0x1F620ED0)
#define PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6212B0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RelativeTimePoint_TypeDefinitionIndex = 38506;

	class RelativeTimePoint : public ::System::Object
	{
	public:
		::System::Single startTime; // 0x10
		::System::Single playLength; // 0x14
		::System::Single relativeTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT__CTOR_OFFSET))(this);
		}

		::System::Single get_RelativeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_GET_RELATIVETIME_OFFSET))(this);
		}

		::System::Void set_RelativeTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_SET_RELATIVETIME_OFFSET))(this, value);
		}

		::System::Single get_StartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_GET_STARTTIME_OFFSET))(this);
		}

		::System::Single get_PlayLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_GET_PLAYLENGTH_OFFSET))(this);
		}

		::System::Void CheckValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_CHECKVALID_OFFSET))(this);
		}

		::System::Void SetSegment(::System::Single newStartTime, ::System::Single newPlayLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_SETSEGMENT_OFFSET))(this, newStartTime, newPlayLength);
		}

		::System::Single GetTime(::PipelineCamera::CameraSequence::CameraSequenceTimePointType timeType)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_GETTIME_OFFSET))(this, timeType);
		}

		::System::Void SetTime(::System::Single newTime, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType timeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_RELATIVETIMEPOINT_SETTIME_OFFSET))(this, newTime, timeType);
		}
	};
}

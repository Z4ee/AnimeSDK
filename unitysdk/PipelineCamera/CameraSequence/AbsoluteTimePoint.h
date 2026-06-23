#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTimePointType.h"
#include "unitysdk/System/Object.h"

#define PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x1DAC7320)
#define PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_GETTIME_OFFSET UNITYSDK_OFFSET(0x1DAC6FE0)
#define PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_GET_PLAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1DAC6F70)
#define PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1DAC6F60)
#define PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1DAC6EE0)
#define PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_ONTIMECHANGED_OFFSET UNITYSDK_OFFSET(0x1DAC6F80)
#define PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_SETSEGMENT_OFFSET UNITYSDK_OFFSET(0x1DAC7100)
#define PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_SETTIME_OFFSET UNITYSDK_OFFSET(0x1DAC71D0)
#define PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1DAC6EF0)
#define PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC7360)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AbsoluteTimePoint_TypeDefinitionIndex = 37844;

	class AbsoluteTimePoint : public ::System::Object
	{
	public:
		::System::Single startTime; // 0x10
		::System::Single playLength; // 0x14
		::System::Single time; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT__CTOR_OFFSET))(this);
		}

		::System::Single get_Time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_SET_TIME_OFFSET))(this, value);
		}

		::System::Single get_StartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_GET_STARTTIME_OFFSET))(this);
		}

		::System::Single get_PlayLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_GET_PLAYLENGTH_OFFSET))(this);
		}

		::System::Void OnTimeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_ONTIMECHANGED_OFFSET))(this);
		}

		::System::Single GetTime(::PipelineCamera::CameraSequence::CameraSequenceTimePointType timeType)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_GETTIME_OFFSET))(this, timeType);
		}

		::System::Void SetSegment(::System::Single newStartTime, ::System::Single newPlayLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_SETSEGMENT_OFFSET))(this, newStartTime, newPlayLength);
		}

		::System::Void SetTime(::System::Single newTime, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType timeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_SETTIME_OFFSET))(this, newTime, timeType);
		}

		::System::Void CheckValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ABSOLUTETIMEPOINT_CHECKVALID_OFFSET))(this);
		}
	};
}

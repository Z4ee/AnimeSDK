#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTimePointType.h"
#include "unitysdk/System/Object.h"

#define PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x1D832B50)
#define PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_GETTIME_OFFSET UNITYSDK_OFFSET(0x1D832B90)
#define PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_GET_PLAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1D832AE0)
#define PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x1D832A50)
#define PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1D832AD0)
#define PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_ONTIMECHANGED_OFFSET UNITYSDK_OFFSET(0x1D832AF0)
#define PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_SETSEGMENT_OFFSET UNITYSDK_OFFSET(0x1D832C90)
#define PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_SETTIME_OFFSET UNITYSDK_OFFSET(0x1D832D40)
#define PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x1D832A60)
#define PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D832EC0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int ProportionalTimePoint_TypeDefinitionIndex = 37846;

	class ProportionalTimePoint : public ::System::Object
	{
	public:
		::System::Single startTime; // 0x10
		::System::Single playLength; // 0x14
		::System::Single ratio; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT__CTOR_OFFSET))(this);
		}

		::System::Single get_Ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_Ratio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_SET_RATIO_OFFSET))(this, value);
		}

		::System::Single get_StartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_GET_STARTTIME_OFFSET))(this);
		}

		::System::Single get_PlayLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_GET_PLAYLENGTH_OFFSET))(this);
		}

		::System::Void OnTimeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_ONTIMECHANGED_OFFSET))(this);
		}

		::System::Void CheckValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_CHECKVALID_OFFSET))(this);
		}

		::System::Single GetTime(::PipelineCamera::CameraSequence::CameraSequenceTimePointType timeType)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_GETTIME_OFFSET))(this, timeType);
		}

		::System::Void SetSegment(::System::Single newStartTime, ::System::Single newPlayLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_SETSEGMENT_OFFSET))(this, newStartTime, newPlayLength);
		}

		::System::Void SetTime(::System::Single newTime, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType timeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceTimePointType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_PROPORTIONALTIMEPOINT_SETTIME_OFFSET))(this, newTime, timeType);
		}
	};
}

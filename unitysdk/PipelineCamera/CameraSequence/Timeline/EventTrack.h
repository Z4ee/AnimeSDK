#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_EVENTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55DE10)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int EventTrack_TypeDefinitionIndex = 84913;

	class EventTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_EVENTTRACK__CTOR_OFFSET))(this);
		}
	};
}

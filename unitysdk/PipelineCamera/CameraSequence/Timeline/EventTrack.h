#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_EVENTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6CA40)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int EventTrack_TypeDefinitionIndex = 94419;

	class EventTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_EVENTTRACK__CTOR_OFFSET))(this);
		}
	};
}

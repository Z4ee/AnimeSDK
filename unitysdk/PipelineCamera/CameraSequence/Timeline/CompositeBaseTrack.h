#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace PipelineCamera::CameraSequence { class CoreDataComposite; }

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_COMPOSITEBASETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88D420)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int CompositeBaseTrack_TypeDefinitionIndex = 90484;

	class CompositeBaseTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::PipelineCamera::CameraSequence::CoreDataComposite* composite; // 0xB0
		::System::Single playRate; // 0xB8
		::System::Boolean isLooping; // 0xBC
		::System::Boolean makeContextDependent; // 0xBD

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_COMPOSITEBASETRACK__CTOR_OFFSET))(this);
		}
	};
}

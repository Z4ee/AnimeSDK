#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System { class Object; }

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCECOMPOSITETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88DA60)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int SequenceCompositeTrack_TypeDefinitionIndex = 90493;

	class SequenceCompositeTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Object* trackObject; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCECOMPOSITETRACK__CTOR_OFFSET))(this);
		}
	};
}

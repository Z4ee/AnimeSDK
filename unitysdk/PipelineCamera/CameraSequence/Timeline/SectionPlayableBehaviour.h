#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace PipelineCamera::CameraSequence::Timeline { class SectionClip; }

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1FC6CC80)
#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6CC90)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int SectionPlayableBehaviour_TypeDefinitionIndex = 94421;

	class SectionPlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::PipelineCamera::CameraSequence::Timeline::SectionClip* sectionClip; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}
	};
}

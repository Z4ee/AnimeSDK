#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace UnityEngine { class GameObject; }

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_EVENTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1E88D5E0)
#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_EVENTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88D6D0)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int EventClip_TypeDefinitionIndex = 90486;

	class EventClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::PipelineCamera::CameraSequence::CameraSequenceEvent* eventData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_EVENTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_EVENTCLIP_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_COMPOSITESEGMENTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C55DB60)
#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_COMPOSITESEGMENTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C55DC50)
#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_COMPOSITESEGMENTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55DC60)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int CompositeSegmentClip_TypeDefinitionIndex = 84911;

	class CompositeSegmentClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Object* segmentObject; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_COMPOSITESEGMENTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_COMPOSITESEGMENTCLIP_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_COMPOSITESEGMENTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

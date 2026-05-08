#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace PipelineCamera::CameraSequence { class CoreDataComposite; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCESEGMENTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C55E200)
#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCESEGMENTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C55E2F0)
#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCESEGMENTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55E300)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int SequenceSegmentClip_TypeDefinitionIndex = 84920;

	class SequenceSegmentClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Object* segmentObject; // 0x18
		::PipelineCamera::CameraSequence::CoreDataComposite* composite; // 0x20
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> sourceGameObject; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCESEGMENTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCESEGMENTCLIP_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SEQUENCESEGMENTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_MATERIALBASETRACK_AFTERCREATEPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1F98E4E0)
#define MOLEMOLE_TIMELINE_MATERIALBASETRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F98E330)
#define MOLEMOLE_TIMELINE_MATERIALBASETRACK_GETKFRAMETRACK_OFFSET UNITYSDK_OFFSET(0x1F98E250)
#define MOLEMOLE_TIMELINE_MATERIALBASETRACK_ONCURVEWASMODIFIED_OFFSET UNITYSDK_OFFSET(0x1F98DFD0)
#define MOLEMOLE_TIMELINE_MATERIALBASETRACK_TRACKCREATEINIT_OFFSET UNITYSDK_OFFSET(0x1F98E0E0)
#define MOLEMOLE_TIMELINE_MATERIALBASETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F98E9C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialBaseTrack_TypeDefinitionIndex = 32802;

	class MaterialBaseTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		// static const ::System::String* MPBKFrame; // 0x0
		::System::String* referenceObjPath; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASETRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCurveWasModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASETRACK_ONCURVEWASMODIFIED_OFFSET))(this);
		}

		::System::Void TrackCreateInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASETRACK_TRACKCREATEINIT_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASETRACK_CREATEPLAYABLE_OFFSET))(this, graph, go, clip);
		}

		::System::Void AfterCreatePlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASETRACK_AFTERCREATEPLAYABLEGRAPH_OFFSET))(this, graph, go);
		}

		::UnityEngine::Timeline::AnimationTrack* GetKFrameTrack()
		{
			return ((::UnityEngine::Timeline::AnimationTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASETRACK_GETKFRAMETRACK_OFFSET))(this);
		}
	};
}

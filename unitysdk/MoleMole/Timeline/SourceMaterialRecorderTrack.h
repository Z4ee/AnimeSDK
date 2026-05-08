#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C16F120)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1C16F040)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_GETKFRAMETRACK_OFFSET UNITYSDK_OFFSET(0x1C16F4B0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_ONAFTERTRACKDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C16F110)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_ONCURVEWASMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C16F6D0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_TRACKCREATEINIT_OFFSET UNITYSDK_OFFSET(0x1C16F590)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C16F7B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SourceMaterialRecorderTrack_TypeDefinitionIndex = 30659;

	class SourceMaterialRecorderTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		// static const ::System::String* MPBKFrame; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}

		::System::Void OnAfterTrackDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_ONAFTERTRACKDESERIALIZE_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_CREATEPLAYABLE_OFFSET))(this, graph, gameObject, clip);
		}

		::System::Void TrackCreateInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_TRACKCREATEINIT_OFFSET))(this);
		}

		::UnityEngine::Timeline::AnimationTrack* GetKFrameTrack()
		{
			return ((::UnityEngine::Timeline::AnimationTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_GETKFRAMETRACK_OFFSET))(this);
		}

		::System::Void OnCurveWasModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERTRACK_ONCURVEWASMODIFIED_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK_CREATELAYERMIXER_OFFSET UNITYSDK_OFFSET(0xABAA930)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABAAA30)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xABAAB50)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET UNITYSDK_OFFSET(0xABAA9F0)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xABAAC70)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABAAD50)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xABAAD90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkBackgroundCGTrack_TypeDefinitionIndex = 39191;

	class TalkBackgroundCGTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateLayerMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK_CREATELAYERMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UnityEngine_Timeline_ILayerable_ShowDefaultLayeredTrackCommands()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::UnityEngine::Timeline::TimelineClip* P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::System::Int32 P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, P0, P1, P2);
		}
	};
}

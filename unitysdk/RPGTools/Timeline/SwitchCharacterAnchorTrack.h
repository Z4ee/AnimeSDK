#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace RPGTools::Timeline { class OverrideTransformMixer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABA9AC0)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xABA9BD0)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xABA9E80)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABA9E90)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xABA9ED0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SwitchCharacterAnchorTrack_TypeDefinitionIndex = 39186;

	class SwitchCharacterAnchorTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::RPGTools::Timeline::OverrideTransformMixer* _OverrideTransformMixer; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::UnityEngine::Timeline::TimelineClip* P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::System::Int32 P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, P0, P1, P2);
		}
	};
}

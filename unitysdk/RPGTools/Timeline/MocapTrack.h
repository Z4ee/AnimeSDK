#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_MOCAPTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1998B370)
#define RPGTOOLS_TIMELINE_MOCAPTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1998B4C0)
#define RPGTOOLS_TIMELINE_MOCAPTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1998B300)
#define RPGTOOLS_TIMELINE_MOCAPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1998B5C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MocapTrack_TypeDefinitionIndex = 46415;

	class MocapTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::UnityEngine::Vector3 Position; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOCAPTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_NPCPOSSESSIONTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8BC030)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xE8BC170)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE8BC1E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NpcPossessionTrack_TypeDefinitionIndex = 48673;

	class NpcPossessionTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::String* PossessionTrackUniqueName; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}

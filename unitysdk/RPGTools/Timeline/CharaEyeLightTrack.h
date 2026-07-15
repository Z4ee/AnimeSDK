#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_CHARAEYELIGHTTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B353CD0)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B353E40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharaEyeLightTrack_TypeDefinitionIndex = 46157;

	class CharaEyeLightTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}
	};
}

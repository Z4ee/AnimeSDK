#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1D148580)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1D1486C0)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D148900)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ClockBoyEmotionTrack_TypeDefinitionIndex = 48493;

	class ClockBoyEmotionTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B0B7950)
#define RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1B0B7A90)
#define RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B7B00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PropAttachToStoryPropTrack_TypeDefinitionIndex = 48703;

	class PropAttachToStoryPropTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}

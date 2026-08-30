#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class PauseMarkerBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_PAUSEMARKERCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8BE280)
#define RPGTOOLS_TIMELINE_PAUSEMARKERCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8BE270)
#define RPGTOOLS_TIMELINE_PAUSEMARKERCLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xE8BE260)
#define RPGTOOLS_TIMELINE_PAUSEMARKERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8BE350)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PauseMarkerClip_TypeDefinitionIndex = 48681;

	class PauseMarkerClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::PauseMarkerBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PAUSEMARKERCLIP__CTOR_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PAUSEMARKERCLIP_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PAUSEMARKERCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PAUSEMARKERCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventClip.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD05FE40)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD05FE30)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD05FFD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkBackgroundCGPauseClip_TypeDefinitionIndex = 45646;

	class TalkBackgroundCGPauseClip : public ::RPGTools::Timeline::CustomEventClip
	{
	public:
		::System::Boolean Pause; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGPAUSECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

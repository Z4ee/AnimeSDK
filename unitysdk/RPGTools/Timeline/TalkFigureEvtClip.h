#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventClip.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace RPGTools::Timeline { class TalkFigureEvtBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TALKFIGUREEVTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABABCA0)
#define RPGTOOLS_TIMELINE_TALKFIGUREEVTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xABABE70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkFigureEvtClip_TypeDefinitionIndex = 39198;

	class TalkFigureEvtClip : public ::RPGTools::Timeline::CustomEventClip
	{
	public:
		::RPGTools::Timeline::TalkFigureEvtBehaviour* template_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

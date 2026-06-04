#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_STOPDOFEFFECTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD0476B0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_STOPDOFEFFECTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD0476A0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_STOPDOFEFFECTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD047840)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int StopDOFEffectClip_TypeDefinitionIndex = 45888;

	class StopDOFEffectClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_STOPDOFEFFECTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_STOPDOFEFFECTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_STOPDOFEFFECTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

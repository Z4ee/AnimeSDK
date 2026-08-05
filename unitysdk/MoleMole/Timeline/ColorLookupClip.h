#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class ColorLookupBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_COLORLOOKUPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x13AE0280)
#define MOLEMOLE_TIMELINE_COLORLOOKUPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x13AE0270)
#define MOLEMOLE_TIMELINE_COLORLOOKUPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE0460)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorLookupClip_TypeDefinitionIndex = 40337;

	class ColorLookupClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::ColorLookupBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/ClipType.h"

namespace MoleMole::Timeline { class SubtitleBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_SUBTITLECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18D21E00)
#define MOLEMOLE_TIMELINE_SUBTITLECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x18D21DE0)
#define MOLEMOLE_TIMELINE_SUBTITLECLIP_GET_CLIPTYPE_OFFSET UNITYSDK_OFFSET(0x18D21DF0)
#define MOLEMOLE_TIMELINE_SUBTITLECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18D22090)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SubtitleClip_TypeDefinitionIndex = 48125;

	class SubtitleClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::SubtitleBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipType get_ClipType()
		{
			return ((::UnityEngine::Timeline::ClipType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLECLIP_GET_CLIPTYPE_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

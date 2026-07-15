#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class GlobalMainIntensityTimelineBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A5BF50)
#define RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A5C020)
#define RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A5C030)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int GlobalMainIntensityTimelineClip_TypeDefinitionIndex = 46681;

	class GlobalMainIntensityTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::GlobalMainIntensityTimelineBehaviour* template_; // 0x18
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GLOBALMAININTENSITYTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

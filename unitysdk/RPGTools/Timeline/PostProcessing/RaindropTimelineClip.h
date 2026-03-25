#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::PostProcessing { class RaindropTimelineBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB900F0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB90240)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB90250)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int RaindropTimelineClip_TypeDefinitionIndex = 39409;

	class RaindropTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::PostProcessing::RaindropTimelineBehaviour* Template; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

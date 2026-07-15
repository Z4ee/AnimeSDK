#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class TimeScaleBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TIMESCALECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19F53C90)
#define RPGTOOLS_TIMELINE_TIMESCALECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19F53E30)
#define RPGTOOLS_TIMELINE_TIMESCALECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19F53E40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimeScaleClip_TypeDefinitionIndex = 46724;

	class TimeScaleClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Single TimeScale; // 0x18
		::System::Single Duration; // 0x1C
		::RPGTools::Timeline::TimeScaleBehaviour* template_; // 0x20
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMESCALECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMESCALECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMESCALECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

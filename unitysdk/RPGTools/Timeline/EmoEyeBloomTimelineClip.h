#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class EmoEyeBloomTimelineBehaviour; }
namespace RPGTools::Timeline { class EyeBloomData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EMOEYEBLOOMTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B570B80)
#define RPGTOOLS_TIMELINE_EMOEYEBLOOMTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B570B70)
#define RPGTOOLS_TIMELINE_EMOEYEBLOOMTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B570D20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeBloomTimelineClip_TypeDefinitionIndex = 48575;

	class EmoEyeBloomTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::EyeBloomData* EyeBloomData; // 0x18
		::RPGTools::Timeline::EmoEyeBloomTimelineBehaviour* template_; // 0x20
		::System::Single Duration; // 0x28
		::System::Single Start; // 0x2C
		::System::Single End; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/TimelineClip_ClipExtrapolation.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPGTools::Timeline::Emotion { class PoseData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A4F770)
#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A4F760)
#define RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A4FA00)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoTimelineClip_TypeDefinitionIndex = 46950;

	class EmoTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::Emotion::PoseData* PoseData; // 0x18
		::RPG::Client::MonoEmoPlayableGraph* MonoEmoPlayableGraph; // 0x20
		::UnityEngine::Playables::Playable ControllingPlayable; // 0x28
		::System::Double End; // 0x38
		::System::Double Start; // 0x40
		::UnityEngine::Timeline::TimelineClip_ClipExtrapolation PostExtrapolation; // 0x48
		::RPGTools::Timeline::Emotion::EmoTrackType EmoType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

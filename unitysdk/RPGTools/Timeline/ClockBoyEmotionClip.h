#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::GameCore { class SetClockBoyEmotion; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B3616E0)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B3616D0)
#define RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B361870)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ClockBoyEmotionClip_TypeDefinitionIndex = 46257;

	class ClockBoyEmotionClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::SetClockBoyEmotion* Config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CLOCKBOYEMOTIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

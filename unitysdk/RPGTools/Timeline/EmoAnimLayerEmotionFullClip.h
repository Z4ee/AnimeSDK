#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD0047E0)
#define RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD0047D0)
#define RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD004970)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoAnimLayerEmotionFullClip_TypeDefinitionIndex = 45387;

	class EmoAnimLayerEmotionFullClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Boolean UseDefaultEmotion; // 0x20
		::System::String* EmotionName; // 0x28
		::System::Boolean IsLoop; // 0x30
		::System::Single TransitTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

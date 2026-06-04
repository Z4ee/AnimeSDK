#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOBLINKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD00FC80)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOBLINKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD00FF80)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOBLINKCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD00FF90)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeAutoBlinkClip_TypeDefinitionIndex = 46000;

	class EmoBlendShapeAutoBlinkClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPG::Client::MonoEmoBlendShapesController* MonoController; // 0x18
		::System::Double Start; // 0x20
		::System::Double End; // 0x28
		::System::Boolean EnableAutoBlink; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOBLINKCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOBLINKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOBLINKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

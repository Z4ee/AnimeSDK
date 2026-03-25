#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharaEyeAutoBlinkClip_BlinkType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB32E80)
#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB32E70)
#define RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB33080)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharaEyeAutoBlinkClip_TypeDefinitionIndex = 38782;

	class CharaEyeAutoBlinkClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::CharaEyeAutoBlinkClip_BlinkType EyeBlinkType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYEAUTOBLINKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

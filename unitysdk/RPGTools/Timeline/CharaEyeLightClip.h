#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CharaEyeLightBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARAEYELIGHTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8A7390)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8A7380)
#define RPGTOOLS_TIMELINE_CHARAEYELIGHTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A7590)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharaEyeLightClip_TypeDefinitionIndex = 44684;

	class CharaEyeLightClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::CharaEyeLightBehaviour* template_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARAEYELIGHTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

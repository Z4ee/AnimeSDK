#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CharacterStorySteerData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB40290)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB40450)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB40460)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStorySteerClip_TypeDefinitionIndex = 38872;

	class CharacterStorySteerClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		// static const ::System::Single MIN_STEER_DURATION; // 0x0
		::RPGTools::Timeline::CharacterStorySteerData* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

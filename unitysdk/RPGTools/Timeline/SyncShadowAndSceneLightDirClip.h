#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class SyncShadowAndSceneLightDirBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB91F650)
#define RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB91F850)
#define RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB91F860)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SyncShadowAndSceneLightDirClip_TypeDefinitionIndex = 45081;

	class SyncShadowAndSceneLightDirClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean IsSync; // 0x18
		::RPGTools::Timeline::SyncShadowAndSceneLightDirBehaviour* template_; // 0x20
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

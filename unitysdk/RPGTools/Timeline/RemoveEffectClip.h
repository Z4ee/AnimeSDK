#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class RemoveEffectBehaviour; }
namespace RPGTools::Timeline { class RemoveEffectData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_REMOVEEFFECTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB98AA0)
#define RPGTOOLS_TIMELINE_REMOVEEFFECTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB98DC0)
#define RPGTOOLS_TIMELINE_REMOVEEFFECTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB98DD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RemoveEffectClip_TypeDefinitionIndex = 39151;

	class RemoveEffectClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::RemoveEffectData* Config; // 0x18
		::RPGTools::Timeline::RemoveEffectBehaviour* template_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

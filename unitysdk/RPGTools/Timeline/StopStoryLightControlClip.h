#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8E7280)
#define RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8E73F0)
#define RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8E7400)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StopStoryLightControlClip_TypeDefinitionIndex = 48799;

	class StopStoryLightControlClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STOPSTORYLIGHTCONTROLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

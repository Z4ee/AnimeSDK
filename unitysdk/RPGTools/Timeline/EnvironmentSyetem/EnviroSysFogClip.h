#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::EnvironmentSyetem { class EnviroSysFogBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB65BB0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB65CD0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB65CE0)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysFogClip_TypeDefinitionIndex = 39442;

	class EnviroSysFogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::EnvironmentSyetem::EnviroSysFogBehaviour* template_; // 0x18
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

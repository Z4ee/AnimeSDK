#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::EnvironmentSyetem { class EnviroSysTransitionBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD01DE80)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD01DF50)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONCLIP_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD01DF60)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD01DFC0)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysTransitionClip_TypeDefinitionIndex = 45914;

	class EnviroSysTransitionClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::EnvironmentSyetem::EnviroSysTransitionBehaviour* template_; // 0x18
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void Method_4_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONCLIP_METHOD_4_4343F372F34C05BF_OFFSET))(this);
		}
	};
}

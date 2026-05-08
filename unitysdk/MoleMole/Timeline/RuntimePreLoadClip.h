#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class RuntimePreLoadBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x15B65300)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x15B652F0)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x15B654C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimePreLoadClip_TypeDefinitionIndex = 49266;

	class RuntimePreLoadClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::RuntimePreLoadBehavior* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

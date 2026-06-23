#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class FixedTimeStepBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_FIXEDTIMESTEPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1E4B43D0)
#define MOLEMOLE_TIMELINE_FIXEDTIMESTEPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1E4B43C0)
#define MOLEMOLE_TIMELINE_FIXEDTIMESTEPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B44A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FixedTimeStepClip_TypeDefinitionIndex = 32157;

	class FixedTimeStepClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::FixedTimeStepBehavior* recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXEDTIMESTEPCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXEDTIMESTEPCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXEDTIMESTEPCLIP_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_VISIBILITYPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x13F355A0)
#define MOLEMOLE_TIMELINE_VISIBILITYPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x13F35590)
#define MOLEMOLE_TIMELINE_VISIBILITYPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x13F35710)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisibilityPlayableAsset_TypeDefinitionIndex = 69396;

	class VisibilityPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISIBILITYPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

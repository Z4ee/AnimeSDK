#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class CamLookAtFollowBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18D01170)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x18D01160)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18D012C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CamLookAtFollowClip_TypeDefinitionIndex = 65988;

	class CamLookAtFollowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::CamLookAtFollowBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

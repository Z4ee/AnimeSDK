#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class DistortionBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_DISTORTIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x13EC37C0)
#define MOLEMOLE_TIMELINE_DISTORTIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x13EC37B0)
#define MOLEMOLE_TIMELINE_DISTORTIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC39A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DistortionClip_TypeDefinitionIndex = 76760;

	class DistortionClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::DistortionBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class UnsharpMaskBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_UNSHARPMASKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1740C3A0)
#define MOLEMOLE_TIMELINE_UNSHARPMASKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1740C390)
#define MOLEMOLE_TIMELINE_UNSHARPMASKCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1740C580)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int UnsharpMaskClip_TypeDefinitionIndex = 75431;

	class UnsharpMaskClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::UnsharpMaskBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNSHARPMASKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

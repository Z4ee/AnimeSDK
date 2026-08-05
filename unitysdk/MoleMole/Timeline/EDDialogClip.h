#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class EDDialogBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_EDDIALOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1450B8B0)
#define MOLEMOLE_TIMELINE_EDDIALOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1450B8A0)
#define MOLEMOLE_TIMELINE_EDDIALOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1450BA90)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EDDialogClip_TypeDefinitionIndex = 72127;

	class EDDialogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::EDDialogBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

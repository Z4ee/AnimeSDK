#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class IdleLiveAddGiftToShowBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A617A0)
#define RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A61890)
#define RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A618A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int IdleLiveAddGiftToShowClip_TypeDefinitionIndex = 46027;

	class IdleLiveAddGiftToShowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::IdleLiveAddGiftToShowBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

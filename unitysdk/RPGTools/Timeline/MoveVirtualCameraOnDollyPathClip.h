#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class MoveVirtualCameraOnDollyPathConfig; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B5A07E0)
#define RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B5A0940)
#define RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A0950)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MoveVirtualCameraOnDollyPathClip_TypeDefinitionIndex = 48278;

	class MoveVirtualCameraOnDollyPathClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::MoveVirtualCameraOnDollyPathConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOVEVIRTUALCAMERAONDOLLYPATHCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

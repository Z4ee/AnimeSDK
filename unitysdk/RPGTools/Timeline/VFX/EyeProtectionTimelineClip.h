#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::VFX { class EyeProtectionTimelineBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BF2FF10)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1BF30000)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF30010)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int EyeProtectionTimelineClip_TypeDefinitionIndex = 49154;

	class EyeProtectionTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::VFX::EyeProtectionTimelineBehaviour* template_; // 0x18
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

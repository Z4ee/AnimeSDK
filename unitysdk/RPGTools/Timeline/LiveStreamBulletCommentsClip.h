#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class PerformanceLiveStreamBulletControlData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A68D50)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A68D40)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A68EE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LiveStreamBulletCommentsClip_TypeDefinitionIndex = 46396;

	class LiveStreamBulletCommentsClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::PerformanceLiveStreamBulletControlData* BulletControlData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

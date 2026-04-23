#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

class Class_3_C434B835169B9137;
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8EB150)
#define RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8EB130)
#define RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_SET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8EB140)
#define RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EB330)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MainCameraRefAnimTimelineClip_TypeDefinitionIndex = 45168;

	class MainCameraRefAnimTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x18
		::UnityEngine::AnimationClip* clip; // 0x20
		::System::Boolean ChangeNearClip; // 0x28
		::System::Boolean changeNearClip; // 0x29
		::System::Single nearClipDis; // 0x2C
		::System::Single farClipDis; // 0x30
		::Class_3_C434B835169B9137* template_; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void set_clipCaps(::UnityEngine::Timeline::ClipCaps value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ClipCaps))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_SET_CLIPCAPS_OFFSET))(this, value);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERAREFANIMTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

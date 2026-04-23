#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SAMPLEANIMATIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB90E640)
#define RPGTOOLS_TIMELINE_SAMPLEANIMATIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB90E630)
#define RPGTOOLS_TIMELINE_SAMPLEANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB90E830)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SampleAnimationClip_TypeDefinitionIndex = 44614;

	class SampleAnimationClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::AnimationClip* SampleAnimation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SAMPLEANIMATIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SAMPLEANIMATIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SAMPLEANIMATIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

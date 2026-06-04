#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class AnimatorEnableControlBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFD72A0)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFD73F0)
#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD7400)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorEnableControlClip_TypeDefinitionIndex = 45489;

	class AnimatorEnableControlClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Int32 index; // 0x18
		::RPGTools::Timeline::AnimatorEnableControlBehaviour* template_; // 0x20
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}

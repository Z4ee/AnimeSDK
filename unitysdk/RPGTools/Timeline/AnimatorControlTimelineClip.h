#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class AnimatorControlTimelineBehaviour; }
namespace RPGTools::Timeline { class AnimatorControlTimelineClip_BoolEntry; }
namespace RPGTools::Timeline { class AnimatorControlTimelineClip_FloatEntry; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFD6C40)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFD6C20)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xCFD6C30)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD6E00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorControlTimelineClip_TypeDefinitionIndex = 45117;

	class AnimatorControlTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::AnimatorControlTimelineBehaviour* template_; // 0x18
		::System::Boolean useFloatParam; // 0x20
		::Il2CppArray<::RPGTools::Timeline::AnimatorControlTimelineClip_FloatEntry*>* floatParams; // 0x28
		::System::Boolean useBoolParam; // 0x30
		::Il2CppArray<::RPGTools::Timeline::AnimatorControlTimelineClip_BoolEntry*>* boolParams; // 0x38
		::System::Boolean useTriggerParam; // 0x40
		::System::String* triggerParam; // 0x48
		::System::String* toState; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}

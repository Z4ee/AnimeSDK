#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class TriggerStoryAdvEffectClip; }

#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xABB16D0)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABB16F0)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xABB16E0)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xABB18A0)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABB18B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TriggerStoryAdvEffectBehaviour_TypeDefinitionIndex = 39146;

	class TriggerStoryAdvEffectBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::TriggerStoryAdvEffectClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::TriggerStoryAdvEffectClip* get_Clip()
		{
			return ((::RPGTools::Timeline::TriggerStoryAdvEffectClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::TriggerStoryAdvEffectClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TriggerStoryAdvEffectClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}

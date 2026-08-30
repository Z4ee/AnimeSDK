#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class TriggerStoryAdvEffectClip; }

#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1BF2E600)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1BF2E620)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1BF2E610)
#define RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2E970)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TriggerStoryAdvEffectBehaviour_TypeDefinitionIndex = 48782;

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

		::System::Void set_Clip(::RPGTools::Timeline::TriggerStoryAdvEffectClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TriggerStoryAdvEffectClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGERSTORYADVEFFECTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

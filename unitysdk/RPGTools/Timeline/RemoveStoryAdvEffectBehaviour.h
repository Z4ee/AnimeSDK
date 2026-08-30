#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class RemoveStoryAdvEffectClip; }

#define RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B0BB8F0)
#define RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B0BB910)
#define RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B0BB900)
#define RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BBAB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RemoveStoryAdvEffectBehaviour_TypeDefinitionIndex = 48777;

	class RemoveStoryAdvEffectBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::RemoveStoryAdvEffectClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::RemoveStoryAdvEffectClip* get_Clip()
		{
			return ((::RPGTools::Timeline::RemoveStoryAdvEffectClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::RemoveStoryAdvEffectClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::RemoveStoryAdvEffectClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVESTORYADVEFFECTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

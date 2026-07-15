#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class PropAttachToStoryPropClip; }

#define RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x199AB140)
#define RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x199AB160)
#define RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x199AB150)
#define RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x199AB420)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PropAttachToStoryPropBehaviour_TypeDefinitionIndex = 46467;

	class PropAttachToStoryPropBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PropAttachToStoryPropClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::PropAttachToStoryPropClip* get_Clip()
		{
			return ((::RPGTools::Timeline::PropAttachToStoryPropClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::PropAttachToStoryPropClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::PropAttachToStoryPropClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOSTORYPROPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

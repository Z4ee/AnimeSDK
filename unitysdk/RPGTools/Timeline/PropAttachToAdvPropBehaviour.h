#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class PropAttachToAdvPropClip; }

#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8D8BA0)
#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8D8BC0)
#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8D8BB0)
#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8D8EB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PropAttachToAdvPropBehaviour_TypeDefinitionIndex = 48698;

	class PropAttachToAdvPropBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PropAttachToAdvPropClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::PropAttachToAdvPropClip* get_Clip()
		{
			return ((::RPGTools::Timeline::PropAttachToAdvPropClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::PropAttachToAdvPropClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::PropAttachToAdvPropClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

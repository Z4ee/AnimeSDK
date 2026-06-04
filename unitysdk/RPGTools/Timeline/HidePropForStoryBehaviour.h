#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class HidePropForStoryClip; }

#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xD023440)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD023460)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xD023450)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD023610)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD023620)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HidePropForStoryBehaviour_TypeDefinitionIndex = 45433;

	class HidePropForStoryBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::HidePropForStoryClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::HidePropForStoryClip* get_Clip()
		{
			return ((::RPGTools::Timeline::HidePropForStoryClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::HidePropForStoryClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::HidePropForStoryClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

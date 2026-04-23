#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class HidePropForStoryClip; }

#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8E0640)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8E0660)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8E0650)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E0810)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8E0820)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HidePropForStoryBehaviour_TypeDefinitionIndex = 44876;

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

		::System::Void set_Clip(::RPGTools::Timeline::HidePropForStoryClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::HidePropForStoryClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}

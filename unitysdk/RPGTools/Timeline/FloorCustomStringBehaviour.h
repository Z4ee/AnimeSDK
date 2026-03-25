#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class FloorCustomStringClip; }

#define RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB68DA0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB68DC0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB68DB0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB69040)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB69050)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FloorCustomStringBehaviour_TypeDefinitionIndex = 38965;

	class FloorCustomStringBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::FloorCustomStringClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::FloorCustomStringClip* get_Clip()
		{
			return ((::RPGTools::Timeline::FloorCustomStringClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::FloorCustomStringClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::FloorCustomStringClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMSTRINGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}

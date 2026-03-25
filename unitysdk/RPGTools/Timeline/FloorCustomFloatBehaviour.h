#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class FloorCustomFloatClip; }

#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB688D0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB688F0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB688E0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB68B40)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB68B50)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FloorCustomFloatBehaviour_TypeDefinitionIndex = 38963;

	class FloorCustomFloatBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::FloorCustomFloatClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::FloorCustomFloatClip* get_Clip()
		{
			return ((::RPGTools::Timeline::FloorCustomFloatClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::FloorCustomFloatClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::FloorCustomFloatClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}

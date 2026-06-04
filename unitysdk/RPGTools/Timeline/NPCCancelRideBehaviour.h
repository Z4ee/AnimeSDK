#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class NPCCancelRideClip; }

#define RPGTOOLS_TIMELINE_NPCCANCELRIDEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xD030CC0)
#define RPGTOOLS_TIMELINE_NPCCANCELRIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD030CE0)
#define RPGTOOLS_TIMELINE_NPCCANCELRIDEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xD030CD0)
#define RPGTOOLS_TIMELINE_NPCCANCELRIDEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD030DB0)
#define RPGTOOLS_TIMELINE_NPCCANCELRIDEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD030DC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NPCCancelRideBehaviour_TypeDefinitionIndex = 45493;

	class NPCCancelRideBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::NPCCancelRideClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCCANCELRIDEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::NPCCancelRideClip* get_Clip()
		{
			return ((::RPGTools::Timeline::NPCCancelRideClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCCANCELRIDEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::NPCCancelRideClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::NPCCancelRideClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCCANCELRIDEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCCANCELRIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCCANCELRIDEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

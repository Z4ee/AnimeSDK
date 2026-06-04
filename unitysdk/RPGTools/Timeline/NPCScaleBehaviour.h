#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class NPCScaleClip; }

#define RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xD0316D0)
#define RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD0316F0)
#define RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xD0316E0)
#define RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD031850)
#define RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD031860)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NPCScaleBehaviour_TypeDefinitionIndex = 45499;

	class NPCScaleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::NPCScaleClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::NPCScaleClip* get_Clip()
		{
			return ((::RPGTools::Timeline::NPCScaleClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::NPCScaleClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::NPCScaleClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

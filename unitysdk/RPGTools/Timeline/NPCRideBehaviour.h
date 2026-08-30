#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class NPCRideClip; }

#define RPGTOOLS_TIMELINE_NPCRIDEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B098DF0)
#define RPGTOOLS_TIMELINE_NPCRIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B098E10)
#define RPGTOOLS_TIMELINE_NPCRIDEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B098E00)
#define RPGTOOLS_TIMELINE_NPCRIDEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B098FC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NPCRideBehaviour_TypeDefinitionIndex = 48664;

	class NPCRideBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::NPCRideClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCRIDEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::NPCRideClip* get_Clip()
		{
			return ((::RPGTools::Timeline::NPCRideClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCRIDEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::NPCRideClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::NPCRideClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCRIDEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCRIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class SwitchStillGradeAnimClip; }

#define RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE93D210)
#define RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE93D230)
#define RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE93D220)
#define RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE93D310)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SwitchStillGradeAnimBehaviour_TypeDefinitionIndex = 48370;

	class SwitchStillGradeAnimBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::SwitchStillGradeAnimClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::SwitchStillGradeAnimClip* get_Clip()
		{
			return ((::RPGTools::Timeline::SwitchStillGradeAnimClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::SwitchStillGradeAnimClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::SwitchStillGradeAnimClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHSTILLGRADEANIMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

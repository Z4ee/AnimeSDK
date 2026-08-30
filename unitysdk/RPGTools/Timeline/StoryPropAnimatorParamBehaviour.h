#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_01F4079471966D8C;
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class StoryEntityAnimatorParam; }
namespace RPGTools::Timeline { class StoryPropAnimatorParamClip; }
namespace UnityEngine { class Animator; }

#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8EEF10)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_METHOD_2_2999DA53B42F4D47_OFFSET UNITYSDK_OFFSET(0xE8EF080)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_METHOD_2_5B33B93278C1F253_OFFSET UNITYSDK_OFFSET(0xE8EF190)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8EEF30)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8EEF20)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8EF2E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropAnimatorParamBehaviour_TypeDefinitionIndex = 48695;

	class StoryPropAnimatorParamBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::StoryPropAnimatorParamClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::StoryPropAnimatorParamClip* get_Clip()
		{
			return ((::RPGTools::Timeline::StoryPropAnimatorParamClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::StoryPropAnimatorParamClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::StoryPropAnimatorParamClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_2999DA53B42F4D47(::Class_2_01F4079471966D8C* a1, ::RPGTools::Timeline::StoryEntityAnimatorParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_01F4079471966D8C*, ::RPGTools::Timeline::StoryEntityAnimatorParam*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_METHOD_2_2999DA53B42F4D47_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_5B33B93278C1F253(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMBEHAVIOUR_METHOD_2_5B33B93278C1F253_OFFSET))(this, a1, a2);
		}
	};
}

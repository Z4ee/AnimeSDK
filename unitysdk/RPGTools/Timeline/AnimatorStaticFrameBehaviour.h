#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class AnimatorStaticFrameConfig; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_METHOD_2_C47A6EBDAFAB8B19_OFFSET UNITYSDK_OFFSET(0x1B52D950)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_METHOD_2_E93F40BE377F5563_OFFSET UNITYSDK_OFFSET(0x1B530540)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B5308D0)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B530480)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1B530950)
#define RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5309A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorStaticFrameBehaviour_TypeDefinitionIndex = 48314;

	class AnimatorStaticFrameBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::AnimatorStaticFrameConfig* Config; // 0x10
		::System::Single Start; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E93F40BE377F5563(::RPGTools::Timeline::AnimatorStaticFrameConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::AnimatorStaticFrameConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_METHOD_2_E93F40BE377F5563_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_2_C47A6EBDAFAB8B19(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_METHOD_2_C47A6EBDAFAB8B19_OFFSET))(a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORSTATICFRAMEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}
	};
}

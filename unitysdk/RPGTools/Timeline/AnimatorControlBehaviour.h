#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class AniamtorControlConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLBEHAVIOUR_METHOD_2_444B74B8EC727ACC_OFFSET UNITYSDK_OFFSET(0x1B33FB80)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B340090)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B33FA10)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1B340040)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B340110)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorControlBehaviour_TypeDefinitionIndex = 46080;

	class AnimatorControlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean UseMultiple; // 0x10
		::RPGTools::Timeline::AniamtorControlConfig* Config; // 0x18
		::System::Collections::Generic::List_1<::RPGTools::Timeline::AniamtorControlConfig*>* Configs; // 0x20
		::System::Single Start; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_444B74B8EC727ACC(::RPGTools::Timeline::AniamtorControlConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::AniamtorControlConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLBEHAVIOUR_METHOD_2_444B74B8EC727ACC_OFFSET))(this, a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}
	};
}

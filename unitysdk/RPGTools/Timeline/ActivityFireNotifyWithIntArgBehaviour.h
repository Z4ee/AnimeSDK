#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFD4930)
#define RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD4A60)
#define RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFD4A70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ActivityFireNotifyWithIntArgBehaviour_TypeDefinitionIndex = 45106;

	class ActivityFireNotifyWithIntArgBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* NotifyTypeName; // 0x10
		::System::String* IntArg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

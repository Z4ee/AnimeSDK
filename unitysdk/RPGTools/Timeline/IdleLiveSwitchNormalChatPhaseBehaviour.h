#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xD0266B0)
#define RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD0265D0)
#define RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD026720)
#define RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD026730)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int IdleLiveSwitchNormalChatPhaseBehaviour_TypeDefinitionIndex = 45112;

	class IdleLiveSwitchNormalChatPhaseBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::UInt32 NormalChatPhaseId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_43A478BA01FE29B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESWITCHNORMALCHATPHASEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

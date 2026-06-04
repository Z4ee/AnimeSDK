#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xD0263F0)
#define RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD026310)
#define RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD026460)
#define RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD026470)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int IdleLiveSetSpecialChatPhaseBehaviour_TypeDefinitionIndex = 45110;

	class IdleLiveSetSpecialChatPhaseBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::UInt32 SpecialChatPhaseId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_43A478BA01FE29B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVESETSPECIALCHATPHASEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}

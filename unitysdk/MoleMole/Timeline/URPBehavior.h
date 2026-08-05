#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class URPSetting; }

#define MOLEMOLE_TIMELINE_URPBEHAVIOR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x173BE240)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x173BE230)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0x173BE250)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x173BE220)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x173BE0D0)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x173BDF40)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x173BE170)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x173BE030)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x173BE1E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int URPBehavior_TypeDefinitionIndex = 42099;

	class URPBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::URPSetting* setting; // 0x10
		::System::Boolean hasPrevSetting; // 0x18
		::MoleMole::Timeline::URPSetting* prevSetting; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_METHOD_2_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
		}
	};
}

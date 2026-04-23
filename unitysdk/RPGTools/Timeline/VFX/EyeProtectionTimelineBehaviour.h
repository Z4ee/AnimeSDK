#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/RPGTools/Timeline/VFX/EyeProtectionParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xB927800)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0xB927790)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_6FB03FD62E1385C7_OFFSET UNITYSDK_OFFSET(0xB927530)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB9274A0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xB9280E0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_CADFED087C30D5D0_OFFSET UNITYSDK_OFFSET(0xB927B60)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0xB927950)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB9275A0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB927370)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB927650)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB928090)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB9280C0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB9280B0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB9280D0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int EyeProtectionTimelineBehaviour_TypeDefinitionIndex = 45385;

	class EyeProtectionTimelineBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VFX::EyeProtectionParameter Parameter; // 0x18
		::RPGTools::Timeline::VFX::EyeProtectionParameter OrignParameter; // 0x30
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x48
		::System::Boolean _openEyeProtect; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_FA0119DD445A672F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_FA0119DD445A672F_OFFSET))(this);
		}

		::RPGTools::Timeline::VFX::EyeProtectionParameter Method_3_6FB03FD62E1385C7()
		{
			return ((::RPGTools::Timeline::VFX::EyeProtectionParameter(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_6FB03FD62E1385C7_OFFSET))(this);
		}

		::System::Void Method_3_CADFED087C30D5D0(::RPGTools::Timeline::VFX::EyeProtectionParameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::EyeProtectionParameter))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_CADFED087C30D5D0_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_2ED6C3773AA1E488()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_2ED6C3773AA1E488_OFFSET))(this);
		}

		::System::Void Method_3_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void Method_3_BB2928BEC244DEB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
		}
	};
}

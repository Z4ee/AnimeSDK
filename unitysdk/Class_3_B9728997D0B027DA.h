#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }

#define CLASS_3_B9728997D0B027DA_METHOD_3_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xA673FD0)
#define CLASS_3_B9728997D0B027DA_METHOD_3_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xA674020)
#define CLASS_3_B9728997D0B027DA_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA673E80)
#define CLASS_3_B9728997D0B027DA_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA674210)
#define CLASS_3_B9728997D0B027DA_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xA674150)
#define CLASS_3_B9728997D0B027DA_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xA6742D0)
#define CLASS_3_B9728997D0B027DA_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA673DE0)
#define CLASS_3_B9728997D0B027DA_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA673F60)
#define CLASS_3_B9728997D0B027DA__CTOR_OFFSET UNITYSDK_OFFSET(0xA6742A0)
#define CLASS_3_B9728997D0B027DA___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA6742B0)
#define CLASS_3_B9728997D0B027DA___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA6742C0)

inline static constexpr unsigned int Class_3_B9728997D0B027DA_TypeDefinitionIndex = 45627;

class Class_3_B9728997D0B027DA : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
{
public:
	::RPG::Client::EnvironmentSystem* Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x21
	::System::Boolean Field_3_3; // 0x22
	::System::Boolean Field_3_4; // 0x23
	::System::Int32 Field_3_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_3_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA_METHOD_3_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA_METHOD_3_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_3_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA_METHOD_3_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_3_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9728997D0B027DA_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
	}
};

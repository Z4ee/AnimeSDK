#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }

#define CLASS_3_A70D0D9A8A1971B5_METHOD_3_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x8CD1880)
#define CLASS_3_A70D0D9A8A1971B5_METHOD_3_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x8CD18D0)
#define CLASS_3_A70D0D9A8A1971B5_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8CD1730)
#define CLASS_3_A70D0D9A8A1971B5_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8CD1AB0)
#define CLASS_3_A70D0D9A8A1971B5_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x8CD19F0)
#define CLASS_3_A70D0D9A8A1971B5_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x8CD1B70)
#define CLASS_3_A70D0D9A8A1971B5_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x8CD1690)
#define CLASS_3_A70D0D9A8A1971B5_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x8CD1810)
#define CLASS_3_A70D0D9A8A1971B5__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD1B40)
#define CLASS_3_A70D0D9A8A1971B5___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x8CD1B50)
#define CLASS_3_A70D0D9A8A1971B5___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x8CD1B60)

inline static constexpr unsigned int Class_3_A70D0D9A8A1971B5_TypeDefinitionIndex = 39170;

class Class_3_A70D0D9A8A1971B5 : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
{
public:
	::RPG::Client::EnvironmentSystem* Field_3_1; // 0x18
	::System::Int32 Field_3_2; // 0x20
	::System::Boolean Field_3_3; // 0x24
	::System::Boolean Field_3_5; // 0x25
	::System::Boolean Field_3_4; // 0x26
	::System::Boolean Field_3_0; // 0x27

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_3_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5_METHOD_3_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5_METHOD_3_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_3_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5_METHOD_3_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
	}

	::System::Void Method_3_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70D0D9A8A1971B5_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/EnvironmentSyetem/EnvSysFogParam.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_METHOD_3_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0xD01C5E0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD01A7C0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_METHOD_3_9ABAC22C71BE42F4_OFFSET UNITYSDK_OFFSET(0xD01B530)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xD01C9B0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_METHOD_3_F1F14DDEAF5D76D6_OFFSET UNITYSDK_OFFSET(0xD01A860)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD01B380)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD01A2D0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD01B420)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD01C8E0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD01C990)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD01C980)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD01C9A0)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysFogBehaviour_TypeDefinitionIndex = 45907;

	class EnviroSysFogBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam OrignEnvSysFogParameter; // 0x18
		::System::Int64 tk; // 0x60
		::System::Boolean SceneUseFogV2; // 0x68
		::System::Single V2FogDensity; // 0x6C
		::System::Single V2HightFogDensity; // 0x70
		::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam EnvSysFogParameter; // 0x78
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_41AA181104E03F2C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_METHOD_3_41AA181104E03F2C_OFFSET))(this);
		}

		::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam Method_3_F1F14DDEAF5D76D6()
		{
			return ((::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_METHOD_3_F1F14DDEAF5D76D6_OFFSET))(this);
		}

		::System::Void Method_3_9ABAC22C71BE42F4(::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_METHOD_3_9ABAC22C71BE42F4_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_BB2928BEC244DEB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
		}
	};
}

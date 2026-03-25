#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/LightParameter.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/RPGTools/Timeline/RimLightParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_GET_ISCLOSECHARACTERSHADOW_OFFSET UNITYSDK_OFFSET(0xAB73B50)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0xAB70ED0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0xAB71B70)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xAB72C40)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0xAB72BF0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAB70CA0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0xAB73A50)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xAB73C40)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0xAB72AA0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xAB70E20)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB72B10)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB70C00)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB70D40)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB73B70)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xAB73C30)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB73C10)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB73C20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LightControlBehaviour_TypeDefinitionIndex = 39254;

	class LightControlBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		static ::System::Boolean* StaticGet__LightControlBehaviourActive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightControlBehaviour_TypeDefinitionIndex)->GetStaticField(0x12B70);
		}
		::System::Boolean enableDisableLocalMainLight; // 0x18
		::System::Single disableLocalMainLight; // 0x1C
		::System::Single _OriginDisableLocalMainLight; // 0x20
		::RPGTools::Timeline::LightParameter lightParameter; // 0x24
		::RPGTools::Timeline::LightParameter _OriginParameter; // 0x54
		::RPGTools::Timeline::RimLightParameter RimParameter; // 0x84
		::RPGTools::Timeline::RimLightParameter _OriginRimParameter; // 0xBC
		::UnityEngine::Vector3 _OriginMonsterDir; // 0xF4
		::System::Single CharacterShadowFactor; // 0x100
		::System::Boolean CharacterShadowFactorEnableInShaowProbe; // 0x104
		::System::Single _OriCharacterShadowFactor; // 0x108
		::System::Single CharacterAngleLimit; // 0x10C
		::System::Single _OriCharacterAngleLimit; // 0x110
		::System::Boolean _FirstFrame; // 0x114
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x118
		::System::Int32 _TargetPriority; // 0x120
		::System::Boolean AutoReset; // 0x124
		::UnityEngine::Vector3 position; // 0x128
		::UnityEngine::GameObject* _CharacterGo; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_F4DD08A31BA3F883()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_F4DD08A31BA3F883_OFFSET))(this);
		}

		::System::Void Method_3_E727F9956B5BD78B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_E727F9956B5BD78B_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_7D21D8548943D577()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_7D21D8548943D577_OFFSET))(this);
		}

		::System::Void Method_3_4D9E1AC61B60D577()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_4D9E1AC61B60D577_OFFSET))(this);
		}

		::System::Void Method_3_41F5D9C0F0A306F5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_41F5D9C0F0A306F5_OFFSET))(this);
		}

		::System::Void Method_3_52607DE4C357D269()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_52607DE4C357D269_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Boolean Method_3_A871253BFD471C99()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_A871253BFD471C99_OFFSET))(this);
		}

		::System::Boolean get_IsCloseCharacterShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_GET_ISCLOSECHARACTERSHADOW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void Method_3_BB2928BEC244DEB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
		}
	};
}

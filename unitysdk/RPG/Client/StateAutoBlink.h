#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEAUTOBLINK_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xB1C8CF0)
#define RPG_CLIENT_STATEAUTOBLINK_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xB1C8F80)
#define RPG_CLIENT_STATEAUTOBLINK_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB1C8DD0)
#define RPG_CLIENT_STATEAUTOBLINK__CTOR_OFFSET UNITYSDK_OFFSET(0xB1C9030)
#define RPG_CLIENT_STATEAUTOBLINK___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xB1C9050)
#define RPG_CLIENT_STATEAUTOBLINK___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xB1C9070)
#define RPG_CLIENT_STATEAUTOBLINK___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB1C9060)

namespace RPG::Client
{
	inline static constexpr unsigned int StateAutoBlink_TypeDefinitionIndex = 63463;

	class StateAutoBlink : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Boolean _disableAutoBlink; // 0x18
		::System::Single MinBlinkGap; // 0x1C
		::System::Single MaxBlinkGap; // 0x20
		::System::Single DoubleBlinkProbability; // 0x24
		::System::Single _blinkGapTimer; // 0x28
		::System::Boolean _isBoubleBlink; // 0x2C
		::System::Boolean _isBlinking; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEAUTOBLINK__CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEAUTOBLINK_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEAUTOBLINK_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEAUTOBLINK_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEAUTOBLINK___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEAUTOBLINK___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEAUTOBLINK___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, P0, P1, P2);
		}
	};
}

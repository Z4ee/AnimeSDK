#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateCommonIdleTimer.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class WeakReference_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEIDLETIMER_METHOD_5_8E39ECAE8E676139_OFFSET UNITYSDK_OFFSET(0xA4DA000)
#define RPG_CLIENT_STATEIDLETIMER_METHOD_5_B704FED5906E0FCF_OFFSET UNITYSDK_OFFSET(0xA4D9FA0)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA4DA0F0)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA4DA510)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xA4DAAA0)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xA4DAA30)
#define RPG_CLIENT_STATEIDLETIMER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4DA5D0)
#define RPG_CLIENT_STATEIDLETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4DAB10)
#define RPG_CLIENT_STATEIDLETIMER___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA4DAB90)
#define RPG_CLIENT_STATEIDLETIMER___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA4DABC0)
#define RPG_CLIENT_STATEIDLETIMER___IFIXBASEPROXY_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xA4DAD70)
#define RPG_CLIENT_STATEIDLETIMER___IFIXBASEPROXY_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xA4DACE0)
#define RPG_CLIENT_STATEIDLETIMER___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4DACB0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateIdleTimer_TypeDefinitionIndex = 56224;

	class StateIdleTimer : public ::RPG::Client::StateCommonIdleTimer
	{
	public:
		// static const ::System::Int32 CommonIdleValue = 0x3; // 0x0
		::System::Boolean ResetTimeOnStoryMode; // 0x40
		::RPG::Client::EntityGameObjectConnection* Connection; // 0x48
		::System::WeakReference_1<::RPG::GameCore::GameEntity*>* EntityRef; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_B704FED5906E0FCF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_METHOD_5_B704FED5906E0FCF_OFFSET))(this, a1);
		}

		::System::Void Method_5_8E39ECAE8E676139(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_METHOD_5_8E39ECAE8E676139_OFFSET))(this, a1, a2);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER_ONSTATEIK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateMove(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER___IFIXBASEPROXY_ONSTATEMOVE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateIK(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEIDLETIMER___IFIXBASEPROXY_ONSTATEIK_OFFSET))(this, P0, P1, P2);
		}
	};
}

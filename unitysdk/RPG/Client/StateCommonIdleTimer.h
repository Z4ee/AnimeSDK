#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATECOMMONIDLETIMER_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB1C9530)
#define RPG_CLIENT_STATECOMMONIDLETIMER_METHOD_4_5A0484A55720CCC6_OFFSET UNITYSDK_OFFSET(0xB1C9280)
#define RPG_CLIENT_STATECOMMONIDLETIMER_METHOD_4_69B7614CC670DBCD_OFFSET UNITYSDK_OFFSET(0xB1C9080)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xB1C9400)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xB1C9590)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xB1C97D0)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xB1C9760)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB1C9650)
#define RPG_CLIENT_STATECOMMONIDLETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0xB1C9840)
#define RPG_CLIENT_STATECOMMONIDLETIMER___IFIXBASEPROXY_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xB1C9930)
#define RPG_CLIENT_STATECOMMONIDLETIMER___IFIXBASEPROXY_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xB1C9940)
#define RPG_CLIENT_STATECOMMONIDLETIMER___IFIXBASEPROXY_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xB1C9970)
#define RPG_CLIENT_STATECOMMONIDLETIMER___IFIXBASEPROXY_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xB1C9960)
#define RPG_CLIENT_STATECOMMONIDLETIMER___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB1C9950)

namespace RPG::Client
{
	inline static constexpr unsigned int StateCommonIdleTimer_TypeDefinitionIndex = 63464;

	class StateCommonIdleTimer : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Single CurrentTime; // 0x18
		::UnityEngine::Vector2 TimerRandomRange; // 0x1C
		::System::Boolean UpdateEnable; // 0x24
		::System::Collections::Generic::List_1<::System::Int32>* IdleRandomList; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* RuntimeIdleRandomList; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* ParamHashSet; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_69B7614CC670DBCD(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_METHOD_4_69B7614CC670DBCD_OFFSET))(this, a1);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEIK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_METHOD_4_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean Method_4_5A0484A55720CCC6(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_METHOD_4_5A0484A55720CCC6_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnStateEnter(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER___IFIXBASEPROXY_ONSTATEENTER_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateExit(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER___IFIXBASEPROXY_ONSTATEEXIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateUpdate(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER___IFIXBASEPROXY_ONSTATEUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateMove(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER___IFIXBASEPROXY_ONSTATEMOVE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnStateIK(::UnityEngine::Animator* P0, ::UnityEngine::AnimatorStateInfo P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER___IFIXBASEPROXY_ONSTATEIK_OFFSET))(this, P0, P1, P2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATECOMMONIDLETIMER_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE0EAEE0)
#define RPG_CLIENT_STATECOMMONIDLETIMER_METHOD_4_46E2A9A897493A5F_OFFSET UNITYSDK_OFFSET(0xE0EAA70)
#define RPG_CLIENT_STATECOMMONIDLETIMER_METHOD_4_5A0484A55720CCC6_OFFSET UNITYSDK_OFFSET(0xE0EAC30)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE0EADB0)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE0EAF40)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xE0EB180)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xE0EB110)
#define RPG_CLIENT_STATECOMMONIDLETIMER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE0EB000)
#define RPG_CLIENT_STATECOMMONIDLETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EB1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateCommonIdleTimer_TypeDefinitionIndex = 68790;

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

		::System::Void Method_4_46E2A9A897493A5F(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATECOMMONIDLETIMER_METHOD_4_46E2A9A897493A5F_OFFSET))(this, a1);
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
	};
}

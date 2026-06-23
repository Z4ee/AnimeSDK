#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability { class NPCAbilityManager; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ABILITY_NPCABILITYMANAGER__WAITFORSTANDTURNFINISHASYNC_D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7485F0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__WAITFORSTANDTURNFINISHASYNC_D__55_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager__WaitForStandTurnFinishAsync_d__55_TypeDefinitionIndex = 51073;

	struct alignas(8) NPCAbilityManager__WaitForStandTurnFinishAsync_d__55
	{
		::NPCCrowd::Ability::NPCAbilityManager* __4__this; // 0x10
		::System::Action_1<::System::Boolean>* callbackWithResult; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x28
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__2; // 0x38
		::System::UInt32 entityId; // 0x3C
		::System::Int32 __1__state; // 0x40
		::System::Single angle; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER__WAITFORSTANDTURNFINISHASYNC_D__55_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER__WAITFORSTANDTURNFINISHASYNC_D__55_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

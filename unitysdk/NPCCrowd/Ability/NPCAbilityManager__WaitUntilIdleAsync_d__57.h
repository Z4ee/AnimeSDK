#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability { class NPCAbilityManager; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ABILITY_NPCABILITYMANAGER__WAITUNTILIDLEASYNC_D__57_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x4106A0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__WAITUNTILIDLEASYNC_D__57_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager__WaitUntilIdleAsync_d__57_TypeDefinitionIndex = 51076;

	struct alignas(8) NPCAbilityManager__WaitUntilIdleAsync_d__57
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x10
		::NPCCrowd::Ability::NPCAbilityManager* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::UInt32 entityId; // 0x34
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER__WAITUNTILIDLEASYNC_D__57_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER__WAITUNTILIDLEASYNC_D__57_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

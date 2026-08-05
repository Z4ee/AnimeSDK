#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ABILITY_NPCABILITYMANAGER__STANDTURNASYNC_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x667AB0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__STANDTURNASYNC_D__59_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager__StandTurnAsync_d__59_TypeDefinitionIndex = 78959;

	struct alignas(8) NPCAbilityManager__StandTurnAsync_d__59
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData; // 0x18
		::System::Single angle; // 0x20
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x24
		::System::Int32 idx; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER__STANDTURNASYNC_D__59_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER__STANDTURNASYNC_D__59_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

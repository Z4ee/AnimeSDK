#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__SETACCESSORYHIDDEN_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x50C590)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__SETACCESSORYHIDDEN_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager__SetAccessoryHidden_d__12_TypeDefinitionIndex = 55241;

	struct alignas(8) NPCAccessoryManager__SetAccessoryHidden_d__12
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::NPCCrowd::Accessories::NPCAccessory* acc; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Boolean bIsHidden; // 0x34
		::System::Boolean fade; // 0x35

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__SETACCESSORYHIDDEN_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__SETACCESSORYHIDDEN_D__12_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

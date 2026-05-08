#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIAbyssEntrancePageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x777AA0)
#define MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x777AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntrancePageController__TryShowTipsWithUniTask_d__24_TypeDefinitionIndex = 64966;

	struct alignas(8) UIAbyssEntrancePageController__TryShowTipsWithUniTask_d__24
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> __u__2; // 0x10
		::MoleMole::UIAbyssEntrancePageController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x38
		::System::Int32 __1__state; // 0x58
		::System::Boolean hasWidget; // 0x5C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__24_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

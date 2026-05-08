#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIAbyssS2EntrancePageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x755ED0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5C4D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController__TryShowTipsWithUniTask_d__14_TypeDefinitionIndex = 75389;

	struct alignas(8) UIAbyssS2EntrancePageController__TryShowTipsWithUniTask_d__14
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> __u__2; // 0x10
		::MoleMole::UIAbyssS2EntrancePageController* __4__this; // 0x20
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x48
		::System::Int32 _reminderID_5__2; // 0x58
		::System::Int32 __1__state; // 0x5C
		::System::Boolean hasWidget; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__TRYSHOWTIPSWITHUNITASK_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

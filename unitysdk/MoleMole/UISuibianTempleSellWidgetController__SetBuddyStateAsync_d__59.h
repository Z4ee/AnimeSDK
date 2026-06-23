#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Enum_3_21ABFF850B7EB4AB.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISuibianTempleSellWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER__SETBUDDYSTATEASYNC_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7857F0)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER__SETBUDDYSTATEASYNC_D__59_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSellWidgetController__SetBuddyStateAsync_d__59_TypeDefinitionIndex = 69129;

	struct alignas(8) UISuibianTempleSellWidgetController__SetBuddyStateAsync_d__59
	{
		::MoleMole::UISuibianTempleSellWidgetController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::System::Threading::CancellationToken _cancelToken_5__2; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x28
		::Enum_3_21ABFF850B7EB4AB state; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER__SETBUDDYSTATEASYNC_D__59_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER__SETBUDDYSTATEASYNC_D__59_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

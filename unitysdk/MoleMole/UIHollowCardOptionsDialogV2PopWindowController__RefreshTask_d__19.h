#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIHollowCardOptionsDialogV2PopWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER__REFRESHTASK_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8824A0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER__REFRESHTASK_D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogV2PopWindowController__RefreshTask_d__19_TypeDefinitionIndex = 48365;

	struct alignas(8) UIHollowCardOptionsDialogV2PopWindowController__RefreshTask_d__19
	{
		::MoleMole::UIHollowCardOptionsDialogV2PopWindowController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER__REFRESHTASK_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER__REFRESHTASK_D__19_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

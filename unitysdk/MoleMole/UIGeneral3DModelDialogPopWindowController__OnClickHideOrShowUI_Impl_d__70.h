#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIGeneral3DModelDialogPopWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER__ONCLICKHIDEORSHOWUI_IMPL_D__70_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8AE250)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER__ONCLICKHIDEORSHOWUI_IMPL_D__70_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneral3DModelDialogPopWindowController__OnClickHideOrShowUI_Impl_d__70_TypeDefinitionIndex = 84105;

	struct alignas(8) UIGeneral3DModelDialogPopWindowController__OnClickHideOrShowUI_Impl_d__70
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x18
		::MoleMole::UIGeneral3DModelDialogPopWindowController* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER__ONCLICKHIDEORSHOWUI_IMPL_D__70_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER__ONCLICKHIDEORSHOWUI_IMPL_D__70_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

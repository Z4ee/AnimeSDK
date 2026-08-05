#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIBottleLoginDialogPopWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIBOTTLELOGINDIALOGPOPWINDOWCONTROLLER__SETTHROWBOTTLE_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x879930)
#define MOLEMOLE_UIBOTTLELOGINDIALOGPOPWINDOWCONTROLLER__SETTHROWBOTTLE_D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x7DEF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBottleLoginDialogPopWindowController__SetThrowBottle_d__21_TypeDefinitionIndex = 70004;

	struct alignas(8) UIBottleLoginDialogPopWindowController__SetThrowBottle_d__21
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x10
		::MoleMole::UIBottleLoginDialogPopWindowController* __4__this; // 0x20
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x48
		::System::Int32 itemID; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOTTLELOGINDIALOGPOPWINDOWCONTROLLER__SETTHROWBOTTLE_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOTTLELOGINDIALOGPOPWINDOWCONTROLLER__SETTHROWBOTTLE_D__21_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__STARTLEVEL_D__205_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x853610)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__STARTLEVEL_D__205_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__StartLevel_d__205_TypeDefinitionIndex = 91529;

	struct alignas(8) UIRidusGotBooPageController__StartLevel_d__205
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__2; // 0x10
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__STARTLEVEL_D__205_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__STARTLEVEL_D__205_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

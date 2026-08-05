#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__ROUNDEND_D__331_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x816FA0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__ROUNDEND_D__331_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__RoundEnd_d__331_TypeDefinitionIndex = 91519;

	struct alignas(8) UIRidusGotBooPageController__RoundEnd_d__331
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__ROUNDEND_D__331_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__ROUNDEND_D__331_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

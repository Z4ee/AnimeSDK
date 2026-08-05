#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SETUNLUCKYSTATE_D__226_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x871C90)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SETUNLUCKYSTATE_D__226_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__SetUnluckyState_d__226_TypeDefinitionIndex = 91550;

	struct alignas(8) UIRidusGotBooPageController__SetUnluckyState_d__226
	{
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Boolean showUnlucky; // 0x24

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SETUNLUCKYSTATE_D__226_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SETUNLUCKYSTATE_D__226_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

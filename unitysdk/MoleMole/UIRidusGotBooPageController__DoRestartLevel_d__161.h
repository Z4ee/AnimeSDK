#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__DORESTARTLEVEL_D__161_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x80A5D0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__DORESTARTLEVEL_D__161_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__DoRestartLevel_d__161_TypeDefinitionIndex = 40720;

	struct alignas(8) UIRidusGotBooPageController__DoRestartLevel_d__161
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__DORESTARTLEVEL_D__161_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__DORESTARTLEVEL_D__161_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

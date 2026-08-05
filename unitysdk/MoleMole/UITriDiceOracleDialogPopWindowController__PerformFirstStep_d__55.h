#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UITriDiceOracleDialogPopWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PERFORMFIRSTSTEP_D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x816FE0)
#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PERFORMFIRSTSTEP_D__55_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleDialogPopWindowController__PerformFirstStep_d__55_TypeDefinitionIndex = 89304;

	struct alignas(8) UITriDiceOracleDialogPopWindowController__PerformFirstStep_d__55
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::MoleMole::UITriDiceOracleDialogPopWindowController* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PERFORMFIRSTSTEP_D__55_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PERFORMFIRSTSTEP_D__55_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

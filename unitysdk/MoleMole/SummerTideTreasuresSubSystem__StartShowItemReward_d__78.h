#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class SummerTideTreasuresSubSystem; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTSHOWITEMREWARD_D__78_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x77B950)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTSHOWITEMREWARD_D__78_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem__StartShowItemReward_d__78_TypeDefinitionIndex = 80760;

	struct alignas(8) SummerTideTreasuresSubSystem__StartShowItemReward_d__78
	{
		::MoleMole::SummerTideTreasuresSubSystem* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTSHOWITEMREWARD_D__78_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__STARTSHOWITEMREWARD_D__78_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__WAITTELEPORTCOMPLETE_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B9350)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__WAITTELEPORTCOMPLETE_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneBangBooLogSubsystem__WaitTeleportComplete_d__23_TypeDefinitionIndex = 86325;

	struct alignas(8) BigSceneBangBooLogSubsystem__WaitTeleportComplete_d__23
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* rewards; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__WAITTELEPORTCOMPLETE_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__WAITTELEPORTCOMPLETE_D__23_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

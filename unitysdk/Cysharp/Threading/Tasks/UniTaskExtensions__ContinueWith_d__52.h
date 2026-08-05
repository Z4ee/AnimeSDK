#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Func_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__CONTINUEWITH_D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xACCD50)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__CONTINUEWITH_D__52_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__ContinueWith_d__52_TypeDefinitionIndex = 31922;

	struct alignas(8) UniTaskExtensions__ContinueWith_d__52
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::Cysharp::Threading::Tasks::UniTask task; // 0x30
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* continuationFunction; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__CONTINUEWITH_D__52_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__CONTINUEWITH_D__52_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}

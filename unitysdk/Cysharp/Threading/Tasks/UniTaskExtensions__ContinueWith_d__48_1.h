#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__ContinueWith_d__48_1_TypeDefinitionIndex = 31920;

	template <typename T>
	struct UniTaskExtensions__ContinueWith_d__48_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::System::Func_2<T, ::Cysharp::Threading::Tasks::UniTask>* continuationFunction; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
		::System::Func_2<T, ::Cysharp::Threading::Tasks::UniTask>* __7__wrap1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x0
	};
}

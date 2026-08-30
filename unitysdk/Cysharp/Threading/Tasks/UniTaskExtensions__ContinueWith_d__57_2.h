#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__ContinueWith_d__57_2_TypeDefinitionIndex = 42832;

	template <typename T, typename TR>
	struct UniTaskExtensions__ContinueWith_d__57_2
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TR> __t__builder; // 0x0
		::System::Func_2<T, ::Cysharp::Threading::Tasks::UniTask_1<TR>>* continuationFunction; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
		::System::Func_2<T, ::Cysharp::Threading::Tasks::UniTask_1<TR>>* __7__wrap1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<TR> __u__2; // 0x0
	};
}

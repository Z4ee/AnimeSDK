#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__ContinueWith_d__47_1_TypeDefinitionIndex = 31299;

	template <typename T>
	struct UniTaskExtensions__ContinueWith_d__47_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::System::Action_1<T>* continuationFunction; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
		::System::Action_1<T>* __7__wrap1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> __u__1; // 0x0
	};
}

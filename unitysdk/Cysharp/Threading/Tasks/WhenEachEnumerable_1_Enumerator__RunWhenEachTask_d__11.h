#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class WhenEachEnumerable_1_Enumerator; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int WhenEachEnumerable_1_Enumerator__RunWhenEachTask_d__11_TypeDefinitionIndex = 42795;

	template <typename T>
	struct WhenEachEnumerable_1_Enumerator__RunWhenEachTask_d__11
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
		::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>* self; // 0x0
		::System::Int32 length; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> __u__1; // 0x0
	};
}

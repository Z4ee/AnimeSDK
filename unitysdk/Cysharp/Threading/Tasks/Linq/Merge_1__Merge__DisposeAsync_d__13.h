#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T> class Merge_1__Merge; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Merge_1__Merge__DisposeAsync_d__13_TypeDefinitionIndex = 44329;

	template <typename T>
	struct Merge_1__Merge__DisposeAsync_d__13
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::Merge_1__Merge<T>* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x0
	};
}

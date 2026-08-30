#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class WhenEachEnumerable_1_Enumerator; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int WhenEachEnumerable_1_Enumerator__DisposeAsync_d__12_TypeDefinitionIndex = 42794;

	template <typename T>
	struct WhenEachEnumerable_1_Enumerator__DisposeAsync_d__12
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::WhenEachEnumerable_1_Enumerator<T>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x0
	};
}

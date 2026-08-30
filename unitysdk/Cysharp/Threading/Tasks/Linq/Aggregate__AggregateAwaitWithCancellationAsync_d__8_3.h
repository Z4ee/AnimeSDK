#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Aggregate__AggregateAwaitWithCancellationAsync_d__8_3_TypeDefinitionIndex = 44074;

	template <typename TSource, typename TAccumulate, typename TResult>
	struct Aggregate__AggregateAwaitWithCancellationAsync_d__8_3
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TResult> __t__builder; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		TAccumulate seed; // 0x0
		::System::Func_4<TAccumulate, TSource, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>* accumulator; // 0x0
		::System::Func_3<TAccumulate, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>* resultSelector; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* _e_5__2; // 0x0
		::System::Object* __7__wrap2; // 0x0
		::System::Int32 __7__wrap3; // 0x0
		TResult __7__wrap4; // 0x0
		TAccumulate _value_5__6; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<TAccumulate> __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__2; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<TResult> __u__3; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__4; // 0x0
	};
}

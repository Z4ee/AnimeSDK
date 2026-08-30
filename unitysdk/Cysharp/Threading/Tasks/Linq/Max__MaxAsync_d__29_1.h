#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Max__MaxAsync_d__29_1_TypeDefinitionIndex = 44293;

	template <typename TSource>
	struct Max__MaxAsync_d__29_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Nullable_1<::System::Int64>> __t__builder; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Func_2<TSource, ::System::Nullable_1<::System::Int64>>* selector; // 0x0
		::System::Nullable_1<::System::Int64> _value_5__2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* _e_5__3; // 0x0
		::System::Object* __7__wrap3; // 0x0
		::System::Int32 __7__wrap4; // 0x0
		::System::Nullable_1<::System::Int64> __7__wrap5; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x0
	};
}

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
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class ArrayPool_1; }
namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class ToLookup_Lookup_2; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class ILookup_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToLookup__ToLookupAwaitWithCancellationAsync_d__5_3_TypeDefinitionIndex = 44559;

	template <typename TSource, typename TKey, typename TElement>
	struct ToLookup__ToLookupAwaitWithCancellationAsync_d__5_3
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Linq::ILookup_2<TKey, TElement>*> __t__builder; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Func_3<TSource, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TKey>>* keySelector; // 0x0
		::System::Func_3<TSource, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TElement>>* elementSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::Cysharp::Threading::Tasks::Internal::ArrayPool_1<TSource>* _pool_5__2; // 0x0
		::Il2CppArray<TSource>* _array_5__3; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* _e_5__4; // 0x0
		::System::Object* __7__wrap4; // 0x0
		::System::Int32 __7__wrap5; // 0x0
		::System::Linq::ILookup_2<TKey, TElement>* __7__wrap6; // 0x0
		::System::Int32 _i_5__8; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey, TElement>*> __u__2; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__3; // 0x0
	};
}

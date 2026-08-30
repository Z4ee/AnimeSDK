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
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToDictionary__ToDictionaryAwaitAsync_d__3_3_TypeDefinitionIndex = 44540;

	template <typename TSource, typename TKey, typename TElement>
	struct ToDictionary__ToDictionaryAwaitAsync_d__3_3
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<TKey, TElement>*> __t__builder; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Func_2<TSource, ::Cysharp::Threading::Tasks::UniTask_1<TKey>>* keySelector; // 0x0
		::System::Func_2<TSource, ::Cysharp::Threading::Tasks::UniTask_1<TElement>>* elementSelector; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, TElement>* _dict_5__2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* _e_5__3; // 0x0
		::System::Object* __7__wrap3; // 0x0
		::System::Int32 __7__wrap4; // 0x0
		TSource _v_5__6; // 0x0
		TKey _key_5__7; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<TKey> __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<TElement> __u__2; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__3; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__4; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupByAwaitWithCancellation_4_TypeDefinitionIndex = 44248;

	template <typename TSource, typename TKey, typename TElement, typename TResult>
	class GroupByAwaitWithCancellation_4 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Func_3<TSource, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TKey>>* keySelector; // 0x0
		::System::Func_3<TSource, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TElement>>* elementSelector; // 0x0
		::System::Func_4<TKey, ::System::Collections::Generic::IEnumerable_1<TElement>*, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>* resultSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
	};
}

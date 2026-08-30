#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/OrderedAsyncEnumerable_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class AsyncEnumerableSorter_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int OrderedAsyncEnumerableAwaitWithCancellation_2_TypeDefinitionIndex = 44392;

	template <typename TElement, typename TKey>
	class OrderedAsyncEnumerableAwaitWithCancellation_2 : public ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>
	{
	public:
		::System::Func_3<TElement, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TKey>>* keySelector; // 0x0
		::System::Collections::Generic::IComparer_1<TKey>* comparer; // 0x0
		::System::Boolean descending; // 0x0
		::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>* parent; // 0x0
	};
}

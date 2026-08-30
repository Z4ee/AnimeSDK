#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/OrderedAsyncEnumerable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class AsyncEnumerableSorter_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int OrderedAsyncEnumerable_2_TypeDefinitionIndex = 44390;

	template <typename TElement, typename TKey>
	class OrderedAsyncEnumerable_2 : public ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>
	{
	public:
		::System::Func_2<TElement, TKey>* keySelector; // 0x0
		::System::Collections::Generic::IComparer_1<TKey>* comparer; // 0x0
		::System::Boolean descending; // 0x0
		::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>* parent; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupBy_4_TypeDefinitionIndex = 44236;

	template <typename TSource, typename TKey, typename TElement, typename TResult>
	class GroupBy_4 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Func_2<TSource, TKey>* keySelector; // 0x0
		::System::Func_2<TSource, TElement>* elementSelector; // 0x0
		::System::Func_3<TKey, ::System::Collections::Generic::IEnumerable_1<TElement>*, TResult>* resultSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
	};
}

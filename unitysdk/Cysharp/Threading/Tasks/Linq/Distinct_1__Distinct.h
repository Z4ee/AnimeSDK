#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/AsyncEnumeratorBase_2.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Distinct_1__Distinct_TypeDefinitionIndex = 44198;

	template <typename TSource>
	class Distinct_1__Distinct : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<TSource, TSource>
	{
	public:
		::System::Collections::Generic::HashSet_1<TSource>* set; // 0x0
	};
}

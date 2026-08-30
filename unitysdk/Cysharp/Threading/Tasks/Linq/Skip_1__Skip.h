#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/AsyncEnumeratorBase_2.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Skip_1__Skip_TypeDefinitionIndex = 44441;

	template <typename TSource>
	class Skip_1__Skip : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<TSource, TSource>
	{
	public:
		::System::Int32 count; // 0x0
		::System::Int32 index; // 0x0
	};
}

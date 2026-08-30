#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/AsyncEnumeratorBase_2.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeWhile_1__TakeWhile_TypeDefinitionIndex = 44521;

	template <typename TSource>
	class TakeWhile_1__TakeWhile : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<TSource, TSource>
	{
	public:
		::System::Func_2<TSource, ::System::Boolean>* predicate; // 0x0
	};
}

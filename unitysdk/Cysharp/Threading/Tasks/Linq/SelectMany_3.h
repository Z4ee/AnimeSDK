#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SelectMany_3_TypeDefinitionIndex = 44424;

	template <typename TSource, typename TCollection, typename TResult>
	class SelectMany_3 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Func_2<TSource, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>* selector1; // 0x0
		::System::Func_3<TSource, ::System::Int32, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>* selector2; // 0x0
		::System::Func_3<TSource, TCollection, TResult>* resultSelector; // 0x0
	};
}

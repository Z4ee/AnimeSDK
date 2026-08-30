#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/AsyncEnumeratorBase_2.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeWhileInt_1__TakeWhileInt_TypeDefinitionIndex = 44523;

	template <typename TSource>
	class TakeWhileInt_1__TakeWhileInt : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<TSource, TSource>
	{
	public:
		::System::Func_3<TSource, ::System::Int32, ::System::Boolean>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/AsyncEnumeratorAwaitSelectorBase_3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeWhileAwait_1__TakeWhileAwait_TypeDefinitionIndex = 44525;

	template <typename TSource>
	class TakeWhileAwait_1__TakeWhileAwait : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource, TSource, ::System::Boolean>
	{
	public:
		::System::Func_2<TSource, ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>>* predicate; // 0x0
	};
}

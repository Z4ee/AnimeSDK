#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/AsyncEnumeratorAwaitSelectorBase_3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeWhileIntAwait_1__TakeWhileIntAwait_TypeDefinitionIndex = 44527;

	template <typename TSource>
	class TakeWhileIntAwait_1__TakeWhileIntAwait : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource, TSource, ::System::Boolean>
	{
	public:
		::System::Func_3<TSource, ::System::Int32, ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}

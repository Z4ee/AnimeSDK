#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
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
	inline static constexpr unsigned int GroupJoinAwait_4_TypeDefinitionIndex = 44254;

	template <typename TOuter, typename TInner, typename TKey, typename TResult>
	class GroupJoinAwait_4 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>* outer; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>* inner; // 0x0
		::System::Func_2<TOuter, ::Cysharp::Threading::Tasks::UniTask_1<TKey>>* outerKeySelector; // 0x0
		::System::Func_2<TInner, ::Cysharp::Threading::Tasks::UniTask_1<TKey>>* innerKeySelector; // 0x0
		::System::Func_3<TOuter, ::System::Collections::Generic::IEnumerable_1<TInner>*, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>* resultSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
	};
}

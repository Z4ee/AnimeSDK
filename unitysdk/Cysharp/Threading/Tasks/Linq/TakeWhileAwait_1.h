#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeWhileAwait_1_TypeDefinitionIndex = 44524;

	template <typename TSource>
	class TakeWhileAwait_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Func_2<TSource, ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>>* predicate; // 0x0
	};
}

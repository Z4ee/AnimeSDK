#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SelectIntAwaitWithCancellation_2_TypeDefinitionIndex = 44422;

	template <typename TSource, typename TResult>
	class SelectIntAwaitWithCancellation_2 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* source; // 0x0
		::System::Func_4<TSource, ::System::Int32, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>* selector; // 0x0
	};
}

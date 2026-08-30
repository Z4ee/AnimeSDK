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
	inline static constexpr unsigned int ZipAwaitWithCancellation_3_TypeDefinitionIndex = 44606;

	template <typename TFirst, typename TSecond, typename TResult>
	class ZipAwaitWithCancellation_3 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>* first; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>* second; // 0x0
		::System::Func_4<TFirst, TSecond, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>* resultSelector; // 0x0
	};
}

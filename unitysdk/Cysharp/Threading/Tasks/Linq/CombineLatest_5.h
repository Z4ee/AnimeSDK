#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int CombineLatest_5_TypeDefinitionIndex = 44142;

	template <typename T1, typename T2, typename T3, typename T4, typename TResult>
	class CombineLatest_5 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source1; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* source2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>* source3; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>* source4; // 0x0
		::System::Func_5<T1, T2, T3, T4, TResult>* resultSelector; // 0x0
	};
}

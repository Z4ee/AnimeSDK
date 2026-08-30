#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Func_7; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int CombineLatest_7_TypeDefinitionIndex = 44148;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename TResult>
	class CombineLatest_7 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source1; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* source2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>* source3; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>* source4; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>* source5; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>* source6; // 0x0
		::System::Func_7<T1, T2, T3, T4, T5, T6, TResult>* resultSelector; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskOrderedAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class AsyncEnumerableSorter_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int OrderedAsyncEnumerable_1_TypeDefinitionIndex = 44387;

	template <typename TElement>
	class OrderedAsyncEnumerable_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>* source; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCancelableAsyncEnumerable_1_TypeDefinitionIndex = 42582;

	template <typename T>
	struct UniTaskCancelableAsyncEnumerable_1
	{
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* enumerable; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}

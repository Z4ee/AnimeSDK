#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerableUniTask_1_TypeDefinitionIndex = 44568;

	template <typename T>
	class ToUniTaskAsyncEnumerableUniTask_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTask_1<T> source; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask_TypeDefinitionIndex = 44569;

	template <typename T>
	class ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTask_1<T> source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		T current; // 0x0
		::System::Boolean called; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask_TypeDefinitionIndex = 44566;

	template <typename T>
	class ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task_1<T>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		T current; // 0x0
		::System::Boolean called; // 0x0
	};
}

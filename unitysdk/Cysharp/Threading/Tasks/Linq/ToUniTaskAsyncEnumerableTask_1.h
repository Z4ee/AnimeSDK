#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerableTask_1_TypeDefinitionIndex = 44565;

	template <typename T>
	class ToUniTaskAsyncEnumerableTask_1 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::Task_1<T>* source; // 0x0
	};
}

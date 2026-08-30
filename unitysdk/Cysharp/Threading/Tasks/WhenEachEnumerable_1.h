#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/WhenEachResult_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int WhenEachEnumerable_1_TypeDefinitionIndex = 42792;

	template <typename T>
	class WhenEachEnumerable_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>* source; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DeferPromise_1_TypeDefinitionIndex = 42663;

	template <typename T>
	class UniTask_DeferPromise_1 : public ::System::Object
	{
	public:
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>* factory; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> awaiter; // 0x0
	};
}

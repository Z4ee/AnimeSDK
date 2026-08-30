#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DeferPromiseWithState_1_TypeDefinitionIndex = 42664;

	template <typename TState>
	class UniTask_DeferPromiseWithState_1 : public ::System::Object
	{
	public:
		::System::Func_2<TState, ::Cysharp::Threading::Tasks::UniTask>* factory; // 0x0
		TState argument; // 0x0
		::Cysharp::Threading::Tasks::UniTask task; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter awaiter; // 0x0
	};
}

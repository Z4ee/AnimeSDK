#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTask_WhenAllPromise_1; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAllPromise_1_TypeDefinitionIndex = 31877;

	template <typename T>
	class UniTask_WhenAllPromise_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* result; // 0x0
		::System::Int32 completeCount; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Il2CppArray<T>*> core; // 0x0
	};
}

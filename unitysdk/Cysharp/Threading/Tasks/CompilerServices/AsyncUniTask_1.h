#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class IStateMachineRunnerPromise; }
namespace Cysharp::Threading::Tasks::CompilerServices { template <typename T> class AsyncUniTask_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTask_1_TypeDefinitionIndex = 31497;

	template <typename TStateMachine>
	class AsyncUniTask_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>*)Il2CppClass::FromTypeDefinitionIndex(AsyncUniTask_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Action* returnDelegate; // 0x0
		::System::Action* _MoveNext_k__BackingField; // 0x0
		TStateMachine stateMachine; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>* nextNode; // 0x0
	};
}

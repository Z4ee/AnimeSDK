#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::CompilerServices { template <typename T1, typename T2> class AsyncUniTask_2; }
namespace Cysharp::Threading::Tasks::CompilerServices { template <typename T> class IStateMachineRunnerPromise_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTask_2_TypeDefinitionIndex = 43129;

	template <typename TStateMachine, typename T>
	class AsyncUniTask_2 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine, T>*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine, T>*>*)Il2CppClass::FromTypeDefinitionIndex(AsyncUniTask_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Action* returnDelegate; // 0x0
		::System::Action* _MoveNext_k__BackingField; // 0x0
		TStateMachine stateMachine; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine, T>* nextNode; // 0x0
	};
}

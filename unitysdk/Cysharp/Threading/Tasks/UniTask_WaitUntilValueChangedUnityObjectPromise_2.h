#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { template <typename T1, typename T2> class UniTask_WaitUntilValueChangedUnityObjectPromise_2; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskSource_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace UnityEngine { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilValueChangedUnityObjectPromise_2_TypeDefinitionIndex = 42677;

	template <typename T, typename U>
	class UniTask_WaitUntilValueChangedUnityObjectPromise_2 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T, U>*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T, U>*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitUntilValueChangedUnityObjectPromise_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T, U>* nextNode; // 0x0
		T target; // 0x0
		::UnityEngine::Object* targetAsUnityObject; // 0x0
		U currentValue; // 0x0
		::System::Func_2<T, U>* monitorFunction; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<U>* equalityComparer; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::System::Boolean cancelImmediately; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U> core; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { template <typename T> class AsyncReactiveProperty_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class AsyncReactiveProperty_1_WaitAsyncSource; }
namespace Cysharp::Threading::Tasks { template <typename T> class ITriggerHandler_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskSource_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncReactiveProperty_1_WaitAsyncSource_TypeDefinitionIndex = 42536;

	template <typename T>
	class AsyncReactiveProperty_1_WaitAsyncSource : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AsyncReactiveProperty_1_WaitAsyncSource_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*>*)Il2CppClass::FromTypeDefinitionIndex(AsyncReactiveProperty_1_WaitAsyncSource_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>* nextNode; // 0x0
		::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>* parent; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField; // 0x0
	};
}

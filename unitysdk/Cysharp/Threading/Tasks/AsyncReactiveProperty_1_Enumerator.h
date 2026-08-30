#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { template <typename T> class AsyncReactiveProperty_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class ITriggerHandler_1; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncReactiveProperty_1_Enumerator_TypeDefinitionIndex = 42539;

	template <typename T>
	class AsyncReactiveProperty_1_Enumerator : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AsyncReactiveProperty_1_Enumerator_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>* parent; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		T value; // 0x0
		::System::Boolean isDisposed; // 0x0
		::System::Boolean firstCall; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField; // 0x0
	};
}

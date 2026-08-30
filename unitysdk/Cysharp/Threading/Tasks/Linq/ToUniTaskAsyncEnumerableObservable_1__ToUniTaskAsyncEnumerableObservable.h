#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class IObservable_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable_TypeDefinitionIndex = 44572;

	template <typename T>
	class ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_OnCanceledDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::IObservable_1<T>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Boolean useCachedCurrent; // 0x0
		T current; // 0x0
		::System::Boolean subscribeCompleted; // 0x0
		::System::Collections::Generic::Queue_1<T>* queuedResult; // 0x0
		::System::Exception* error; // 0x0
		::System::IDisposable* subscription; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
	};
}

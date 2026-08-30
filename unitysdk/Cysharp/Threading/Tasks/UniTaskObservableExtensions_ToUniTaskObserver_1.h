#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace Cysharp::Threading::Tasks::Internal { class SingleAssignmentDisposable; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskObservableExtensions_ToUniTaskObserver_1_TypeDefinitionIndex = 42854;

	template <typename T>
	class UniTaskObservableExtensions_ToUniTaskObserver_1 : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_callback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskObservableExtensions_ToUniTaskObserver_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* promise; // 0x0
		::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable* disposable; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration registration; // 0x0
		::System::Boolean hasValue; // 0x0
		T latestValue; // 0x0
	};
}

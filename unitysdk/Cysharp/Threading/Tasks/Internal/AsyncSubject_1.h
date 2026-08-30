#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { template <typename T> class IObserver_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int AsyncSubject_1_TypeDefinitionIndex = 43110;

	template <typename T>
	class AsyncSubject_1 : public ::System::Object
	{
	public:
		::System::Object* observerLock; // 0x0
		T lastValue; // 0x0
		::System::Boolean hasValue; // 0x0
		::System::Boolean isStopped; // 0x0
		::System::Boolean isDisposed; // 0x0
		::System::Exception* lastError; // 0x0
		::System::IObserver_1<T>* outObserver; // 0x0
	};
}

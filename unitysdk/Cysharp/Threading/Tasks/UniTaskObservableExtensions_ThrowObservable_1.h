#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { template <typename T> class IObserver_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskObservableExtensions_ThrowObservable_1_TypeDefinitionIndex = 42857;

	template <typename T>
	class UniTaskObservableExtensions_ThrowObservable_1 : public ::System::Object
	{
	public:
		::System::Exception* value; // 0x0
	};
}

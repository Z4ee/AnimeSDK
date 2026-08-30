#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System { template <typename T> class IObserver_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskObservableExtensions_ReturnObservable_1_TypeDefinitionIndex = 42856;

	template <typename T>
	class UniTaskObservableExtensions_ReturnObservable_1 : public ::System::Object
	{
	public:
		T value; // 0x0
	};
}

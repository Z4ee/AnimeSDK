#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class IDisposable; }
namespace System { template <typename T> class IObserver_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToObservable_1_TypeDefinitionIndex = 44560;

	template <typename T>
	class ToObservable_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityEventHandlerAsyncEnumerable_1_TypeDefinitionIndex = 42900;

	template <typename T>
	class UnityEventHandlerAsyncEnumerable_1 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityEvent_1<T>* unityEvent; // 0x0
		::System::Threading::CancellationToken cancellationToken1; // 0x0
	};
}

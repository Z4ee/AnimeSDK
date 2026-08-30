#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TriggerEvent_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cysharp::Threading::Tasks { template <typename T> class ITriggerHandler_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerBase_1_TypeDefinitionIndex = 42914;

	template <typename T>
	class AsyncTriggerBase_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cysharp::Threading::Tasks::TriggerEvent_1<T> triggerEvent; // 0x0
		::System::Boolean calledAwake; // 0x0
		::System::Boolean calledDestroy; // 0x0
	};
}

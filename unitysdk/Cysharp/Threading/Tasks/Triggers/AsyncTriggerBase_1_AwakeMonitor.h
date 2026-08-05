#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Triggers { template <typename T> class AsyncTriggerBase_1; }

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerBase_1_AwakeMonitor_TypeDefinitionIndex = 31939;

	template <typename T>
	class AsyncTriggerBase_1_AwakeMonitor : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>* trigger; // 0x0
	};
}

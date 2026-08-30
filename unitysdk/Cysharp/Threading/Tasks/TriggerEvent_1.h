#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class ITriggerHandler_1; }
namespace System { class Exception; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TriggerEvent_1_TypeDefinitionIndex = 42640;

	template <typename T>
	struct TriggerEvent_1
	{
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* head; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* iteratingHead; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* iteratingNode; // 0x0
	};
}

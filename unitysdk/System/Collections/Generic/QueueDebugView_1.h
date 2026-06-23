#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int QueueDebugView_1_TypeDefinitionIndex = 3957;

	template <typename T>
	class QueueDebugView_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<T>* _queue; // 0x0
	};
}

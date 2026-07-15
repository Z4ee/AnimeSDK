#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled { template <typename T> class PooledQueue_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int QueueDebugView_1_TypeDefinitionIndex = 5111;

	template <typename T>
	class QueueDebugView_1 : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledQueue_1<T>* _queue; // 0x0
	};
}

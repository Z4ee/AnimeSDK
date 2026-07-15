#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled { template <typename T> class PooledStack_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int StackDebugView_1_TypeDefinitionIndex = 5113;

	template <typename T>
	class StackDebugView_1 : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledStack_1<T>* _stack; // 0x0
	};
}

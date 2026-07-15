#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T> class ConcurrentStack_1_Node; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentStack_1_Node_TypeDefinitionIndex = 1518;

	template <typename T>
	class ConcurrentStack_1_Node : public ::System::Object
	{
	public:
		T _value; // 0x0
		::System::Collections::Concurrent::ConcurrentStack_1_Node<T>* _next; // 0x0
	};
}

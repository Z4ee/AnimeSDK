#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Collections::Pooled { template <typename T> class PooledQueue_1; }
namespace System { class Object; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledQueue_1_Enumerator_TypeDefinitionIndex = 5103;

	template <typename T>
	struct PooledQueue_1_Enumerator
	{
		::Collections::Pooled::PooledQueue_1<T>* _q; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		T _currentElement; // 0x0
	};
}

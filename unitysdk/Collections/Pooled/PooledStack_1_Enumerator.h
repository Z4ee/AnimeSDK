#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Collections::Pooled { template <typename T> class PooledStack_1; }
namespace System { class Object; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledStack_1_Enumerator_TypeDefinitionIndex = 5110;

	template <typename T>
	struct PooledStack_1_Enumerator
	{
		::Collections::Pooled::PooledStack_1<T>* _stack; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		T _currentElement; // 0x0
	};
}

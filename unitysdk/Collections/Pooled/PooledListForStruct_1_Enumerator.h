#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Collections::Pooled { template <typename T> class PooledListForStruct_1; }
namespace System { class Object; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledListForStruct_1_Enumerator_TypeDefinitionIndex = 5097;

	template <typename T>
	struct PooledListForStruct_1_Enumerator
	{
		::Collections::Pooled::PooledListForStruct_1<T>* _list; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		T _current; // 0x0
	};
}

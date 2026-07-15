#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Collections::Pooled { template <typename T> class PooledListForClass_1; }
namespace System { class Object; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledListForClass_1_Enumerator_TypeDefinitionIndex = 5094;

	template <typename T>
	struct PooledListForClass_1_Enumerator
	{
		::Collections::Pooled::PooledListForClass_1<T>* _list; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		T _current; // 0x0
	};
}

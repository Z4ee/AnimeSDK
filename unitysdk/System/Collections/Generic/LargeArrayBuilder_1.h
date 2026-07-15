#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/ArrayBuilder_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int LargeArrayBuilder_1_TypeDefinitionIndex = 3683;

	template <typename T>
	struct LargeArrayBuilder_1
	{
		::System::Int32 _maxCapacity; // 0x0
		::Il2CppArray<T>* _first; // 0x0
		::System::Collections::Generic::ArrayBuilder_1<::Il2CppArray<T>*> _buffers; // 0x0
		::Il2CppArray<T>* _current; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _count; // 0x0
	};
}

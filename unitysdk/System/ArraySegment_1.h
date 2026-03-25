#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System
{
	inline static constexpr unsigned int ArraySegment_1_TypeDefinitionIndex = 197;

	template <typename T>
	struct ArraySegment_1
	{
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _offset; // 0x0
		::System::Int32 _count; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Container { template <typename T> class TSparseList_1; }
namespace System { class Object; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int TSparseList_1_HandleEnumerator_TypeDefinitionIndex = 46899;

	template <typename T>
	struct TSparseList_1_HandleEnumerator
	{
		::Foundation::ViewObject::Container::TSparseList_1<T>* _list; // 0x0
		::System::Int32 __index_k__BackingField; // 0x0
	};
}

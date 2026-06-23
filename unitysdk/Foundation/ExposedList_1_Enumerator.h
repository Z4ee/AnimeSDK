#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class ExposedList_1; }
namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int ExposedList_1_Enumerator_TypeDefinitionIndex = 7735;

	template <typename T>
	struct ExposedList_1_Enumerator
	{
		::Foundation::ExposedList_1<T>* l; // 0x0
		::System::Int32 next; // 0x0
		::System::Int32 ver; // 0x0
		T current; // 0x0
	};
}

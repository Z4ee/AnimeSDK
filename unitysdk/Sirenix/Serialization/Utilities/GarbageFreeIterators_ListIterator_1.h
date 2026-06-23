#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int GarbageFreeIterators_ListIterator_1_TypeDefinitionIndex = 7612;

	template <typename T>
	struct GarbageFreeIterators_ListIterator_1
	{
		::System::Boolean isNull; // 0x0
		::System::Collections::Generic::List_1<T>* list; // 0x0
		::System::Collections::Generic::List_1_Enumerator<T> enumerator; // 0x0
	};
}

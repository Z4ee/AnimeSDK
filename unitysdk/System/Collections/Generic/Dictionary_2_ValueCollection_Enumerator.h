#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Dictionary_2_ValueCollection_Enumerator_TypeDefinitionIndex = 1534;

	template <typename TKey, typename TValue>
	struct Dictionary_2_ValueCollection_Enumerator
	{
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary; // 0x0
		::System::Int32 index; // 0x0
		::System::Int32 version; // 0x0
		TValue currentValue; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/IEnumerableX_Set_1_Slot.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Foundation
{
	inline static constexpr unsigned int IEnumerableX_Set_1_TypeDefinitionIndex = 8070;

	template <typename TElement>
	class IEnumerableX_Set_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* buckets; // 0x0
		::Il2CppArray<::Foundation::IEnumerableX_Set_1_Slot<TElement>>* slots; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 freeList; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TElement>* comparer; // 0x0
	};
}

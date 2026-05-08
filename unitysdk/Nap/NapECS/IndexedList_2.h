#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int IndexedList_2_TypeDefinitionIndex = 35737;

	template <typename K, typename T>
	class IndexedList_2 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* m_List; // 0x0
		::System::Int32 m_ArrayCount; // 0x0
		::System::Collections::Generic::Dictionary_2<K, ::System::Int32>* m_Dictionary; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

namespace RPG
{
	inline static constexpr unsigned int EmptySortedList_2_TypeDefinitionIndex = 6741;

	template <typename TKey, typename TValue>
	class EmptySortedList_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::SortedList_2<TKey, TValue>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::SortedList_2<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(EmptySortedList_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

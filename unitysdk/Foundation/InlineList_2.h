#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/InlineListStorageType.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int InlineList_2_TypeDefinitionIndex = 8854;

	template <typename T, typename TFixedArray>
	struct InlineList_2
	{
		static ::System::UInt32* StaticGet_InlineCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InlineList_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		TFixedArray InlineStorage; // 0x0
		::Il2CppArray<T>* SecondaryStorage; // 0x0
		::System::Int32 _size; // 0x0
		::System::UInt32 _capacity; // 0x0
	};
}

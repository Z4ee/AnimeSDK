#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG
{
	inline static constexpr unsigned int EmptyList_1_TypeDefinitionIndex = 6740;

	template <typename T>
	class EmptyList_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<T>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::List_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EmptyList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<T>** StaticGet_Array()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(EmptyList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace MoleMole { template <typename T> class EmptyList_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace MoleMole
{
	inline static constexpr unsigned int EmptyList_1_TypeDefinitionIndex = 44529;

	template <typename T>
	class EmptyList_1 : public ::System::Collections::Generic::List_1<T>
	{
	public:
		static ::MoleMole::EmptyList_1<T>** StaticGet_Instance()
		{
			return (::MoleMole::EmptyList_1<T>**)Il2CppClass::FromTypeDefinitionIndex(EmptyList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<T>** StaticGet_Array()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(EmptyList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

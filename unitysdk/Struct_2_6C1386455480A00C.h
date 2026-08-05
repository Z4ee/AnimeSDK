#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

inline static constexpr unsigned int Struct_2_6C1386455480A00C_TypeDefinitionIndex = 74113;

template <typename T>
struct Struct_2_6C1386455480A00C
{
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6C1386455480A00C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Boolean Field_2_1; // 0x0
	::System::Boolean Field_2_0; // 0x0
	::System::Collections::Generic::IEqualityComparer_1<T>* Field_2_7; // 0x0
};

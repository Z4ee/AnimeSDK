#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_36BDD8A913F3199E_EQUALS_OFFSET UNITYSDK_OFFSET(0x87D60)

inline static constexpr unsigned int Struct_2_36BDD8A913F3199E_TypeDefinitionIndex = 57972;

struct alignas(8) Struct_2_36BDD8A913F3199E
{
	::System::String* BFDAADMGNFD; // 0x10
	::System::String* ICEPLFPKAHC; // 0x18
	::Il2CppArray<::System::String*>* FCIHHDHMFFN; // 0x20
	::Il2CppArray<::System::String*>* CBMHCNHBOGM; // 0x28

	::System::Boolean Equals(::Struct_2_36BDD8A913F3199E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_36BDD8A913F3199E))((::PBYTE)hIl2Cpp + STRUCT_2_36BDD8A913F3199E_EQUALS_OFFSET))(this, a1);
	}
};

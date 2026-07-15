#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_36BDD8A913F3199E_EQUALS_OFFSET UNITYSDK_OFFSET(0x39590A0)

inline static constexpr unsigned int Struct_2_36BDD8A913F3199E_TypeDefinitionIndex = 55248;

struct alignas(8) Struct_2_36BDD8A913F3199E
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::Il2CppArray<::System::String*>* Field_2_2; // 0x20
	::Il2CppArray<::System::String*>* Field_2_3; // 0x28

	::System::Boolean Equals(::Struct_2_36BDD8A913F3199E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_36BDD8A913F3199E))((::PBYTE)hIl2Cpp + STRUCT_2_36BDD8A913F3199E_EQUALS_OFFSET))(this, a1);
	}
};

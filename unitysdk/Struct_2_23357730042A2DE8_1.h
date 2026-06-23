#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_23357730042A2DE8_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8937B0)

inline static constexpr unsigned int Struct_2_23357730042A2DE8_1_TypeDefinitionIndex = 84810;

struct alignas(8) Struct_2_23357730042A2DE8_1
{
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_23357730042A2DE8_1_TypeDefinitionIndex)->GetStaticField(0x46E80);
	}
	::System::String* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_23357730042A2DE8_1__CCTOR_OFFSET))();
	}
};

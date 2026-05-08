#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;

#define STRUCT_2_D155EB8BA80D90F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6ED020)
#define STRUCT_2_D155EB8BA80D90F8__CTOR_OFFSET UNITYSDK_OFFSET(0x6ED010)

inline static constexpr unsigned int Struct_2_D155EB8BA80D90F8_TypeDefinitionIndex = 40142;

struct alignas(1) Struct_2_D155EB8BA80D90F8
{
	static ::Class_2_167BB37617B940E3** StaticGet_Field_2_0()
	{
		return (::Class_2_167BB37617B940E3**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D155EB8BA80D90F8_TypeDefinitionIndex)->GetStaticField(0x3FCC0);
	}
	static ::Class_2_EA995402651EF7A9** StaticGet_Field_2_1()
	{
		return (::Class_2_EA995402651EF7A9**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D155EB8BA80D90F8_TypeDefinitionIndex)->GetStaticField(0x3FCC8);
	}

	::System::Void _ctor(::Class_2_167BB37617B940E3* a1, ::Class_2_EA995402651EF7A9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + STRUCT_2_D155EB8BA80D90F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D155EB8BA80D90F8_DISPOSE_OFFSET))(this);
	}
};

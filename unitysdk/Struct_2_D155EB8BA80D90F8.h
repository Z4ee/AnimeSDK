#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;

#define STRUCT_2_D155EB8BA80D90F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8803D0)
#define STRUCT_2_D155EB8BA80D90F8__CTOR_OFFSET UNITYSDK_OFFSET(0x8803C0)

inline static constexpr unsigned int Struct_2_D155EB8BA80D90F8_TypeDefinitionIndex = 81175;

struct alignas(1) Struct_2_D155EB8BA80D90F8
{
	static ::Class_2_14986121AA61AD99** StaticGet_Field_2_1()
	{
		return (::Class_2_14986121AA61AD99**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D155EB8BA80D90F8_TypeDefinitionIndex)->GetStaticField(0x40DA0);
	}
	static ::Class_2_1C93660C39236995** StaticGet_Field_2_0()
	{
		return (::Class_2_1C93660C39236995**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D155EB8BA80D90F8_TypeDefinitionIndex)->GetStaticField(0x40DA8);
	}

	::System::Void _ctor(::Class_2_14986121AA61AD99* a1, ::Class_2_1C93660C39236995* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + STRUCT_2_D155EB8BA80D90F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D155EB8BA80D90F8_DISPOSE_OFFSET))(this);
	}
};

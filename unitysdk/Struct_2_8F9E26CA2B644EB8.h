#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_8F9E26CA2B644EB8_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x7493D0)
#define STRUCT_2_8F9E26CA2B644EB8_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x7493C0)
#define STRUCT_2_8F9E26CA2B644EB8__CTOR_OFFSET UNITYSDK_OFFSET(0x586780)

inline static constexpr unsigned int Struct_2_8F9E26CA2B644EB8_TypeDefinitionIndex = 59511;

struct alignas(4) Struct_2_8F9E26CA2B644EB8
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x14
	::System::Int32 Field_2_6; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};

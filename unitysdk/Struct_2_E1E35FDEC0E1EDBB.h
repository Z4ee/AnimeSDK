#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8714C0BD8ACAF4F7.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_E1E35FDEC0E1EDBB_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xAAF280)
#define STRUCT_2_E1E35FDEC0E1EDBB_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAAF310)
#define STRUCT_2_E1E35FDEC0E1EDBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAAF270)
#define STRUCT_2_E1E35FDEC0E1EDBB__CTOR_OFFSET UNITYSDK_OFFSET(0xAAF240)

inline static constexpr unsigned int Struct_2_E1E35FDEC0E1EDBB_TypeDefinitionIndex = 29229;

struct alignas(4) Struct_2_E1E35FDEC0E1EDBB
{
	::System::Int32 Field_2_3; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::System::UInt16 Field_2_1; // 0x18
	::System::UInt16 Field_2_0; // 0x1A
	::Struct_2_8714C0BD8ACAF4F7 Field_2_7; // 0x1C
	::Struct_2_8714C0BD8ACAF4F7 Field_2_6; // 0x20
	::Struct_2_8714C0BD8ACAF4F7 Field_2_5; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::UInt16 a3, ::Struct_2_8714C0BD8ACAF4F7 a4, ::Struct_2_8714C0BD8ACAF4F7 a5, ::Struct_2_8714C0BD8ACAF4F7 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt16, ::Struct_2_8714C0BD8ACAF4F7, ::Struct_2_8714C0BD8ACAF4F7, ::Struct_2_8714C0BD8ACAF4F7))((::PBYTE)hIl2Cpp + STRUCT_2_E1E35FDEC0E1EDBB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E1E35FDEC0E1EDBB_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E1E35FDEC0E1EDBB_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E1E35FDEC0E1EDBB_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};

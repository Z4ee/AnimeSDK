#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_8F9E26CA2B644EB8_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0xE1744E0)
#define STRUCT_2_8F9E26CA2B644EB8__CTOR_OFFSET UNITYSDK_OFFSET(0x3EABD0)

inline static constexpr unsigned int Struct_2_8F9E26CA2B644EB8_TypeDefinitionIndex = 65935;

struct alignas(4) Struct_2_8F9E26CA2B644EB8
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Struct_2_8F9E26CA2B644EB8 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_8F9E26CA2B644EB8(*)())((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8_METHOD_2_3D78D2E0F9F95F07_OFFSET))();
	}
};

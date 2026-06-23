#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_8F9E26CA2B644EB8_2_METHOD_2_7A11106D60C5C746_OFFSET UNITYSDK_OFFSET(0x9C6C00)
#define STRUCT_2_8F9E26CA2B644EB8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x4E6C30)

inline static constexpr unsigned int Struct_2_8F9E26CA2B644EB8_2_TypeDefinitionIndex = 87775;

struct alignas(4) Struct_2_8F9E26CA2B644EB8_2
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_7A11106D60C5C746()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8_2_METHOD_2_7A11106D60C5C746_OFFSET))(this);
	}
};

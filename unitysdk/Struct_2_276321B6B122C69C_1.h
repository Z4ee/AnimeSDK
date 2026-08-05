#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_276321B6B122C69C_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x819F10)
#define STRUCT_2_276321B6B122C69C_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x819F70)
#define STRUCT_2_276321B6B122C69C_1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x819FC0)
#define STRUCT_2_276321B6B122C69C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

inline static constexpr unsigned int Struct_2_276321B6B122C69C_1_TypeDefinitionIndex = 76560;

struct alignas(4) Struct_2_276321B6B122C69C_1
{
	::System::UInt32 Field_2_1; // 0x10
	::System::UInt32 Field_2_0; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_276321B6B122C69C_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_276321B6B122C69C_1))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4D99F89F354AE1B4.h"
#include "unitysdk/Enum_3_B62B49A5D5D13C32.h"
#include "unitysdk/System/ValueType.h"

class Class_1_25D6C7D8669CEB87;
namespace System { class String; }

#define STRUCT_2_A91E1E1C21BA270A_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x76E640)
#define STRUCT_2_A91E1E1C21BA270A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x76E630)
#define STRUCT_2_A91E1E1C21BA270A__CTOR_OFFSET UNITYSDK_OFFSET(0x76E610)

inline static constexpr unsigned int Struct_2_A91E1E1C21BA270A_TypeDefinitionIndex = 80802;

struct alignas(8) Struct_2_A91E1E1C21BA270A
{
	::System::Int32 Field_2_0; // 0x10
	::Enum_3_4D99F89F354AE1B4 Field_2_1; // 0x14
	::Class_1_25D6C7D8669CEB87* Field_2_2; // 0x18
	::Enum_3_B62B49A5D5D13C32 Field_2_3; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_4D99F89F354AE1B4 a2, ::Class_1_25D6C7D8669CEB87* a3, ::Enum_3_B62B49A5D5D13C32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_4D99F89F354AE1B4, ::Class_1_25D6C7D8669CEB87*, ::Enum_3_B62B49A5D5D13C32))((::PBYTE)hIl2Cpp + STRUCT_2_A91E1E1C21BA270A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A91E1E1C21BA270A_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A91E1E1C21BA270A_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};

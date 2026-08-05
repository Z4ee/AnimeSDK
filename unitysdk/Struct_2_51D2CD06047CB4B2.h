#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_1A345EAE5F749316_109;
class Class_3_E0EBD30081989999_3;

#define STRUCT_2_51D2CD06047CB4B2_METHOD_2_6AF4AA9BCE6D2D8C_OFFSET UNITYSDK_OFFSET(0x7F2500)

inline static constexpr unsigned int Struct_2_51D2CD06047CB4B2_TypeDefinitionIndex = 57883;

struct alignas(8) Struct_2_51D2CD06047CB4B2
{
	::System::Int32 Field_2_1; // 0x10
	::Class_3_1A345EAE5F749316_109* Field_2_0; // 0x18

	::Class_3_E0EBD30081989999_3* Method_2_6AF4AA9BCE6D2D8C(::System::UInt32 a1)
	{
		return ((::Class_3_E0EBD30081989999_3*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_51D2CD06047CB4B2_METHOD_2_6AF4AA9BCE6D2D8C_OFFSET))(this, a1);
	}
};

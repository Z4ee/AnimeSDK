#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8FBDD7D8E0EE0B49;
namespace System { class String; }

#define STRUCT_2_C3D247678384BCFD_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7744D0)
#define STRUCT_2_C3D247678384BCFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7744C0)

inline static constexpr unsigned int Struct_2_C3D247678384BCFD_TypeDefinitionIndex = 52287;

struct alignas(8) Struct_2_C3D247678384BCFD
{
	::System::String* Field_2_0; // 0x10
	::Class_1_8FBDD7D8E0EE0B49* Field_2_7; // 0x18
	::System::Int32 Field_2_6; // 0x20
	::System::Int32 Field_2_5; // 0x24
	::System::Int32 Field_2_4; // 0x28

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C3D247678384BCFD_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C3D247678384BCFD_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};

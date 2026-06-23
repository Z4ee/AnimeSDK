#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_315B161BC0C52EFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x795660)

inline static constexpr unsigned int Struct_2_315B161BC0C52EFD_TypeDefinitionIndex = 83961;

struct alignas(8) Struct_2_315B161BC0C52EFD
{
	::Unity::Collections::NativeArray_1<::System::Single> Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x20
	::Unity::Collections::NativeArray_1<::System::Single> Field_2_2; // 0x28
	::Unity::Collections::NativeArray_1<::System::Single> Field_2_3; // 0x38
	::System::Int32 Field_2_4; // 0x48
	::System::Int32 Field_2_5; // 0x4C
	::Unity::Collections::NativeArray_1<::System::Single> Field_2_6; // 0x50
	::Unity::Collections::NativeArray_1<::System::Single> Field_2_7; // 0x60
	::System::Int32 Field_2_8; // 0x70
	::System::Int32 Field_2_9; // 0x74
	::System::Single Field_2_10; // 0x78
	::System::Single Field_2_11; // 0x7C
	::System::Single Field_2_12; // 0x80
	::System::Single Field_2_13; // 0x84
	::System::Single Field_2_14; // 0x88
	::System::Single Field_2_15; // 0x8C
	::System::Single Field_2_16; // 0x90

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_315B161BC0C52EFD_DISPOSE_OFFSET))(this);
	}
};

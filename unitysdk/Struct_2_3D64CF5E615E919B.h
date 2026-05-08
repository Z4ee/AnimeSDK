#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F7E597BD6499EC37.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_3D64CF5E615E919B_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x9A9780)
#define STRUCT_2_3D64CF5E615E919B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A9770)

inline static constexpr unsigned int Struct_2_3D64CF5E615E919B_TypeDefinitionIndex = 83444;

struct alignas(4) Struct_2_3D64CF5E615E919B
{
	::System::Int32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::Enum_3_F7E597BD6499EC37 Field_2_3; // 0x1C
	::System::Boolean Field_2_4; // 0x20
	::Struct_2_E614D3B245F96744_1 Field_2_5; // 0x24
	::System::Int32 Field_2_6; // 0x2C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3D64CF5E615E919B_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3D64CF5E615E919B_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};

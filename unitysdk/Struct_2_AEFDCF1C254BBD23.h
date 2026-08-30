#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1CBA230307F9C289_27;
namespace System { class String; }

#define STRUCT_2_AEFDCF1C254BBD23_METHOD_2_7D3D436061F52D66_OFFSET UNITYSDK_OFFSET(0xB5E6DC0)
#define STRUCT_2_AEFDCF1C254BBD23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F0C0)

inline static constexpr unsigned int Struct_2_AEFDCF1C254BBD23_TypeDefinitionIndex = 64096;

struct alignas(4) Struct_2_AEFDCF1C254BBD23
{
	::Enum_3_01618AD0437C8486_1 DCMLEEPIBNA; // 0x10
	::System::UInt32 IOCPEGNKDMA; // 0x14

	static ::Struct_2_AEFDCF1C254BBD23 Method_2_7D3D436061F52D66(::Class_1_1CBA230307F9C289_27* a1)
	{
		return ((::Struct_2_AEFDCF1C254BBD23(*)(::Class_1_1CBA230307F9C289_27*))((::PBYTE)hIl2Cpp + STRUCT_2_AEFDCF1C254BBD23_METHOD_2_7D3D436061F52D66_OFFSET))(a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AEFDCF1C254BBD23_TOSTRING_OFFSET))(this);
	}
};

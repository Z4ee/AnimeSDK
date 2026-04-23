#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1CBA230307F9C289_18;
namespace System { class String; }

#define STRUCT_2_AEFDCF1C254BBD23_METHOD_2_7D3D436061F52D66_OFFSET UNITYSDK_OFFSET(0x12497900)
#define STRUCT_2_AEFDCF1C254BBD23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15AE630)
#define STRUCT_2_AEFDCF1C254BBD23___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15AE640)

inline static constexpr unsigned int Struct_2_AEFDCF1C254BBD23_TypeDefinitionIndex = 58900;

struct alignas(4) Struct_2_AEFDCF1C254BBD23
{
	::Enum_3_01618AD0437C8486_1 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	static ::Struct_2_AEFDCF1C254BBD23 Method_2_7D3D436061F52D66(::Class_1_1CBA230307F9C289_18* a1)
	{
		return ((::Struct_2_AEFDCF1C254BBD23(*)(::Class_1_1CBA230307F9C289_18*))((::PBYTE)hIl2Cpp + STRUCT_2_AEFDCF1C254BBD23_METHOD_2_7D3D436061F52D66_OFFSET))(a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AEFDCF1C254BBD23_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AEFDCF1C254BBD23___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B54007CE356E2DEC.h"
#include "unitysdk/System/ValueType.h"

class Class_3_D11B47081CD802C8;
namespace System { class String; }

#define STRUCT_2_80B4F6F934B64A41_METHOD_2_040EDE2DDEABF6CC_OFFSET UNITYSDK_OFFSET(0x73D7E0)
#define STRUCT_2_80B4F6F934B64A41_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x73D760)
#define STRUCT_2_80B4F6F934B64A41_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x73D7F0)
#define STRUCT_2_80B4F6F934B64A41_TOSTRING_OFFSET UNITYSDK_OFFSET(0x73D750)

inline static constexpr unsigned int Struct_2_80B4F6F934B64A41_TypeDefinitionIndex = 59778;

struct alignas(8) Struct_2_80B4F6F934B64A41
{
	::Class_3_D11B47081CD802C8* Field_2_0; // 0x10
	::Struct_2_B54007CE356E2DEC Field_2_1; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_80B4F6F934B64A41_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_80B4F6F934B64A41_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_2_040EDE2DDEABF6CC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_80B4F6F934B64A41_METHOD_2_040EDE2DDEABF6CC_OFFSET))(this);
	}

	::System::Boolean Method_2_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_80B4F6F934B64A41_METHOD_2_AA972BE565DAF9E3_OFFSET))(this);
	}
};

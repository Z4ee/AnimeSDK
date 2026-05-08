#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15C568652F4FEFB0.h"
#include "unitysdk/Enum_3_5441D86E7C00562A.h"
#include "unitysdk/Enum_3_70248E32F82D4889_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_B54007CE356E2DEC_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x6F3590)
#define STRUCT_2_B54007CE356E2DEC_METHOD_2_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x6F3610)
#define STRUCT_2_B54007CE356E2DEC_METHOD_2_BDBA00FB43D83ECB_OFFSET UNITYSDK_OFFSET(0x6F3620)
#define STRUCT_2_B54007CE356E2DEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6F3580)

inline static constexpr unsigned int Struct_2_B54007CE356E2DEC_TypeDefinitionIndex = 55932;

struct alignas(4) Struct_2_B54007CE356E2DEC
{
	::Enum_3_15C568652F4FEFB0 Field_2_0; // 0x10
	::Enum_3_5441D86E7C00562A Field_2_1; // 0x14
	::Enum_3_70248E32F82D4889_2 Field_2_2; // 0x18
	::Enum_3_70248E32F82D4889_2 Field_2_3; // 0x1C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B54007CE356E2DEC_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B54007CE356E2DEC_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_2_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B54007CE356E2DEC_METHOD_2_8A76897D6A693475_OFFSET))(this);
	}

	::Enum_3_70248E32F82D4889_2 Method_2_BDBA00FB43D83ECB()
	{
		return ((::Enum_3_70248E32F82D4889_2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B54007CE356E2DEC_METHOD_2_BDBA00FB43D83ECB_OFFSET))(this);
	}
};

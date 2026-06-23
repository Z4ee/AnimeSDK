#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_462371125D2D5513.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_E19890BBE708E5DF_METHOD_2_25FAAA687894E58A_OFFSET UNITYSDK_OFFSET(0x82D090)
#define STRUCT_2_E19890BBE708E5DF_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x82D180)
#define STRUCT_2_E19890BBE708E5DF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x82D080)

inline static constexpr unsigned int Struct_2_E19890BBE708E5DF_TypeDefinitionIndex = 51171;

struct alignas(8) Struct_2_E19890BBE708E5DF
{
	::System::Double Field_2_0; // 0x10
	::System::Double Field_2_1; // 0x18
	::System::Double Field_2_2; // 0x20
	::System::Double Field_2_3; // 0x28
	::System::Double Field_2_4; // 0x30
	::System::Double Field_2_5; // 0x38
	::System::Double Field_2_6; // 0x40

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E19890BBE708E5DF_TOSTRING_OFFSET))(this);
	}

	::Enum_3_462371125D2D5513 Method_2_25FAAA687894E58A(::System::Double a1)
	{
		return ((::Enum_3_462371125D2D5513(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_E19890BBE708E5DF_METHOD_2_25FAAA687894E58A_OFFSET))(this, a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E19890BBE708E5DF_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_7C1CD4B0971AC545_STRUCT_2_97F854948DA30F44_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x677AD0)
#define CLASS_1_7C1CD4B0971AC545_STRUCT_2_97F854948DA30F44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x677AC0)

inline static constexpr unsigned int Class_1_7C1CD4B0971AC545_Struct_2_97F854948DA30F44_TypeDefinitionIndex = 70286;

struct alignas(8) Class_1_7C1CD4B0971AC545_Struct_2_97F854948DA30F44
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::String* Field_2_5; // 0x38

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C1CD4B0971AC545_STRUCT_2_97F854948DA30F44_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C1CD4B0971AC545_STRUCT_2_97F854948DA30F44_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};

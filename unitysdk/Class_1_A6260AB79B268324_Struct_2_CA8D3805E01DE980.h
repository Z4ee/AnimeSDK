#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_A6260AB79B268324_STRUCT_2_CA8D3805E01DE980_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x2239FD0)

inline static constexpr unsigned int Class_1_A6260AB79B268324_Struct_2_CA8D3805E01DE980_TypeDefinitionIndex = 58304;

struct alignas(8) Class_1_A6260AB79B268324_Struct_2_CA8D3805E01DE980
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x2C

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6260AB79B268324_STRUCT_2_CA8D3805E01DE980_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};

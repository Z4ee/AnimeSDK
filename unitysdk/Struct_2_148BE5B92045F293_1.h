#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_148BE5B92045F293_1_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA5E280)

inline static constexpr unsigned int Struct_2_148BE5B92045F293_1_TypeDefinitionIndex = 89354;

struct alignas(4) Struct_2_148BE5B92045F293_1
{
	::System::Boolean Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_148BE5B92045F293_1_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};

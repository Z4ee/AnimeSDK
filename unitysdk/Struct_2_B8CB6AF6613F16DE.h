#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_B8CB6AF6613F16DE_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x9E66D0)

inline static constexpr unsigned int Struct_2_B8CB6AF6613F16DE_TypeDefinitionIndex = 92812;

struct alignas(4) Struct_2_B8CB6AF6613F16DE
{
	::System::UInt32 Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x14
	::System::Int32 Field_2_7; // 0x18

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B8CB6AF6613F16DE_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};

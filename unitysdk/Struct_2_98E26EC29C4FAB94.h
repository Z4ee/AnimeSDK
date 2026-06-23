#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_98E26EC29C4FAB94_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA0B940)

inline static constexpr unsigned int Struct_2_98E26EC29C4FAB94_TypeDefinitionIndex = 89307;

struct alignas(8) Struct_2_98E26EC29C4FAB94
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt64 Field_2_1; // 0x18

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_98E26EC29C4FAB94_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_642A85C6B0A25413_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x9D46C0)

inline static constexpr unsigned int Struct_2_642A85C6B0A25413_TypeDefinitionIndex = 83923;

struct alignas(4) Struct_2_642A85C6B0A25413
{
	::Struct_2_E614D3B245F96744 Field_2_0; // 0x10

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_642A85C6B0A25413_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};

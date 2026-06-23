#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define STRUCT_2_2D6C6E0450225B1E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6B4B10)

inline static constexpr unsigned int Struct_2_2D6C6E0450225B1E_TypeDefinitionIndex = 63977;

struct alignas(8) Struct_2_2D6C6E0450225B1E
{
	::System::Int32 Field_2_0; // 0x10
	::System::Action* Field_2_1; // 0x18
	::System::Action* Field_2_2; // 0x20

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2D6C6E0450225B1E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

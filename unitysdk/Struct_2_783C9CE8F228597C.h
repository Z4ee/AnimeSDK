#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define STRUCT_2_783C9CE8F228597C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7028D0)

inline static constexpr unsigned int Struct_2_783C9CE8F228597C_TypeDefinitionIndex = 59740;

struct alignas(8) Struct_2_783C9CE8F228597C
{
	::System::Boolean Field_2_0; // 0x10
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_783C9CE8F228597C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

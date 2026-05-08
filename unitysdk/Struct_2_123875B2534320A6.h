#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define STRUCT_2_123875B2534320A6_EQUALS_OFFSET UNITYSDK_OFFSET(0x68EF50)

inline static constexpr unsigned int Struct_2_123875B2534320A6_TypeDefinitionIndex = 40518;

struct alignas(4) Struct_2_123875B2534320A6
{
	::System::Int32 Field_2_0; // 0x10
	::UnityEngine::Bounds Field_2_1; // 0x14

	::System::Boolean Equals(::Struct_2_123875B2534320A6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_123875B2534320A6))((::PBYTE)hIl2Cpp + STRUCT_2_123875B2534320A6_EQUALS_OFFSET))(this, a1);
	}
};

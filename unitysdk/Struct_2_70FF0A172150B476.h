#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_26D0E63A4DA95F8F.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_70FF0A172150B476__CTOR_OFFSET UNITYSDK_OFFSET(0x2ACAF0)

inline static constexpr unsigned int Struct_2_70FF0A172150B476_TypeDefinitionIndex = 69348;

struct alignas(4) Struct_2_70FF0A172150B476
{
	::Enum_3_26D0E63A4DA95F8F Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::Enum_3_26D0E63A4DA95F8F a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Enum_3_26D0E63A4DA95F8F))((::PBYTE)hIl2Cpp + STRUCT_2_70FF0A172150B476__CTOR_OFFSET))(this, a1, a2);
	}
};

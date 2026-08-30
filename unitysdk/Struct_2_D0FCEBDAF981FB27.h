#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_D0FCEBDAF981FB27__CTOR_OFFSET UNITYSDK_OFFSET(0x6BB8F0)

inline static constexpr unsigned int Struct_2_D0FCEBDAF981FB27_TypeDefinitionIndex = 73860;

struct alignas(4) Struct_2_D0FCEBDAF981FB27
{
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
	::System::Int32 CBHBHNLMDBI; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D0FCEBDAF981FB27__CTOR_OFFSET))(this, a1, a2);
	}
};

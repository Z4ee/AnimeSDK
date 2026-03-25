#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_D523FB777622F603_EXECUTE_OFFSET UNITYSDK_OFFSET(0x78800)

inline static constexpr unsigned int Struct_2_D523FB777622F603_TypeDefinitionIndex = 58246;

struct alignas(4) Struct_2_D523FB777622F603
{
	::UnityEngine::Vector3 Field_2_0; // 0x10

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D523FB777622F603_EXECUTE_OFFSET))(this, a1);
	}
};

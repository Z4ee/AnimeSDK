#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6EF502A68D7F2109_STRUCT_2_A16EF61AAF52D39E__CTOR_OFFSET UNITYSDK_OFFSET(0x89480)

inline static constexpr unsigned int Class_1_6EF502A68D7F2109_Struct_2_A16EF61AAF52D39E_TypeDefinitionIndex = 69258;

struct alignas(8) Class_1_6EF502A68D7F2109_Struct_2_A16EF61AAF52D39E
{
	::System::Int64 PKILDBNDGCN; // 0x10
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
	::System::Single BAFIOGNBNHJ; // 0x24
	::System::Boolean KKKIONIDKFA; // 0x28

	::System::Void _ctor(::System::Int64 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_STRUCT_2_A16EF61AAF52D39E__CTOR_OFFSET))(this, a1, a2);
	}
};

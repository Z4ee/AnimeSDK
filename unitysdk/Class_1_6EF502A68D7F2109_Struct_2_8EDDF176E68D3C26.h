#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6EF502A68D7F2109_STRUCT_2_8EDDF176E68D3C26_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3AA83C0)
#define CLASS_1_6EF502A68D7F2109_STRUCT_2_8EDDF176E68D3C26__CTOR_OFFSET UNITYSDK_OFFSET(0x3AA8390)

inline static constexpr unsigned int Class_1_6EF502A68D7F2109_Struct_2_8EDDF176E68D3C26_TypeDefinitionIndex = 69256;

struct alignas(8) Class_1_6EF502A68D7F2109_Struct_2_8EDDF176E68D3C26
{
	::System::Int64 PKILDBNDGCN; // 0x10
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
	::System::UInt64 NALMBOOCCIN; // 0x28

	::System::Void _ctor(::System::Int64 a1, ::UnityEngine::Vector3 a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::UnityEngine::Vector3, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_STRUCT_2_8EDDF176E68D3C26__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 CompareTo(::Class_1_6EF502A68D7F2109_Struct_2_8EDDF176E68D3C26 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_6EF502A68D7F2109_Struct_2_8EDDF176E68D3C26))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_STRUCT_2_8EDDF176E68D3C26_COMPARETO_OFFSET))(this, a1);
	}
};

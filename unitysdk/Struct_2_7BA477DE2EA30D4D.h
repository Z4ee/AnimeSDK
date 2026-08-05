#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DD81183BF1438207;

#define STRUCT_2_7BA477DE2EA30D4D_METHOD_2_91AB9279678D5E05_OFFSET UNITYSDK_OFFSET(0x114BFCF0)
#define STRUCT_2_7BA477DE2EA30D4D__CTOR_OFFSET UNITYSDK_OFFSET(0x731070)

inline static constexpr unsigned int Struct_2_7BA477DE2EA30D4D_TypeDefinitionIndex = 71343;

struct alignas(4) Struct_2_7BA477DE2EA30D4D
{
	::UnityEngine::Vector3 Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x1C
	::UnityEngine::Vector3 Field_2_7; // 0x20
	::System::Single Field_2_6; // 0x2C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_7BA477DE2EA30D4D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_91AB9279678D5E05(::Class_3_DD81183BF1438207* a1, ::Class_3_DD81183BF1438207* a2, ::Struct_2_7BA477DE2EA30D4D& a3)
	{
		return ((::System::Boolean(*)(::Class_3_DD81183BF1438207*, ::Class_3_DD81183BF1438207*, ::Struct_2_7BA477DE2EA30D4D&))((::PBYTE)hIl2Cpp + STRUCT_2_7BA477DE2EA30D4D_METHOD_2_91AB9279678D5E05_OFFSET))(a1, a2, a3);
	}
};

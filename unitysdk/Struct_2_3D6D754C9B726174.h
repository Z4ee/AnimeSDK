#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DD81183BF1438207;

#define STRUCT_2_3D6D754C9B726174_METHOD_2_376722FAC0431F8A_OFFSET UNITYSDK_OFFSET(0xB1899E0)
#define STRUCT_2_3D6D754C9B726174__CTOR_OFFSET UNITYSDK_OFFSET(0x4F4AC0)

inline static constexpr unsigned int Struct_2_3D6D754C9B726174_TypeDefinitionIndex = 46605;

struct alignas(4) Struct_2_3D6D754C9B726174
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_7; // 0x1C
	::UnityEngine::Vector3 Field_2_6; // 0x2C
	::System::Single Field_2_5; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3D6D754C9B726174__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_376722FAC0431F8A(::Class_3_DD81183BF1438207* a1, ::Class_3_DD81183BF1438207* a2, ::System::Single a3, ::Struct_2_3D6D754C9B726174& a4)
	{
		return ((::System::Boolean(*)(::Class_3_DD81183BF1438207*, ::Class_3_DD81183BF1438207*, ::System::Single, ::Struct_2_3D6D754C9B726174&))((::PBYTE)hIl2Cpp + STRUCT_2_3D6D754C9B726174_METHOD_2_376722FAC0431F8A_OFFSET))(a1, a2, a3, a4);
	}
};

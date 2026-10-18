#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_10841FDE58E9B286_METHOD_2_8E51D9ED71E4930C_1_OFFSET UNITYSDK_OFFSET(0x2E7E8A0)
#define STRUCT_2_10841FDE58E9B286_METHOD_2_8E51D9ED71E4930C_OFFSET UNITYSDK_OFFSET(0x2E7E870)
#define STRUCT_2_10841FDE58E9B286_METHOD_2_9EA226EF48BC0D1C_OFFSET UNITYSDK_OFFSET(0x2E7E830)
#define STRUCT_2_10841FDE58E9B286__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CA05E0)

inline static constexpr unsigned int Struct_2_10841FDE58E9B286_TypeDefinitionIndex = 73966;

struct alignas(4) Struct_2_10841FDE58E9B286
{
	static ::Struct_2_10841FDE58E9B286* StaticGet_EKEMOCGAEEO()
	{
		return (::Struct_2_10841FDE58E9B286*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_10841FDE58E9B286_TypeDefinitionIndex)->GetStaticField(0x4E80);
	}
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
	::UnityEngine::Quaternion NMELCPIOKNO; // 0x1C
	::UnityEngine::Matrix4x4 FIOBIJOJEPM; // 0x2C
	::System::Boolean KFKBPJDGJDK; // 0x6C
	::System::Boolean IJFJJEJBGAB; // 0x6D

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_10841FDE58E9B286__CCTOR_OFFSET))();
	}

	::Struct_2_10841FDE58E9B286 Method_2_9EA226EF48BC0D1C(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::Struct_2_10841FDE58E9B286(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_10841FDE58E9B286_METHOD_2_9EA226EF48BC0D1C_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_8E51D9ED71E4930C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_10841FDE58E9B286_METHOD_2_8E51D9ED71E4930C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_8E51D9ED71E4930C_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_10841FDE58E9B286_METHOD_2_8E51D9ED71E4930C_1_OFFSET))(this, a1);
	}
};

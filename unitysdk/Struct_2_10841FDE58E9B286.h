#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_10841FDE58E9B286_METHOD_2_8E51D9ED71E4930C_1_OFFSET UNITYSDK_OFFSET(0x395D980)
#define STRUCT_2_10841FDE58E9B286_METHOD_2_8E51D9ED71E4930C_OFFSET UNITYSDK_OFFSET(0x395D950)
#define STRUCT_2_10841FDE58E9B286_METHOD_2_9EA226EF48BC0D1C_OFFSET UNITYSDK_OFFSET(0x395D910)
#define STRUCT_2_10841FDE58E9B286__CCTOR_OFFSET UNITYSDK_OFFSET(0x17991900)

inline static constexpr unsigned int Struct_2_10841FDE58E9B286_TypeDefinitionIndex = 70559;

struct alignas(4) Struct_2_10841FDE58E9B286
{
	static ::Struct_2_10841FDE58E9B286* StaticGet_Field_2_0()
	{
		return (::Struct_2_10841FDE58E9B286*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_10841FDE58E9B286_TypeDefinitionIndex)->GetStaticField(0xBC10);
	}
	::UnityEngine::Vector3 Field_2_1; // 0x10
	::UnityEngine::Quaternion Field_2_2; // 0x1C
	::UnityEngine::Matrix4x4 Field_2_3; // 0x2C
	::System::Boolean Field_2_4; // 0x6C
	::System::Boolean Field_2_5; // 0x6D

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

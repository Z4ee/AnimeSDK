#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_A62B8C05FE608BC8_METHOD_2_4B70440A0A7C6E61_OFFSET UNITYSDK_OFFSET(0x835470)

inline static constexpr unsigned int Struct_2_A62B8C05FE608BC8_TypeDefinitionIndex = 56334;

struct alignas(8) Struct_2_A62B8C05FE608BC8
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::UnityEngine::Quaternion Field_2_2; // 0x28
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_3; // 0x38

	/*
	::UnityEngine::Plane Method_2_4B70440A0A7C6E61()
	{
		return ((::UnityEngine::Plane(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A62B8C05FE608BC8_METHOD_2_4B70440A0A7C6E61_OFFSET))(this);
	}
	*/
};

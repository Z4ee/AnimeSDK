#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_BF4C9E83C73AEEB1_METHOD_2_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x1600A380)
#define STRUCT_2_BF4C9E83C73AEEB1_METHOD_2_D8BEE25C97B3F2EB_OFFSET UNITYSDK_OFFSET(0x811BF0)
#define STRUCT_2_BF4C9E83C73AEEB1__CTOR_OFFSET UNITYSDK_OFFSET(0x3E5800)

inline static constexpr unsigned int Struct_2_BF4C9E83C73AEEB1_TypeDefinitionIndex = 80088;

struct alignas(4) Struct_2_BF4C9E83C73AEEB1
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_BF4C9E83C73AEEB1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_BF4C9E83C73AEEB1 Method_2_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_BF4C9E83C73AEEB1(*)())((::PBYTE)hIl2Cpp + STRUCT_2_BF4C9E83C73AEEB1_METHOD_2_895E6BF2EDCD95D0_OFFSET))();
	}

	::System::Boolean Method_2_D8BEE25C97B3F2EB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BF4C9E83C73AEEB1_METHOD_2_D8BEE25C97B3F2EB_OFFSET))(this);
	}
};

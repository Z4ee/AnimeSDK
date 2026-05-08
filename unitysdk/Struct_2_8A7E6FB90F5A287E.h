#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_8A7E6FB90F5A287E_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x2E44E0)

inline static constexpr unsigned int Struct_2_8A7E6FB90F5A287E_TypeDefinitionIndex = 81454;

struct alignas(4) Struct_2_8A7E6FB90F5A287E
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C

	::Struct_2_8A7E6FB90F5A287E Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_8A7E6FB90F5A287E(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8A7E6FB90F5A287E_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}
};

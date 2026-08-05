#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_8500CCAF67F8FA7F_METHOD_2_9DB2ADAE2B730EB3_OFFSET UNITYSDK_OFFSET(0x862380)

inline static constexpr unsigned int Struct_2_8500CCAF67F8FA7F_TypeDefinitionIndex = 51744;

struct alignas(8) Struct_2_8500CCAF67F8FA7F
{
	::UnityEngine::Vector3 Field_2_3; // 0x10
	::UnityEngine::Vector3 Field_2_2; // 0x1C
	::UnityEngine::Quaternion Field_2_1; // 0x28
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_0; // 0x38

	/*
	::UnityEngine::Plane Method_2_9DB2ADAE2B730EB3()
	{
		return ((::UnityEngine::Plane(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8500CCAF67F8FA7F_METHOD_2_9DB2ADAE2B730EB3_OFFSET))(this);
	}
	*/
};

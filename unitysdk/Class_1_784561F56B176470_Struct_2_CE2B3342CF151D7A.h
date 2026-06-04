#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_784561F56B176470_STRUCT_2_CE2B3342CF151D7A_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x895D0)

inline static constexpr unsigned int Class_1_784561F56B176470_Struct_2_CE2B3342CF151D7A_TypeDefinitionIndex = 65063;

struct alignas(4) Class_1_784561F56B176470_Struct_2_CE2B3342CF151D7A
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x2C
	::System::Single Field_2_3; // 0x30

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_784561F56B176470_STRUCT_2_CE2B3342CF151D7A_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}
};

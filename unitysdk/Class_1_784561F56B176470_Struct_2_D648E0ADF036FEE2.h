#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_784561F56B176470_STRUCT_2_D648E0ADF036FEE2_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0xD4330)

inline static constexpr unsigned int Class_1_784561F56B176470_Struct_2_D648E0ADF036FEE2_TypeDefinitionIndex = 64142;

struct alignas(4) Class_1_784561F56B176470_Struct_2_D648E0ADF036FEE2
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x2C
	::System::Single Field_2_3; // 0x30

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_784561F56B176470_STRUCT_2_D648E0ADF036FEE2_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}
};

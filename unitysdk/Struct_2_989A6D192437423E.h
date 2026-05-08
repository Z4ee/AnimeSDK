#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_989A6D192437423E_METHOD_2_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x745170)
#define STRUCT_2_989A6D192437423E_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x7450E0)

inline static constexpr unsigned int Struct_2_989A6D192437423E_TypeDefinitionIndex = 66840;

struct alignas(4) Struct_2_989A6D192437423E
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x2C
	::UnityEngine::Quaternion Field_2_3; // 0x38
	::UnityEngine::Vector3 Field_2_4; // 0x48
	::System::Single Field_2_5; // 0x54

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_989A6D192437423E_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_989A6D192437423E_METHOD_2_413F493333BF3391_OFFSET))(this);
	}
};

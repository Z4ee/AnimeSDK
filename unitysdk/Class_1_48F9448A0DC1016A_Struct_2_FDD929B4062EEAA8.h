#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_1_48F9448A0DC1016A_STRUCT_2_FDD929B4062EEAA8_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x8033D0)

inline static constexpr unsigned int Class_1_48F9448A0DC1016A_Struct_2_FDD929B4062EEAA8_TypeDefinitionIndex = 66818;

struct alignas(8) Class_1_48F9448A0DC1016A_Struct_2_FDD929B4062EEAA8
{
	::System::Int32 Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x24
	::System::Single Field_2_3; // 0x28
	::System::Func_1<::UnityEngine::Vector3>* Field_2_4; // 0x30

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F9448A0DC1016A_STRUCT_2_FDD929B4062EEAA8_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}
};

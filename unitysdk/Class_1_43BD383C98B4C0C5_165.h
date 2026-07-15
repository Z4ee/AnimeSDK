#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_43BD383C98B4C0C5_165__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA2F30)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_165_TypeDefinitionIndex = 65411;

class Class_1_43BD383C98B4C0C5_165 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x24
	::UnityEngine::Quaternion Field_1_3; // 0x30
	::System::Int32 Field_1_4; // 0x40
	::UnityEngine::Vector3 Field_1_5; // 0x44
	::UnityEngine::Quaternion Field_1_6; // 0x50
	::UnityEngine::Vector3 Field_1_7; // 0x60
	::System::Single Field_1_8; // 0x6C
	::System::Single Field_1_9; // 0x70
	::UnityEngine::Vector3 Field_1_10; // 0x74
	::System::Single Field_1_11; // 0x80
	::System::Single Field_1_12; // 0x84
	::UnityEngine::Vector3 Field_1_13; // 0x88
	::System::Single Field_1_14; // 0x94
	::UnityEngine::Quaternion Field_1_15; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_165__CTOR_OFFSET))(this);
	}
};

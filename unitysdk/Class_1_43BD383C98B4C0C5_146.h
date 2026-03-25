#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_43BD383C98B4C0C5_146__CTOR_OFFSET UNITYSDK_OFFSET(0x10BAA8B0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_146_TypeDefinitionIndex = 55889;

class Class_1_43BD383C98B4C0C5_146 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_3; // 0x18
	::UnityEngine::Vector3 Field_1_14; // 0x24
	::System::Int32 Field_1_1; // 0x30
	::UnityEngine::Vector3 Field_1_15; // 0x34
	::UnityEngine::Vector3 Field_1_2; // 0x40
	::System::Single Field_1_11; // 0x4C
	::UnityEngine::Vector3 Field_1_13; // 0x50
	::UnityEngine::Quaternion Field_1_10; // 0x5C
	::System::Single Field_1_4; // 0x6C
	::System::Single Field_1_5; // 0x70
	::UnityEngine::Quaternion Field_1_8; // 0x74
	::UnityEngine::Vector3 Field_1_12; // 0x84
	::System::Single Field_1_6; // 0x90
	::UnityEngine::Quaternion Field_1_9; // 0x94
	::System::Single Field_1_7; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_146__CTOR_OFFSET))(this);
	}
};

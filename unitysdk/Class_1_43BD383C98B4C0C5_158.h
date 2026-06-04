#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_43BD383C98B4C0C5_158__CTOR_OFFSET UNITYSDK_OFFSET(0x145322B0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_158_TypeDefinitionIndex = 64040;

class Class_1_43BD383C98B4C0C5_158 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Quaternion Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x28
	::UnityEngine::Quaternion Field_1_3; // 0x34
	::UnityEngine::Vector3 Field_1_4; // 0x44
	::System::Int32 Field_1_5; // 0x50
	::System::Single Field_1_6; // 0x54
	::UnityEngine::Vector3 Field_1_7; // 0x58
	::System::Single Field_1_8; // 0x64
	::System::Single Field_1_9; // 0x68
	::System::Single Field_1_10; // 0x6C
	::UnityEngine::Vector3 Field_1_11; // 0x70
	::UnityEngine::Vector3 Field_1_12; // 0x7C
	::UnityEngine::Vector3 Field_1_13; // 0x88
	::UnityEngine::Quaternion Field_1_14; // 0x94
	::System::Single Field_1_15; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_158__CTOR_OFFSET))(this);
	}
};

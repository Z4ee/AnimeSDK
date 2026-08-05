#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_A9A87B1F330EEE54_CLASS_1_C8F0EA9E3CEFE9D7_METHOD_1_1A2E651B24E2EB33_OFFSET UNITYSDK_OFFSET(0x124C30C0)
#define CLASS_2_A9A87B1F330EEE54_CLASS_1_C8F0EA9E3CEFE9D7_METHOD_1_B86A7D6C813D6700_OFFSET UNITYSDK_OFFSET(0x124C2D30)
#define CLASS_2_A9A87B1F330EEE54_CLASS_1_C8F0EA9E3CEFE9D7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x124C3210)
#define CLASS_2_A9A87B1F330EEE54_CLASS_1_C8F0EA9E3CEFE9D7__CTOR_OFFSET UNITYSDK_OFFSET(0x124C2D10)

inline static constexpr unsigned int Class_2_A9A87B1F330EEE54_Class_1_C8F0EA9E3CEFE9D7_TypeDefinitionIndex = 53212;

class Class_2_A9A87B1F330EEE54_Class_1_C8F0EA9E3CEFE9D7 : public ::System::Object
{
public:
	::UnityEngine::Quaternion Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_CLASS_1_C8F0EA9E3CEFE9D7__CTOR_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_B86A7D6C813D6700(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_CLASS_1_C8F0EA9E3CEFE9D7_METHOD_1_B86A7D6C813D6700_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_1A2E651B24E2EB33(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_CLASS_1_C8F0EA9E3CEFE9D7_METHOD_1_1A2E651B24E2EB33_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_CLASS_1_C8F0EA9E3CEFE9D7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

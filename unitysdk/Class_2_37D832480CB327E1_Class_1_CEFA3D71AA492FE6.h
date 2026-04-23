#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CD04D3296DF4C842_8;
class Class_3_CD04D3296DF4C842_9;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6_CLEAR_OFFSET UNITYSDK_OFFSET(0x118CDAE0)
#define CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6__CTOR_OFFSET UNITYSDK_OFFSET(0x118CDA00)

inline static constexpr unsigned int Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6_TypeDefinitionIndex = 52912;

class Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::AnimationCurve* Field_1_10; // 0x18
	::Class_3_CD04D3296DF4C842_9* Field_1_9; // 0x20
	::Class_3_CD04D3296DF4C842_8* Field_1_8; // 0x28
	::UnityEngine::Quaternion Field_1_2; // 0x30
	::UnityEngine::Vector3 Field_1_1; // 0x40
	::System::Single Field_1_5; // 0x4C
	::UnityEngine::Quaternion Field_1_4; // 0x50
	::System::Single Field_1_6; // 0x60
	::System::Boolean Field_1_7; // 0x64
	::UnityEngine::Vector3 Field_1_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6_CLEAR_OFFSET))(this);
	}
};

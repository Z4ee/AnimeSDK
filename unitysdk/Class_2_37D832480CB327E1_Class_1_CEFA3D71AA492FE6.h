#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CD04D3296DF4C842_8;
class Class_3_CD04D3296DF4C842_9;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6_CLEAR_OFFSET UNITYSDK_OFFSET(0x13319C10)
#define CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6__CTOR_OFFSET UNITYSDK_OFFSET(0x13319CB0)

inline static constexpr unsigned int Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6_TypeDefinitionIndex = 57406;

class Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6 : public ::System::Object
{
public:
	::UnityEngine::Transform* MCLLALGABAB; // 0x10
	::UnityEngine::AnimationCurve* ADIKANHDFGG; // 0x18
	::Class_3_CD04D3296DF4C842_9* BGODALLNIAK; // 0x20
	::Class_3_CD04D3296DF4C842_8* AJGHKBPIEKC; // 0x28
	::UnityEngine::Quaternion KHOPAMJJINE; // 0x30
	::UnityEngine::Quaternion HIINJOIAHIM; // 0x40
	::UnityEngine::Vector3 PLLGEEEBHPO; // 0x50
	::System::Boolean DPJCMAKDGCF; // 0x5C
	::System::Single LCEMECHAMCM; // 0x60
	::System::Single IEHPFADHJFD; // 0x64
	::UnityEngine::Vector3 LDDBFJDDNJO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6_CLEAR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CD04D3296DF4C842_8;
class Class_3_CD04D3296DF4C842_9;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6_CLEAR_OFFSET UNITYSDK_OFFSET(0x12E94790)
#define CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6__CTOR_OFFSET UNITYSDK_OFFSET(0x12E94830)

inline static constexpr unsigned int Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6_TypeDefinitionIndex = 57561;

class Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6 : public ::System::Object
{
public:
	::UnityEngine::Transform* MCLLALGABAB; // 0x10
	::UnityEngine::AnimationCurve* ADIKANHDFGG; // 0x18
	::Class_3_CD04D3296DF4C842_8* AJGHKBPIEKC; // 0x20
	::Class_3_CD04D3296DF4C842_9* BGODALLNIAK; // 0x28
	::UnityEngine::Vector3 PLLGEEEBHPO; // 0x30
	::UnityEngine::Quaternion KHOPAMJJINE; // 0x3C
	::System::Single LCEMECHAMCM; // 0x4C
	::System::Boolean DPJCMAKDGCF; // 0x50
	::UnityEngine::Vector3 LDDBFJDDNJO; // 0x54
	::System::Single IEHPFADHJFD; // 0x60
	::UnityEngine::Quaternion HIINJOIAHIM; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6_CLEAR_OFFSET))(this);
	}
};

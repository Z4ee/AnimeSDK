#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define SKIRTIK_SKIRTIKCLASS_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE91D440)
#define SKIRTIK_SKIRTIKCLASS_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE91D400)
#define SKIRTIK_SKIRTIKCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0xE91D480)

inline static constexpr unsigned int SkirtIK_SkirtIKClass_TypeDefinitionIndex = 47715;

class SkirtIK_SkirtIKClass : public ::System::Object
{
public:
	::UnityEngine::Transform* skirtBone; // 0x10
	::UnityEngine::Quaternion skirtRotation; // 0x18
	::UnityEngine::Vector3 skirtPosition; // 0x28
	::UnityEngine::Quaternion oriSkirtRotation; // 0x34
	::UnityEngine::Vector3 oriSkirPosition; // 0x44
	::System::Single aniRatio; // 0x50
	::UnityEngine::AnimationCurve* RatioCurve; // 0x58
	::System::Boolean CurveEnable; // 0x60
	::System::Boolean SpPos; // 0x61
	::System::Boolean REC; // 0x62

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_SKIRTIKCLASS__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_SKIRTIKCLASS_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_SKIRTIKCLASS_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};

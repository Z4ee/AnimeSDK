#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define SKIRTIK_HAIRIKCLASS_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB945A30)
#define SKIRTIK_HAIRIKCLASS_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9459F0)
#define SKIRTIK_HAIRIKCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0xB945A70)

inline static constexpr unsigned int SkirtIK_HairIKClass_TypeDefinitionIndex = 44049;

class SkirtIK_HairIKClass : public ::System::Object
{
public:
	::UnityEngine::Quaternion HairRotation; // 0x10
	::UnityEngine::Vector3 HairPosition; // 0x20
	::UnityEngine::AnimationCurve* RatioCurve; // 0x30
	::System::Boolean CE; // 0x38
	::System::Boolean REC; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRIKCLASS__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRIKCLASS_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRIKCLASS_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};

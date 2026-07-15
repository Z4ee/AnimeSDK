#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_96057A1FFF160C58__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0219D0)

inline static constexpr unsigned int Class_1_96057A1FFF160C58_TypeDefinitionIndex = 41124;

class Class_1_96057A1FFF160C58 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::UnityEngine::Vector3 Field_1_5; // 0x2C
	::System::Single Field_1_6; // 0x38
	::UnityEngine::Vector3 Field_1_7; // 0x3C
	::System::Single Field_1_8; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96057A1FFF160C58__CTOR_OFFSET))(this);
	}
};

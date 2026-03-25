#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_96057A1FFF160C58__CTOR_OFFSET UNITYSDK_OFFSET(0x168F75C0)

inline static constexpr unsigned int Class_1_96057A1FFF160C58_TypeDefinitionIndex = 33685;

class Class_1_96057A1FFF160C58 : public ::System::Object
{
public:
	::System::Action* Field_1_8; // 0x10
	::UnityEngine::AnimationCurve* Field_1_5; // 0x18
	::UnityEngine::Vector3 Field_1_0; // 0x20
	::UnityEngine::Vector3 Field_1_1; // 0x2C
	::System::Single Field_1_7; // 0x38
	::System::Single Field_1_3; // 0x3C
	::System::Single Field_1_2; // 0x40
	::System::Single Field_1_6; // 0x44
	::System::Single Field_1_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96057A1FFF160C58__CTOR_OFFSET))(this);
	}
};

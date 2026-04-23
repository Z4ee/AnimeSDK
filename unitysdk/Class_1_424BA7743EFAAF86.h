#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_424BA7743EFAAF86__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5E7A0)

inline static constexpr unsigned int Class_1_424BA7743EFAAF86_TypeDefinitionIndex = 39048;

class Class_1_424BA7743EFAAF86 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_2; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Boolean Field_1_4; // 0x1C
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_424BA7743EFAAF86__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_424BA7743EFAAF86__CTOR_OFFSET UNITYSDK_OFFSET(0x1C487390)

inline static constexpr unsigned int Class_1_424BA7743EFAAF86_TypeDefinitionIndex = 41577;

class Class_1_424BA7743EFAAF86 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* ICPLILLKDJJ; // 0x10
	::System::Single EIBGEGPABFK; // 0x18
	::System::Single FLAAIBEJDOI; // 0x1C
	::System::Boolean CKHKLEKIFFO; // 0x20
	::System::Boolean FNPGLAFFLHO; // 0x21
	::System::Single JIPONFOAAPH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_424BA7743EFAAF86__CTOR_OFFSET))(this);
	}
};

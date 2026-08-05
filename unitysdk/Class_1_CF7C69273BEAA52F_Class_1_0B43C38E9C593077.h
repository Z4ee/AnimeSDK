#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_CF7C69273BEAA52F;

#define CLASS_1_CF7C69273BEAA52F_CLASS_1_0B43C38E9C593077_METHOD_1_8AC8266913C3782D_OFFSET UNITYSDK_OFFSET(0x15F0AB80)
#define CLASS_1_CF7C69273BEAA52F_CLASS_1_0B43C38E9C593077__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0AB70)

inline static constexpr unsigned int Class_1_CF7C69273BEAA52F_Class_1_0B43C38E9C593077_TypeDefinitionIndex = 63362;

class Class_1_CF7C69273BEAA52F_Class_1_0B43C38E9C593077 : public ::System::Object
{
public:
	::Class_1_CF7C69273BEAA52F* Field_1_0; // 0x10
	::System::Single Field_1_4; // 0x18
	::UnityEngine::Vector2 Field_1_6; // 0x1C
	::UnityEngine::Bounds Field_1_7; // 0x24
	::System::Single Field_1_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_CLASS_1_0B43C38E9C593077__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8AC8266913C3782D(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_CLASS_1_0B43C38E9C593077_METHOD_1_8AC8266913C3782D_OFFSET))(this, a1);
	}
};

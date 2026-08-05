#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_CF7C69273BEAA52F_CLASS_1_4D41C504340F2947_METHOD_1_18A4CA4B2EF25908_OFFSET UNITYSDK_OFFSET(0x123B3BF0)
#define CLASS_1_CF7C69273BEAA52F_CLASS_1_4D41C504340F2947__CTOR_OFFSET UNITYSDK_OFFSET(0x123B3BE0)

inline static constexpr unsigned int Class_1_CF7C69273BEAA52F_Class_1_4D41C504340F2947_TypeDefinitionIndex = 63359;

class Class_1_CF7C69273BEAA52F_Class_1_4D41C504340F2947 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::UnityEngine::Vector2 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_CLASS_1_4D41C504340F2947__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_18A4CA4B2EF25908(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_CLASS_1_4D41C504340F2947_METHOD_1_18A4CA4B2EF25908_OFFSET))(this, a1);
	}
};

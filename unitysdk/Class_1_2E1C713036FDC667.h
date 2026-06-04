#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2E1C713036FDC667__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE5780)

inline static constexpr unsigned int Class_1_2E1C713036FDC667_TypeDefinitionIndex = 39213;

class Class_1_2E1C713036FDC667 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x2C
	::System::Boolean Field_1_4; // 0x38
	::System::Boolean Field_1_5; // 0x39
	::System::Boolean Field_1_6; // 0x3A
	::UnityEngine::Vector3 Field_1_7; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E1C713036FDC667__CTOR_OFFSET))(this);
	}
};

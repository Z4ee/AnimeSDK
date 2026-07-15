#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B0FF820)
#define CLASS_1_6DE8726ADEF173A7_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FF880)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_6_TypeDefinitionIndex = 40691;

class Class_1_6DE8726ADEF173A7_6 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x1C
	::UnityEngine::Vector3 Field_1_4; // 0x20
	::System::Single Field_1_5; // 0x2C
	::System::Single Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_6_CLEAR_OFFSET))(this);
	}
};

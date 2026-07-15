#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_8__CTOR_OFFSET UNITYSDK_OFFSET(0x16E34550)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_8_TypeDefinitionIndex = 54496;

class Class_1_6DE8726ADEF173A7_8 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x1C
	::System::Single Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_8__CTOR_OFFSET))(this);
	}
};

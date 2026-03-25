#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16A15820)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_2_TypeDefinitionIndex = 32624;

class Class_1_6DE8726ADEF173A7_2 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Single Field_1_3; // 0x1C
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::System::Single Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_2__CTOR_OFFSET))(this);
	}
};

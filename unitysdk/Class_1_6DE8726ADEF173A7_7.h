#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1138DBD0)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_7_TypeDefinitionIndex = 45922;

class Class_1_6DE8726ADEF173A7_7 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_2; // 0x10
	::System::Single Field_1_1; // 0x1C
	::System::Single Field_1_3; // 0x20
	::UnityEngine::Vector3 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_7__CTOR_OFFSET))(this);
	}
};

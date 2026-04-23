#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1805B340)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_2_TypeDefinitionIndex = 38414;

class Class_1_6DE8726ADEF173A7_2 : public ::System::Object
{
public:
	::System::Single Field_1_2; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14
	::System::Single Field_1_3; // 0x20
	::UnityEngine::Vector3 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_2__CTOR_OFFSET))(this);
	}
};

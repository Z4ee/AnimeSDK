#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_4__CTOR_OFFSET UNITYSDK_OFFSET(0x167968B0)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_4_TypeDefinitionIndex = 33063;

class Class_1_6DE8726ADEF173A7_4 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_4__CTOR_OFFSET))(this);
	}
};

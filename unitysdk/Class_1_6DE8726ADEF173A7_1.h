#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AE454E0)
#define CLASS_1_6DE8726ADEF173A7_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AE45540)
#define CLASS_1_6DE8726ADEF173A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE45550)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_1_TypeDefinitionIndex = 40811;

class Class_1_6DE8726ADEF173A7_1 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_1_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

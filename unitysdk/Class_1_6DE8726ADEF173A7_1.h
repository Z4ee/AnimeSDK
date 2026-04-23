#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18027680)
#define CLASS_1_6DE8726ADEF173A7_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x180276E0)
#define CLASS_1_6DE8726ADEF173A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180276F0)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_1_TypeDefinitionIndex = 39229;

class Class_1_6DE8726ADEF173A7_1 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x14

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C638B30)
#define CLASS_1_6DE8726ADEF173A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C638BB0)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_TypeDefinitionIndex = 41767;

class Class_1_6DE8726ADEF173A7 : public ::System::Object
{
public:
	::UnityEngine::Vector3 DLKMKNFJLIK; // 0x10
	::UnityEngine::Vector3 DPKMOFJOHKB; // 0x1C
	::UnityEngine::Vector3 NAAIGCBNBHM; // 0x28
	::System::Single OIKGNPCGODF; // 0x34
	::System::Single IFEPJHGNCOI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_CLEAR_OFFSET))(this);
	}
};

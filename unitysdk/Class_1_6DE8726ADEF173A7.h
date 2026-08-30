#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BF99FD0)
#define CLASS_1_6DE8726ADEF173A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF9A060)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_TypeDefinitionIndex = 41767;

class Class_1_6DE8726ADEF173A7 : public ::System::Object
{
public:
	::System::Single IFEPJHGNCOI; // 0x10
	::UnityEngine::Vector3 NAAIGCBNBHM; // 0x14
	::System::Single OIKGNPCGODF; // 0x20
	::UnityEngine::Vector3 DPKMOFJOHKB; // 0x24
	::UnityEngine::Vector3 DLKMKNFJLIK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_CLEAR_OFFSET))(this);
	}
};

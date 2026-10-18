#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CBB8030)
#define CLASS_1_6DE8726ADEF173A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB80B0)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_1_TypeDefinitionIndex = 43409;

class Class_1_6DE8726ADEF173A7_1 : public ::System::Object
{
public:
	::System::Single OIKGNPCGODF; // 0x10
	::System::Single IFEPJHGNCOI; // 0x14
	::UnityEngine::Vector3 NAAIGCBNBHM; // 0x18
	::UnityEngine::Vector3 DLKMKNFJLIK; // 0x24
	::UnityEngine::Vector3 DPKMOFJOHKB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_1_CLEAR_OFFSET))(this);
	}
};

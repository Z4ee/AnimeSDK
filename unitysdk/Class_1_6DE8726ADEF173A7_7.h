#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_7_CLEAR_OFFSET UNITYSDK_OFFSET(0xF3E7470)
#define CLASS_1_6DE8726ADEF173A7_7__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E74D0)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_7_TypeDefinitionIndex = 53758;

class Class_1_6DE8726ADEF173A7_7 : public ::System::Object
{
public:
	::System::Single LJJPHJIOFJH; // 0x10
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_7_CLEAR_OFFSET))(this);
	}
};

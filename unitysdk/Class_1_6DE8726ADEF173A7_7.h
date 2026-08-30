#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_7_CLEAR_OFFSET UNITYSDK_OFFSET(0x18948DF0)
#define CLASS_1_6DE8726ADEF173A7_7__CTOR_OFFSET UNITYSDK_OFFSET(0x18948E50)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_7_TypeDefinitionIndex = 53758;

class Class_1_6DE8726ADEF173A7_7 : public ::System::Object
{
public:
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
	::System::Single LJJPHJIOFJH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_7_CLEAR_OFFSET))(this);
	}
};

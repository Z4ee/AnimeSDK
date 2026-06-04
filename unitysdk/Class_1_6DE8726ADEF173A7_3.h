#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC7C60)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_3_TypeDefinitionIndex = 39584;

class Class_1_6DE8726ADEF173A7_3 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_3__CTOR_OFFSET))(this);
	}
};

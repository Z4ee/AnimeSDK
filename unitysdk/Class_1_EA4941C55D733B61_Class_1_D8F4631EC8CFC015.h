#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_EA4941C55D733B61_CLASS_1_D8F4631EC8CFC015__CTOR_OFFSET UNITYSDK_OFFSET(0x9619D80)

inline static constexpr unsigned int Class_1_EA4941C55D733B61_Class_1_D8F4631EC8CFC015_TypeDefinitionIndex = 70523;

class Class_1_EA4941C55D733B61_Class_1_D8F4631EC8CFC015 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_2; // 0x10
	::System::Boolean Field_1_0; // 0x1C
	::System::Boolean Field_1_3; // 0x1D
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::UnityEngine::Quaternion Field_1_5; // 0x2C
	::UnityEngine::Quaternion Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4941C55D733B61_CLASS_1_D8F4631EC8CFC015__CTOR_OFFSET))(this);
	}
};

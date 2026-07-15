#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_964A712EA586728B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E89E0)

inline static constexpr unsigned int Class_1_964A712EA586728B_TypeDefinitionIndex = 39610;

class Class_1_964A712EA586728B : public ::System::Object
{
public:
	::UnityEngine::Quaternion Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964A712EA586728B__CTOR_OFFSET))(this);
	}
};

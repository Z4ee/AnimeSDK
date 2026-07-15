#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_B381667AF51B5F43__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EC240)

inline static constexpr unsigned int Class_1_B381667AF51B5F43_TypeDefinitionIndex = 39607;

class Class_1_B381667AF51B5F43 : public ::System::Object
{
public:
	::UnityEngine::Quaternion Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::UnityEngine::Quaternion Field_1_2; // 0x2C
	::UnityEngine::Vector3 Field_1_3; // 0x3C
	::System::Single Field_1_4; // 0x48
	::System::Single Field_1_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B381667AF51B5F43__CTOR_OFFSET))(this);
	}
};

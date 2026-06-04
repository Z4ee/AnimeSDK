#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_56E1726699E41732__CTOR_OFFSET UNITYSDK_OFFSET(0x18D026F0)

inline static constexpr unsigned int Class_1_56E1726699E41732_TypeDefinitionIndex = 40353;

class Class_1_56E1726699E41732 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::UnityEngine::Quaternion Field_1_1; // 0x1C
	::UnityEngine::Vector3 Field_1_2; // 0x2C
	::System::Boolean Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56E1726699E41732__CTOR_OFFSET))(this);
	}
};

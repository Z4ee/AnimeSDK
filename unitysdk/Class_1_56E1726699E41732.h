#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_56E1726699E41732__CTOR_OFFSET UNITYSDK_OFFSET(0x17EDE0E0)

inline static constexpr unsigned int Class_1_56E1726699E41732_TypeDefinitionIndex = 39530;

class Class_1_56E1726699E41732 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x28
	::UnityEngine::Quaternion Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56E1726699E41732__CTOR_OFFSET))(this);
	}
};

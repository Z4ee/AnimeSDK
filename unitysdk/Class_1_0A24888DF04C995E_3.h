#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A24888DF04C995E_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1061BD80)

inline static constexpr unsigned int Class_1_0A24888DF04C995E_3_TypeDefinitionIndex = 65776;

class Class_1_0A24888DF04C995E_3 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x1C
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x2C
	::System::Single Field_1_4; // 0x38
	::UnityEngine::Vector3 Field_1_5; // 0x3C
	::System::Single Field_1_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A24888DF04C995E_3__CTOR_OFFSET))(this);
	}
};

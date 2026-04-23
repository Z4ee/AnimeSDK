#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A24888DF04C995E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x926EBD0)

inline static constexpr unsigned int Class_1_0A24888DF04C995E_2_TypeDefinitionIndex = 55932;

class Class_1_0A24888DF04C995E_2 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_4; // 0x10
	::UnityEngine::Vector3 Field_1_2; // 0x1C
	::System::Single Field_1_1; // 0x28
	::System::Single Field_1_3; // 0x2C
	::System::Boolean Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A24888DF04C995E_2__CTOR_OFFSET))(this);
	}
};

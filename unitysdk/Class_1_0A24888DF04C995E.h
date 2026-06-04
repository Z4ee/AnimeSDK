#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A24888DF04C995E__CTOR_OFFSET UNITYSDK_OFFSET(0x18C57EA0)

inline static constexpr unsigned int Class_1_0A24888DF04C995E_TypeDefinitionIndex = 39481;

class Class_1_0A24888DF04C995E : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x1C
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::System::Boolean Field_1_4; // 0x22
	::System::Boolean Field_1_5; // 0x23

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A24888DF04C995E__CTOR_OFFSET))(this);
	}
};

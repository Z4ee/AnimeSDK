#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A24888DF04C995E__CTOR_OFFSET UNITYSDK_OFFSET(0x180556C0)

inline static constexpr unsigned int Class_1_0A24888DF04C995E_TypeDefinitionIndex = 38713;

class Class_1_0A24888DF04C995E : public ::System::Object
{
public:
	::System::Boolean Field_1_4; // 0x10
	::System::Boolean Field_1_5; // 0x11
	::System::Boolean Field_1_0; // 0x12
	::System::Boolean Field_1_1; // 0x13
	::UnityEngine::Vector3 Field_1_3; // 0x14
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A24888DF04C995E__CTOR_OFFSET))(this);
	}
};

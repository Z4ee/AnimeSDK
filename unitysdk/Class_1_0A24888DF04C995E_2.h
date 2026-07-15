#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A24888DF04C995E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1760C5E0)

inline static constexpr unsigned int Class_1_0A24888DF04C995E_2_TypeDefinitionIndex = 57933;

class Class_1_0A24888DF04C995E_2 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::UnityEngine::Vector3 Field_1_2; // 0x18
	::UnityEngine::Vector3 Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A24888DF04C995E_2__CTOR_OFFSET))(this);
	}
};

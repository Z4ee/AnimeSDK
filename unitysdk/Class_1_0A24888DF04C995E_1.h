#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A24888DF04C995E_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A4DE30)
#define CLASS_1_0A24888DF04C995E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A4DE90)

inline static constexpr unsigned int Class_1_0A24888DF04C995E_1_TypeDefinitionIndex = 33322;

class Class_1_0A24888DF04C995E_1 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x14
	::System::Single Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A24888DF04C995E_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A24888DF04C995E_1_CLEAR_OFFSET))(this);
	}
};

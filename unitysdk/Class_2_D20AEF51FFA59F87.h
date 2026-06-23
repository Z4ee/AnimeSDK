#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_2_D20AEF51FFA59F87__CTOR_OFFSET UNITYSDK_OFFSET(0x13EB3300)

inline static constexpr unsigned int Class_2_D20AEF51FFA59F87_TypeDefinitionIndex = 59223;

class Class_2_D20AEF51FFA59F87 : public ::Class_1_83665B095F1535B5_1
{
public:
	::System::Single Field_2_3; // 0x18
	::System::Boolean Field_2_4; // 0x1C
	::System::Single Field_2_2; // 0x20
	::UnityEngine::Vector2 Field_2_1; // 0x24
	::UnityEngine::Color Field_2_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D20AEF51FFA59F87__CTOR_OFFSET))(this);
	}
};

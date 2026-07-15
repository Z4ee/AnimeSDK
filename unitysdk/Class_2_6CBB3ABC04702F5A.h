#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_945ACFB1FEBC7A2C_21.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define CLASS_2_6CBB3ABC04702F5A__CTOR_OFFSET UNITYSDK_OFFSET(0x163A4550)

inline static constexpr unsigned int Class_2_6CBB3ABC04702F5A_TypeDefinitionIndex = 53081;

class Class_2_6CBB3ABC04702F5A : public ::Class_1_945ACFB1FEBC7A2C_21
{
public:
	::RPG::GameCore::FixPoint Field_2_0; // 0x18
	::RPG::GameCore::FixPoint Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CBB3ABC04702F5A__CTOR_OFFSET))(this);
	}
};

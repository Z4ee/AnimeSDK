#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/GameMode/DiceCombatGameMode.h"

class Class_1_47EB23CB5C4B2615_2;
class Class_1_877AA22B04AFB81F_1;

#define CLASS_3_5B3989A017DD01E5__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBBA00)

inline static constexpr unsigned int Class_3_5B3989A017DD01E5_TypeDefinitionIndex = 34066;

class Class_3_5B3989A017DD01E5 : public ::Class_2_A48F3719AA1CF200
{
public:
	::Class_1_877AA22B04AFB81F_1* Field_3_3; // 0x18
	::Class_1_47EB23CB5C4B2615_2* Field_3_2; // 0x20
	::System::UInt32 Field_3_1; // 0x28
	::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode Field_3_0; // 0x2C
	::System::Boolean Field_3_4; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B3989A017DD01E5__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2DEF33878A213259.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/GameMode/DiceCombatGameMode.h"

class Class_1_47EB23CB5C4B2615_2;
class Class_1_877AA22B04AFB81F_1;

#define CLASS_3_5B3989A017DD01E5__CTOR_OFFSET UNITYSDK_OFFSET(0x14A61F30)

inline static constexpr unsigned int Class_3_5B3989A017DD01E5_TypeDefinitionIndex = 34730;

class Class_3_5B3989A017DD01E5 : public ::Class_2_2DEF33878A213259
{
public:
	::Class_1_877AA22B04AFB81F_1* Field_3_0; // 0x28
	::Class_1_47EB23CB5C4B2615_2* Field_3_1; // 0x30
	::System::UInt32 Field_3_2; // 0x38
	::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode Field_3_3; // 0x3C
	::System::Boolean Field_3_4; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B3989A017DD01E5__CTOR_OFFSET))(this);
	}
};

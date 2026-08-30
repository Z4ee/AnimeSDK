#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2DEF33878A213259.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/GameMode/DiceCombatGameMode.h"

class Class_1_47EB23CB5C4B2615_2;
class Class_1_877AA22B04AFB81F_1;

#define CLASS_3_5B3989A017DD01E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0307E0)

inline static constexpr unsigned int Class_3_5B3989A017DD01E5_TypeDefinitionIndex = 35591;

class Class_3_5B3989A017DD01E5 : public ::Class_2_2DEF33878A213259
{
public:
	::Class_1_47EB23CB5C4B2615_2* BPCDCCAJIMK; // 0x28
	::Class_1_877AA22B04AFB81F_1* FIDJLAKNAJD; // 0x30
	::System::Boolean LHECEINIKOA; // 0x38
	::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode HKEACDBJCOD; // 0x39
	::System::UInt32 DOBKKDIECDO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B3989A017DD01E5__CTOR_OFFSET))(this);
	}
};

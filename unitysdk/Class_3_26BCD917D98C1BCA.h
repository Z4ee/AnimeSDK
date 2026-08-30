#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_77C1911C23AA7BB5.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/GameMode/DiceCombatGameMode.h"

class Class_1_47EB23CB5C4B2615;
class Class_1_877AA22B04AFB81F;

#define CLASS_3_26BCD917D98C1BCA__CTOR_OFFSET UNITYSDK_OFFSET(0x196F8CA0)

inline static constexpr unsigned int Class_3_26BCD917D98C1BCA_TypeDefinitionIndex = 35585;

class Class_3_26BCD917D98C1BCA : public ::Class_2_77C1911C23AA7BB5
{
public:
	::Class_1_877AA22B04AFB81F* FIDJLAKNAJD; // 0x28
	::Class_1_47EB23CB5C4B2615* BPCDCCAJIMK; // 0x30
	::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode HKEACDBJCOD; // 0x38
	::System::UInt32 DOBKKDIECDO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26BCD917D98C1BCA__CTOR_OFFSET))(this);
	}
};

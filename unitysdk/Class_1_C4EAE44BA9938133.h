#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_9C8BB23B0435A836;
class Class_3_C71DDDA66421C541;
namespace RPG::Client::DiceCombat { class DiceCombatBattleDiceDisplayInfo; }

#define CLASS_1_C4EAE44BA9938133_METHOD_1_2D1C0BB7FCA9A440_OFFSET UNITYSDK_OFFSET(0x19AA81E0)
#define CLASS_1_C4EAE44BA9938133_METHOD_1_AEBB76D4BBAFBE08_OFFSET UNITYSDK_OFFSET(0x19AA8080)
#define CLASS_1_C4EAE44BA9938133_METHOD_1_CDED8E2EC6304605_OFFSET UNITYSDK_OFFSET(0x19AA7FD0)
#define CLASS_1_C4EAE44BA9938133__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA7F80)

inline static constexpr unsigned int Class_1_C4EAE44BA9938133_TypeDefinitionIndex = 75562;

class Class_1_C4EAE44BA9938133 : public ::System::Object
{
public:
	::Class_3_C71DDDA66421C541* FLMODBLFAGD; // 0x10
	::Class_1_0E117AC86D8E5BCA* EFCOEOGMHPO; // 0x18

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*))((::PBYTE)hIl2Cpp + CLASS_1_C4EAE44BA9938133__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo* Method_1_CDED8E2EC6304605(::Class_1_9C8BB23B0435A836* a1, ::System::Single a2)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*(*)(::PVOID, ::Class_1_9C8BB23B0435A836*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C4EAE44BA9938133_METHOD_1_CDED8E2EC6304605_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AEBB76D4BBAFBE08(::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo* a1, ::Class_1_9C8BB23B0435A836* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*, ::Class_1_9C8BB23B0435A836*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C4EAE44BA9938133_METHOD_1_AEBB76D4BBAFBE08_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2D1C0BB7FCA9A440(::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo* a1, ::Class_1_9C8BB23B0435A836* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_C4EAE44BA9938133_METHOD_1_2D1C0BB7FCA9A440_OFFSET))(this, a1, a2);
	}
};

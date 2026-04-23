#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_9C8BB23B0435A836;
class Class_3_3BDFAF4A2AB65026;
namespace RPG::Client::DiceCombat { class DiceCombatBattleDiceDisplayInfo; }

#define CLASS_1_2D68A87A07F4F87E_METHOD_1_2565077EC2A267E6_OFFSET UNITYSDK_OFFSET(0x9A338E0)
#define CLASS_1_2D68A87A07F4F87E_METHOD_1_79E5CD3AC56840AF_OFFSET UNITYSDK_OFFSET(0x9A337F0)
#define CLASS_1_2D68A87A07F4F87E_METHOD_1_CDED8E2EC6304605_OFFSET UNITYSDK_OFFSET(0x9A33740)
#define CLASS_1_2D68A87A07F4F87E__CTOR_OFFSET UNITYSDK_OFFSET(0x9A336F0)

inline static constexpr unsigned int Class_1_2D68A87A07F4F87E_TypeDefinitionIndex = 69801;

class Class_1_2D68A87A07F4F87E : public ::System::Object
{
public:
	::Class_3_3BDFAF4A2AB65026* Field_1_0; // 0x10
	::Class_1_0E117AC86D8E5BCA* Field_1_1; // 0x18

	::System::Void _ctor(::Class_3_3BDFAF4A2AB65026* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3BDFAF4A2AB65026*))((::PBYTE)hIl2Cpp + CLASS_1_2D68A87A07F4F87E__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo* Method_1_CDED8E2EC6304605(::Class_1_9C8BB23B0435A836* a1, ::System::Single a2)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*(*)(::PVOID, ::Class_1_9C8BB23B0435A836*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2D68A87A07F4F87E_METHOD_1_CDED8E2EC6304605_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79E5CD3AC56840AF(::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo* a1, ::Class_1_9C8BB23B0435A836* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*, ::Class_1_9C8BB23B0435A836*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2D68A87A07F4F87E_METHOD_1_79E5CD3AC56840AF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2565077EC2A267E6(::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo* a1, ::Class_1_9C8BB23B0435A836* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_2D68A87A07F4F87E_METHOD_1_2565077EC2A267E6_OFFSET))(this, a1, a2);
	}
};

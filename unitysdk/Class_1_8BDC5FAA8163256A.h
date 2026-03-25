#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_2_099B78418029B3B1_1;
class Class_2_569DE47525C5FD32;
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConditionConfig; }
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConfig; }

#define CLASS_1_8BDC5FAA8163256A_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166C5380)
#define CLASS_1_8BDC5FAA8163256A_METHOD_1_3EBB1A2EC7D2D691_OFFSET UNITYSDK_OFFSET(0x166C64E0)
#define CLASS_1_8BDC5FAA8163256A_METHOD_1_6F2524CDB9967CA8_OFFSET UNITYSDK_OFFSET(0x166A1120)
#define CLASS_1_8BDC5FAA8163256A_METHOD_1_7C245F04971F3BBA_OFFSET UNITYSDK_OFFSET(0x166A12A0)
#define CLASS_1_8BDC5FAA8163256A_METHOD_1_A551ECB81385BE15_OFFSET UNITYSDK_OFFSET(0x166C6F30)
#define CLASS_1_8BDC5FAA8163256A_METHOD_1_CB23F02EBB7FF924_OFFSET UNITYSDK_OFFSET(0x166C7170)
#define CLASS_1_8BDC5FAA8163256A_METHOD_1_D5E8A3A989701013_OFFSET UNITYSDK_OFFSET(0x166C6B50)
#define CLASS_1_8BDC5FAA8163256A_METHOD_1_E4799F441BE6E78F_OFFSET UNITYSDK_OFFSET(0x166C6770)
#define CLASS_1_8BDC5FAA8163256A__CTOR_OFFSET UNITYSDK_OFFSET(0x166C64D0)

inline static constexpr unsigned int Class_1_8BDC5FAA8163256A_TypeDefinitionIndex = 28523;

class Class_1_8BDC5FAA8163256A : public ::System::Object
{
public:
	::Class_2_099B78418029B3B1_1* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_25* Field_1_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_25* a1, ::Class_2_099B78418029B3B1_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::Class_2_099B78418029B3B1_1*))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A_INITIALIZE_OFFSET))(this);
	}

	::System::Boolean Method_1_3EBB1A2EC7D2D691(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A_METHOD_1_3EBB1A2EC7D2D691_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatColorfulDiceSkillConfig* Method_1_E4799F441BE6E78F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatColorfulDiceSkillConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A_METHOD_1_E4799F441BE6E78F_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig* Method_1_D5E8A3A989701013(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A_METHOD_1_D5E8A3A989701013_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_A551ECB81385BE15(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A_METHOD_1_A551ECB81385BE15_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7C245F04971F3BBA(::System::UInt32 a1, ::Class_2_569DE47525C5FD32* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A_METHOD_1_7C245F04971F3BBA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CB23F02EBB7FF924(::System::UInt32 a1, ::Class_2_569DE47525C5FD32* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A_METHOD_1_CB23F02EBB7FF924_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6F2524CDB9967CA8(::Class_2_569DE47525C5FD32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_569DE47525C5FD32*))((::PBYTE)hIl2Cpp + CLASS_1_8BDC5FAA8163256A_METHOD_1_6F2524CDB9967CA8_OFFSET))(this, a1);
	}
};

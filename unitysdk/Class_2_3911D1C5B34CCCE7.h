#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_3911D1C5B34CCCE7_State.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBattleResult; }

#define CLASS_2_3911D1C5B34CCCE7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1705F7D0)
#define CLASS_2_3911D1C5B34CCCE7_METHOD_2_40BEC38B87C7AD62_OFFSET UNITYSDK_OFFSET(0x1705FDD0)
#define CLASS_2_3911D1C5B34CCCE7_METHOD_2_FE19A9C4350703AC_OFFSET UNITYSDK_OFFSET(0x17060060)
#define CLASS_2_3911D1C5B34CCCE7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1705F930)
#define CLASS_2_3911D1C5B34CCCE7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1705FBB0)
#define CLASS_2_3911D1C5B34CCCE7_TICK_OFFSET UNITYSDK_OFFSET(0x1705FCC0)
#define CLASS_2_3911D1C5B34CCCE7__CTOR_OFFSET UNITYSDK_OFFSET(0x1705F6F0)

inline static constexpr unsigned int Class_2_3911D1C5B34CCCE7_TypeDefinitionIndex = 59023;

class Class_2_3911D1C5B34CCCE7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitBattleResult* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* GIKDFLDAMMG; // 0x20
	::Class_3_07C3C4D2990C49EE* CFPDPMEKCPJ; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::Class_3_07C3C4D2990C49EE* EHOAHCNLNAN; // 0x38
	::Class_2_3911D1C5B34CCCE7_State GFHMLIGMANO; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitBattleResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitBattleResult*))((::PBYTE)hIl2Cpp + CLASS_2_3911D1C5B34CCCE7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3911D1C5B34CCCE7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3911D1C5B34CCCE7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3911D1C5B34CCCE7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3911D1C5B34CCCE7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_40BEC38B87C7AD62(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_3911D1C5B34CCCE7_METHOD_2_40BEC38B87C7AD62_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE19A9C4350703AC(::RPG::GameCore::BattleResultState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + CLASS_2_3911D1C5B34CCCE7_METHOD_2_FE19A9C4350703AC_OFFSET))(this, a1);
	}
};

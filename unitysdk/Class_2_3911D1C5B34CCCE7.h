#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_3911D1C5B34CCCE7_State.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBattleResult; }

#define CLASS_2_3911D1C5B34CCCE7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC460B0)
#define CLASS_2_3911D1C5B34CCCE7_METHOD_2_40BEC38B87C7AD62_OFFSET UNITYSDK_OFFSET(0xAC46590)
#define CLASS_2_3911D1C5B34CCCE7_METHOD_2_FE19A9C4350703AC_OFFSET UNITYSDK_OFFSET(0xAC46810)
#define CLASS_2_3911D1C5B34CCCE7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC46140)
#define CLASS_2_3911D1C5B34CCCE7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAC46390)
#define CLASS_2_3911D1C5B34CCCE7_TICK_OFFSET UNITYSDK_OFFSET(0xAC46480)
#define CLASS_2_3911D1C5B34CCCE7__CTOR_OFFSET UNITYSDK_OFFSET(0xAC45FD0)

inline static constexpr unsigned int Class_2_3911D1C5B34CCCE7_TypeDefinitionIndex = 47544;

class Class_2_3911D1C5B34CCCE7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x18
	::RPG::GameCore::WaitBattleResult* Field_2_4; // 0x20
	::RPG::GameCore::TaskContext* Field_2_5; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_1; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x38
	::Class_2_3911D1C5B34CCCE7_State Field_2_0; // 0x40

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

	::System::Void Method_2_40BEC38B87C7AD62(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_3911D1C5B34CCCE7_METHOD_2_40BEC38B87C7AD62_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE19A9C4350703AC(::RPG::GameCore::BattleResultState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + CLASS_2_3911D1C5B34CCCE7_METHOD_2_FE19A9C4350703AC_OFFSET))(this, a1);
	}
};

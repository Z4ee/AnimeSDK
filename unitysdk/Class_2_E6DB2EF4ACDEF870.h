#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class BattleSelectHouguDialogInitParam; }
namespace RPG::GameCore { class ShowArcherProjectionSelectInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E6DB2EF4ACDEF870_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B45370)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x11B44F50)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_1F2D766A8C220114_OFFSET UNITYSDK_OFFSET(0x11B45740)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0x11B455D0)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11B456D0)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_55157FBA4997D865_OFFSET UNITYSDK_OFFSET(0x11B45250)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_6F6E2DBCFEEBC723_OFFSET UNITYSDK_OFFSET(0x11B45010)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B451B0)
#define CLASS_2_E6DB2EF4ACDEF870_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B44850)
#define CLASS_2_E6DB2EF4ACDEF870_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11B45200)
#define CLASS_2_E6DB2EF4ACDEF870_TICK_OFFSET UNITYSDK_OFFSET(0x11B45410)
#define CLASS_2_E6DB2EF4ACDEF870__CTOR_OFFSET UNITYSDK_OFFSET(0x11B44840)

inline static constexpr unsigned int Class_2_E6DB2EF4ACDEF870_TypeDefinitionIndex = 51263;

class Class_2_E6DB2EF4ACDEF870 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowArcherProjectionSelectInBattle* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::BattleSelectHouguDialogInitParam* Field_2_2; // 0x28
	::RPG::Client::LuaUIController* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowArcherProjectionSelectInBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowArcherProjectionSelectInBattle*))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_55157FBA4997D865()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_55157FBA4997D865_OFFSET))(this);
	}

	::System::Void Method_2_6F6E2DBCFEEBC723(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_6F6E2DBCFEEBC723_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1F2D766A8C220114(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_1F2D766A8C220114_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_2D0EF4C8B528FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_0865E94460F11643_OFFSET))(this);
	}
};

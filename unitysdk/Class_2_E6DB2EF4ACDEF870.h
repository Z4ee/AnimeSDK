#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class BattleSelectHouguDialogInitParam; }
namespace RPG::GameCore { class ShowArcherProjectionSelectInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E6DB2EF4ACDEF870_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB28E280)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xB28DE10)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB28E5C0)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_611AABB501CB37AE_OFFSET UNITYSDK_OFFSET(0xB28DED0)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_933B770C8AC988CB_OFFSET UNITYSDK_OFFSET(0xB28E630)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_9725A4CA0CFEC673_OFFSET UNITYSDK_OFFSET(0xB28E130)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_AA3A7001F3F01E27_OFFSET UNITYSDK_OFFSET(0xB28E4C0)
#define CLASS_2_E6DB2EF4ACDEF870_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB28E090)
#define CLASS_2_E6DB2EF4ACDEF870_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB28D6E0)
#define CLASS_2_E6DB2EF4ACDEF870_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB28E0E0)
#define CLASS_2_E6DB2EF4ACDEF870_TICK_OFFSET UNITYSDK_OFFSET(0xB28E300)
#define CLASS_2_E6DB2EF4ACDEF870__CTOR_OFFSET UNITYSDK_OFFSET(0xB28D6D0)

inline static constexpr unsigned int Class_2_E6DB2EF4ACDEF870_TypeDefinitionIndex = 51935;

class Class_2_E6DB2EF4ACDEF870 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::BattleSelectHouguDialogInitParam* Field_2_0; // 0x18
	::RPG::GameCore::ShowArcherProjectionSelectInBattle* Field_2_1; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30

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

	::System::Void Method_2_9725A4CA0CFEC673()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_9725A4CA0CFEC673_OFFSET))(this);
	}

	::System::Void Method_2_611AABB501CB37AE(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_611AABB501CB37AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_933B770C8AC988CB(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_933B770C8AC988CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA3A7001F3F01E27(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_AA3A7001F3F01E27_OFFSET))(this, a1);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6DB2EF4ACDEF870_METHOD_2_0865E94460F11643_OFFSET))(this);
	}
};

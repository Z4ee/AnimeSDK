#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_547;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPerformanceEnd; }

#define CLASS_2_CBAB1DBCB9F76F94_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156759B0)
#define CLASS_2_CBAB1DBCB9F76F94_METHOD_2_538A4AD7B1F24D2D_OFFSET UNITYSDK_OFFSET(0x15675D00)
#define CLASS_2_CBAB1DBCB9F76F94_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15675AE0)
#define CLASS_2_CBAB1DBCB9F76F94_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15675BC0)
#define CLASS_2_CBAB1DBCB9F76F94_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x15675A90)
#define CLASS_2_CBAB1DBCB9F76F94_TICK_OFFSET UNITYSDK_OFFSET(0x15675CA0)
#define CLASS_2_CBAB1DBCB9F76F94__CTOR_OFFSET UNITYSDK_OFFSET(0x156759A0)

inline static constexpr unsigned int Class_2_CBAB1DBCB9F76F94_TypeDefinitionIndex = 58908;

class Class_2_CBAB1DBCB9F76F94 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_1_5F51D4049EA87B7B* CJHJNLGOJLA; // 0x20
	::System::Boolean NCDPNHDBKKG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPerformanceEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPerformanceEnd*))((::PBYTE)hIl2Cpp + CLASS_2_CBAB1DBCB9F76F94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBAB1DBCB9F76F94_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_CBAB1DBCB9F76F94_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBAB1DBCB9F76F94_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBAB1DBCB9F76F94_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CBAB1DBCB9F76F94_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_538A4AD7B1F24D2D(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_CBAB1DBCB9F76F94_METHOD_2_538A4AD7B1F24D2D_OFFSET))(this, a1);
	}
};

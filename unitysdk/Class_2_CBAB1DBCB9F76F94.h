#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPerformanceEnd; }

#define CLASS_2_CBAB1DBCB9F76F94_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C5C4B0)
#define CLASS_2_CBAB1DBCB9F76F94_METHOD_2_538A4AD7B1F24D2D_OFFSET UNITYSDK_OFFSET(0x17C5C800)
#define CLASS_2_CBAB1DBCB9F76F94_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C5C5E0)
#define CLASS_2_CBAB1DBCB9F76F94_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C5C6C0)
#define CLASS_2_CBAB1DBCB9F76F94_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x17C5C590)
#define CLASS_2_CBAB1DBCB9F76F94_TICK_OFFSET UNITYSDK_OFFSET(0x17C5C7A0)
#define CLASS_2_CBAB1DBCB9F76F94__CTOR_OFFSET UNITYSDK_OFFSET(0x17C5C4A0)

inline static constexpr unsigned int Class_2_CBAB1DBCB9F76F94_TypeDefinitionIndex = 56274;

class Class_2_CBAB1DBCB9F76F94 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28

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

	::System::Void Method_2_538A4AD7B1F24D2D(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_CBAB1DBCB9F76F94_METHOD_2_538A4AD7B1F24D2D_OFFSET))(this, a1);
	}
};

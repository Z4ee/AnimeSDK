#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ShowMazeBuffSelectInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A3883F8664D85716_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15288390)
#define CLASS_2_A3883F8664D85716_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x152884D0)
#define CLASS_2_A3883F8664D85716_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x152882A0)
#define CLASS_2_A3883F8664D85716_METHOD_2_D636A46235ACB410_OFFSET UNITYSDK_OFFSET(0x15288580)
#define CLASS_2_A3883F8664D85716_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15287DD0)
#define CLASS_2_A3883F8664D85716_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15288210)
#define CLASS_2_A3883F8664D85716_TICK_OFFSET UNITYSDK_OFFSET(0x15288470)
#define CLASS_2_A3883F8664D85716__CTOR_OFFSET UNITYSDK_OFFSET(0x15287D10)

inline static constexpr unsigned int Class_2_A3883F8664D85716_TypeDefinitionIndex = 58819;

class Class_2_A3883F8664D85716 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_07C3C4D2990C49EE* CHOOMNGLJHI; // 0x20
	::RPG::GameCore::ShowMazeBuffSelectInBattle* OFKGLJOAMLD; // 0x28
	::Il2CppArray<::System::UInt32>* NKIBAOGMADC; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMazeBuffSelectInBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMazeBuffSelectInBattle*))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_D636A46235ACB410(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_METHOD_2_D636A46235ACB410_OFFSET))(this, a1);
	}
};

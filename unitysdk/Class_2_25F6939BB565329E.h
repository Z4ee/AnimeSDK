#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_547;
namespace RPG::GameCore { class ConvinceWaitAllTurnFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_25F6939BB565329E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1641E960)
#define CLASS_2_25F6939BB565329E_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1641E850)
#define CLASS_2_25F6939BB565329E_METHOD_2_8DA3B55C33C4DEBB_OFFSET UNITYSDK_OFFSET(0x1641EC40)
#define CLASS_2_25F6939BB565329E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1641EB40)
#define CLASS_2_25F6939BB565329E_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1641E9B0)
#define CLASS_2_25F6939BB565329E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1641EAC0)
#define CLASS_2_25F6939BB565329E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1641EB90)
#define CLASS_2_25F6939BB565329E_TICK_OFFSET UNITYSDK_OFFSET(0x1641EBE0)
#define CLASS_2_25F6939BB565329E__CTOR_OFFSET UNITYSDK_OFFSET(0x1641E7F0)

inline static constexpr unsigned int Class_2_25F6939BB565329E_TypeDefinitionIndex = 52715;

class Class_2_25F6939BB565329E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ConvinceWaitAllTurnFinish* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::String* IFDOLFKAOLA; // 0x28
	::System::Boolean NCDPNHDBKKG; // 0x30
	::System::Boolean GGJECIOIBCJ; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceWaitAllTurnFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceWaitAllTurnFinish*))((::PBYTE)hIl2Cpp + CLASS_2_25F6939BB565329E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25F6939BB565329E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25F6939BB565329E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25F6939BB565329E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_25F6939BB565329E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25F6939BB565329E_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25F6939BB565329E_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_8DA3B55C33C4DEBB(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_25F6939BB565329E_METHOD_2_8DA3B55C33C4DEBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25F6939BB565329E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

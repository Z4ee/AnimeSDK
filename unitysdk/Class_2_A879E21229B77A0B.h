#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSkillInput; }
namespace System { class Object; }

#define CLASS_2_A879E21229B77A0B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB70AA10)
#define CLASS_2_A879E21229B77A0B_METHOD_2_31E618AE21A5CB2E_OFFSET UNITYSDK_OFFSET(0xB70BF10)
#define CLASS_2_A879E21229B77A0B_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB70AC20)
#define CLASS_2_A879E21229B77A0B_METHOD_2_6BEBCB897EA60343_OFFSET UNITYSDK_OFFSET(0xB70B8C0)
#define CLASS_2_A879E21229B77A0B_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB70AF50)
#define CLASS_2_A879E21229B77A0B_METHOD_2_A441A777C017923D_OFFSET UNITYSDK_OFFSET(0xB70B420)
#define CLASS_2_A879E21229B77A0B_METHOD_2_DE8AAC3B400CA5F2_OFFSET UNITYSDK_OFFSET(0xB70BB20)
#define CLASS_2_A879E21229B77A0B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB70AEA0)
#define CLASS_2_A879E21229B77A0B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB70B1D0)
#define CLASS_2_A879E21229B77A0B_TICK_OFFSET UNITYSDK_OFFSET(0xB70B230)
#define CLASS_2_A879E21229B77A0B__CTOR_OFFSET UNITYSDK_OFFSET(0xB70A890)

inline static constexpr unsigned int Class_2_A879E21229B77A0B_TypeDefinitionIndex = 59076;

class Class_2_A879E21229B77A0B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* INIMDAHODMJ; // 0x18
	::Class_3_07C3C4D2990C49EE* DJHFAMBKLND; // 0x20
	::RPG::GameCore::WaitSkillInput* OFKGLJOAMLD; // 0x28
	::Class_3_07C3C4D2990C49EE* MEBALENPILJ; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::RPG::GameCore::AdventureSkillType NFPKMFGMCIC; // 0x40
	::System::Single EFKCJMFANEB; // 0x44
	::System::Boolean BJIMNGNKDGD; // 0x48
	::System::Single DKOFFPPGEFI; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSkillInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSkillInput*))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BEBCB897EA60343(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B_METHOD_2_6BEBCB897EA60343_OFFSET))(this, a1);
	}

	::System::Void Method_2_A441A777C017923D(::RPG::GameCore::AdventureSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillType))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B_METHOD_2_A441A777C017923D_OFFSET))(this, a1);
	}

	::System::Void Method_2_31E618AE21A5CB2E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B_METHOD_2_31E618AE21A5CB2E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Boolean Method_2_DE8AAC3B400CA5F2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A879E21229B77A0B_METHOD_2_DE8AAC3B400CA5F2_OFFSET))(this);
	}
};

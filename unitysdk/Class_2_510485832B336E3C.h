#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_727;
class Class_1_1CD633F3449963C2;
class Class_1_BAD2D343EF0045A3;
namespace InControl { class PlayerAction; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerAction; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_510485832B336E3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1550B2C0)
#define CLASS_2_510485832B336E3C_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x1550C1D0)
#define CLASS_2_510485832B336E3C_METHOD_2_1B819E8662A63D41_OFFSET UNITYSDK_OFFSET(0x1550B7A0)
#define CLASS_2_510485832B336E3C_METHOD_2_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x1550BA10)
#define CLASS_2_510485832B336E3C_METHOD_2_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0x1550B570)
#define CLASS_2_510485832B336E3C_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x1550B340)
#define CLASS_2_510485832B336E3C_METHOD_2_901D723D57DABE53_OFFSET UNITYSDK_OFFSET(0x1550C220)
#define CLASS_2_510485832B336E3C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1550C4C0)
#define CLASS_2_510485832B336E3C_METHOD_2_F1BA8E0C07CE9C18_OFFSET UNITYSDK_OFFSET(0x1550B8B0)
#define CLASS_2_510485832B336E3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1550B390)
#define CLASS_2_510485832B336E3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1550B400)
#define CLASS_2_510485832B336E3C_TICK_OFFSET UNITYSDK_OFFSET(0x1550B480)
#define CLASS_2_510485832B336E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1550B2B0)

inline static constexpr unsigned int Class_2_510485832B336E3C_TypeDefinitionIndex = 58912;

class Class_2_510485832B336E3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPlayerAction* OFKGLJOAMLD; // 0x18
	::System::Action* FBFAFHIINLI; // 0x20
	::Class_1_1CD633F3449963C2* EIFGEIFAGNM; // 0x28
	::InControl::PlayerAction* CAFNPBJBOEG; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::Class_1_BAD2D343EF0045A3* EMCDEOIEFEA; // 0x40
	::System::Boolean HCEDHPFKPAH; // 0x48
	::System::Single GLHFPIGMBLN; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_62165C025F5C0B19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_62165C025F5C0B19_OFFSET))(this);
	}

	::System::Void Method_2_1B819E8662A63D41(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_1B819E8662A63D41_OFFSET))(this, a1);
	}

	::System::Void Method_2_F1BA8E0C07CE9C18(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_F1BA8E0C07CE9C18_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_901D723D57DABE53(::Class_0_16E4307DCC419505_727* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_727*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_901D723D57DABE53_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_7F4EBEC55EBE2D81_OFFSET))(this);
	}
};

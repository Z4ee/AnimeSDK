#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_636;
class Class_1_1CD633F3449963C2;
class Class_1_BAD2D343EF0045A3;
namespace InControl { class PlayerAction; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerAction; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_510485832B336E3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1526D970)
#define CLASS_2_510485832B336E3C_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x1526EA30)
#define CLASS_2_510485832B336E3C_METHOD_2_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x1526E270)
#define CLASS_2_510485832B336E3C_METHOD_2_7DB540F7EC4E5E2C_OFFSET UNITYSDK_OFFSET(0x1526DEF0)
#define CLASS_2_510485832B336E3C_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x1526D9F0)
#define CLASS_2_510485832B336E3C_METHOD_2_901D723D57DABE53_OFFSET UNITYSDK_OFFSET(0x1526EA80)
#define CLASS_2_510485832B336E3C_METHOD_2_9E21A50FD382EB63_OFFSET UNITYSDK_OFFSET(0x1526E090)
#define CLASS_2_510485832B336E3C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1526ED20)
#define CLASS_2_510485832B336E3C_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x1526DC30)
#define CLASS_2_510485832B336E3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1526DA40)
#define CLASS_2_510485832B336E3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1526DAB0)
#define CLASS_2_510485832B336E3C_TICK_OFFSET UNITYSDK_OFFSET(0x1526DB40)
#define CLASS_2_510485832B336E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1526D960)

inline static constexpr unsigned int Class_2_510485832B336E3C_TypeDefinitionIndex = 59060;

class Class_2_510485832B336E3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_1CD633F3449963C2* EIFGEIFAGNM; // 0x18
	::Class_1_BAD2D343EF0045A3* EMCDEOIEFEA; // 0x20
	::InControl::PlayerAction* CAFNPBJBOEG; // 0x28
	::RPG::GameCore::WaitPlayerAction* OFKGLJOAMLD; // 0x30
	::System::Action* FBFAFHIINLI; // 0x38
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
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

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_7DB540F7EC4E5E2C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_7DB540F7EC4E5E2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E21A50FD382EB63(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_9E21A50FD382EB63_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_901D723D57DABE53(::Class_0_16E4307DCC419505_636* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_636*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_901D723D57DABE53_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_7F4EBEC55EBE2D81_OFFSET))(this);
	}
};

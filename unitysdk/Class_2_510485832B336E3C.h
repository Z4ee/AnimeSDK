#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_601;
class Class_1_1CD633F3449963C2;
class Class_1_53F0644B4D7513CF;
namespace InControl { class PlayerAction; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerAction; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_510485832B336E3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16868760)
#define CLASS_2_510485832B336E3C_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x16869A10)
#define CLASS_2_510485832B336E3C_METHOD_2_6044DE137CAC4D46_OFFSET UNITYSDK_OFFSET(0x16868CB0)
#define CLASS_2_510485832B336E3C_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x16868A20)
#define CLASS_2_510485832B336E3C_METHOD_2_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x168687E0)
#define CLASS_2_510485832B336E3C_METHOD_2_71170E420FCC0F61_OFFSET UNITYSDK_OFFSET(0x168690A0)
#define CLASS_2_510485832B336E3C_METHOD_2_9F88E35FE931B81A_OFFSET UNITYSDK_OFFSET(0x16868E90)
#define CLASS_2_510485832B336E3C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16869CE0)
#define CLASS_2_510485832B336E3C_METHOD_2_C76E6514041E2A65_OFFSET UNITYSDK_OFFSET(0x16869A60)
#define CLASS_2_510485832B336E3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16868830)
#define CLASS_2_510485832B336E3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x168688A0)
#define CLASS_2_510485832B336E3C_TICK_OFFSET UNITYSDK_OFFSET(0x16868930)
#define CLASS_2_510485832B336E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x16868750)

inline static constexpr unsigned int Class_2_510485832B336E3C_TypeDefinitionIndex = 56278;

class Class_2_510485832B336E3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPlayerAction* Field_2_0; // 0x18
	::InControl::PlayerAction* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_1_53F0644B4D7513CF* Field_2_3; // 0x30
	::System::Action* Field_2_4; // 0x38
	::Class_1_1CD633F3449963C2* Field_2_5; // 0x40
	::System::Single Field_2_6; // 0x48
	::System::Boolean Field_2_7; // 0x4C

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

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_2_6044DE137CAC4D46(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_6044DE137CAC4D46_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F88E35FE931B81A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_9F88E35FE931B81A_OFFSET))(this, a1);
	}

	::System::Void Method_2_71170E420FCC0F61(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_71170E420FCC0F61_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_C76E6514041E2A65(::Class_0_16E4307DCC419505_601* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_601*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_C76E6514041E2A65_OFFSET))(this, a1);
	}

	::System::Void Method_2_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_61929A3103595552_OFFSET))(this);
	}
};

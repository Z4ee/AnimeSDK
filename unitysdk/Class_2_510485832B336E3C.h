#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_566;
class Class_1_1CD633F3449963C2;
class Class_1_53F0644B4D7513CF;
namespace InControl { class PlayerAction; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerAction; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_510485832B336E3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13514AA0)
#define CLASS_2_510485832B336E3C_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x13515E10)
#define CLASS_2_510485832B336E3C_METHOD_2_360C42C42BC8862F_OFFSET UNITYSDK_OFFSET(0x13515020)
#define CLASS_2_510485832B336E3C_METHOD_2_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x13515470)
#define CLASS_2_510485832B336E3C_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x13514B20)
#define CLASS_2_510485832B336E3C_METHOD_2_9E21A50FD382EB63_OFFSET UNITYSDK_OFFSET(0x13515230)
#define CLASS_2_510485832B336E3C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13515EE0)
#define CLASS_2_510485832B336E3C_METHOD_2_C76E6514041E2A65_OFFSET UNITYSDK_OFFSET(0x13515E60)
#define CLASS_2_510485832B336E3C_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x13514D60)
#define CLASS_2_510485832B336E3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13514B70)
#define CLASS_2_510485832B336E3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13514BE0)
#define CLASS_2_510485832B336E3C_TICK_OFFSET UNITYSDK_OFFSET(0x13514C70)
#define CLASS_2_510485832B336E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x13514A90)

inline static constexpr unsigned int Class_2_510485832B336E3C_TypeDefinitionIndex = 55045;

class Class_2_510485832B336E3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_1CD633F3449963C2* Field_2_0; // 0x18
	::RPG::GameCore::WaitPlayerAction* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Action* Field_2_3; // 0x30
	::Class_1_53F0644B4D7513CF* Field_2_4; // 0x38
	::InControl::PlayerAction* Field_2_5; // 0x40
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

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_360C42C42BC8862F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_360C42C42BC8862F_OFFSET))(this, a1);
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

	::System::Void Method_2_C76E6514041E2A65(::Class_0_16E4307DCC419505_566* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_566*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_C76E6514041E2A65_OFFSET))(this, a1);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}
};

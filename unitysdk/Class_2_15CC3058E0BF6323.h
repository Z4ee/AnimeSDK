#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/RPG/GameCore/Rtcb_BreakActionOption.h"

class Class_0_16E4307DCC419505_412;
class Class_1_05E595DC72CB83CA;
class Class_2_0CFF1B97C0373261;
class Class_2_123F4D9119B4969B;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_15CC3058E0BF6323_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1198F000)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1198FEE0)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1198FE80)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_67EFB5573D8C81F5_OFFSET UNITYSDK_OFFSET(0x1198F0C0)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_75E8876EF0DF6D1F_OFFSET UNITYSDK_OFFSET(0x1198FA40)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_7EF0F86F3B6EE03E_OFFSET UNITYSDK_OFFSET(0x1198F5B0)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_99768A3992475A51_OFFSET UNITYSDK_OFFSET(0x1198F640)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_9B0396F10306AE5E_OFFSET UNITYSDK_OFFSET(0x1198F160)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_B031494FA6D7B928_OFFSET UNITYSDK_OFFSET(0x1198F1D0)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x1198EF20)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_F3C47AEFC0DCAC2B_OFFSET UNITYSDK_OFFSET(0x1198F340)
#define CLASS_2_15CC3058E0BF6323__CCTOR_OFFSET UNITYSDK_OFFSET(0x1198FE40)
#define CLASS_2_15CC3058E0BF6323__CTOR_OFFSET UNITYSDK_OFFSET(0x1198FE30)

inline static constexpr unsigned int Class_2_15CC3058E0BF6323_TypeDefinitionIndex = 49730;

class Class_2_15CC3058E0BF6323 : public ::Class_1_321489CFFF7B18E7
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_2_2()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_15CC3058E0BF6323_TypeDefinitionIndex)->GetStaticField(0x300D0);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_15CC3058E0BF6323_TypeDefinitionIndex)->GetStaticField(0xC110);
	}
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_15CC3058E0BF6323_TypeDefinitionIndex)->GetStaticField(0xC114);
	}
	::Class_2_0CFF1B97C0373261* Field_2_3; // 0x18
	::Class_0_16E4307DCC419505_412* Field_2_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_CCD88C0D86A5A786_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_67EFB5573D8C81F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_67EFB5573D8C81F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B0396F10306AE5E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::Rtcb_BreakActionOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_9B0396F10306AE5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7EF0F86F3B6EE03E(::Class_1_05E595DC72CB83CA* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_7EF0F86F3B6EE03E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F3C47AEFC0DCAC2B(::RPG::GameCore::Rtcb_BreakActionOption a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_F3C47AEFC0DCAC2B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B031494FA6D7B928(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::Rtcb_BreakActionOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_B031494FA6D7B928_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99768A3992475A51(::RPG::GameCore::Rtcb_BreakActionOption a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_99768A3992475A51_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_75E8876EF0DF6D1F(::Class_2_123F4D9119B4969B* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_2_123F4D9119B4969B*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_75E8876EF0DF6D1F_OFFSET))(a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};

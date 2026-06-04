#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/RPG/GameCore/Rtcb_BreakActionOption.h"

class Class_0_16E4307DCC419505_431;
class Class_1_D8203AFB32E9259C;
class Class_2_0299C3274218DF36;
class Class_2_67C5F2015028CF70;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_15CC3058E0BF6323_METHOD_2_23D900FBEDF3D2CA_OFFSET UNITYSDK_OFFSET(0xB53A410)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB539960)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xB539880)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_4EED62B74CACFD57_OFFSET UNITYSDK_OFFSET(0xB539B30)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB53A850)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB53A7F0)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_67EFB5573D8C81F5_OFFSET UNITYSDK_OFFSET(0xB539A20)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_7EF0F86F3B6EE03E_OFFSET UNITYSDK_OFFSET(0xB539F70)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_99768A3992475A51_OFFSET UNITYSDK_OFFSET(0xB53A000)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_9B0396F10306AE5E_OFFSET UNITYSDK_OFFSET(0xB539AC0)
#define CLASS_2_15CC3058E0BF6323_METHOD_2_F3C47AEFC0DCAC2B_OFFSET UNITYSDK_OFFSET(0xB539D00)
#define CLASS_2_15CC3058E0BF6323__CCTOR_OFFSET UNITYSDK_OFFSET(0xB53A7D0)
#define CLASS_2_15CC3058E0BF6323__CTOR_OFFSET UNITYSDK_OFFSET(0xB53A7C0)

inline static constexpr unsigned int Class_2_15CC3058E0BF6323_TypeDefinitionIndex = 50397;

class Class_2_15CC3058E0BF6323 : public ::Class_1_321489CFFF7B18E7
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_15CC3058E0BF6323_TypeDefinitionIndex)->GetStaticField(0x55340);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_15CC3058E0BF6323_TypeDefinitionIndex)->GetStaticField(0x10DF0);
	}
	static ::System::Single* StaticGet_Field_2_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_15CC3058E0BF6323_TypeDefinitionIndex)->GetStaticField(0x10DF4);
	}
	::Class_2_0299C3274218DF36* Field_2_3; // 0x18
	::Class_0_16E4307DCC419505_431* Field_2_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323__CCTOR_OFFSET))();
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
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

	::System::Void Method_2_7EF0F86F3B6EE03E(::Class_1_D8203AFB32E9259C* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_7EF0F86F3B6EE03E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F3C47AEFC0DCAC2B(::RPG::GameCore::Rtcb_BreakActionOption a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_F3C47AEFC0DCAC2B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EED62B74CACFD57(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::Rtcb_BreakActionOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_4EED62B74CACFD57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99768A3992475A51(::RPG::GameCore::Rtcb_BreakActionOption a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_99768A3992475A51_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_23D900FBEDF3D2CA(::Class_2_67C5F2015028CF70* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_2_67C5F2015028CF70*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_15CC3058E0BF6323_METHOD_2_23D900FBEDF3D2CA_OFFSET))(a1, a2);
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

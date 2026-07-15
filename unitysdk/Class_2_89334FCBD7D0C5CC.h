#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_57578741329DF018.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/RPG/GameCore/Rtcb_BreakActionOption.h"

class Class_0_16E4307DCC419505_455;
class Class_1_D8203AFB32E9259C;
class Class_2_0299C3274218DF36;
class Class_2_67C5F2015028CF70;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_89334FCBD7D0C5CC_METHOD_2_23D900FBEDF3D2CA_OFFSET UNITYSDK_OFFSET(0x155A0E10)
#define CLASS_2_89334FCBD7D0C5CC_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x155A03C0)
#define CLASS_2_89334FCBD7D0C5CC_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x155A02E0)
#define CLASS_2_89334FCBD7D0C5CC_METHOD_2_4F7B99BF19542069_OFFSET UNITYSDK_OFFSET(0x155A0520)
#define CLASS_2_89334FCBD7D0C5CC_METHOD_2_67EFB5573D8C81F5_OFFSET UNITYSDK_OFFSET(0x155A0480)
#define CLASS_2_89334FCBD7D0C5CC_METHOD_2_94592516286D8334_OFFSET UNITYSDK_OFFSET(0x155A0590)
#define CLASS_2_89334FCBD7D0C5CC_METHOD_2_99768A3992475A51_OFFSET UNITYSDK_OFFSET(0x155A0A50)
#define CLASS_2_89334FCBD7D0C5CC_METHOD_2_A94284BE799AABC7_OFFSET UNITYSDK_OFFSET(0x155A09C0)
#define CLASS_2_89334FCBD7D0C5CC_METHOD_2_B13C5C1355442AE6_OFFSET UNITYSDK_OFFSET(0x155A0700)
#define CLASS_2_89334FCBD7D0C5CC__CCTOR_OFFSET UNITYSDK_OFFSET(0x155A11D0)
#define CLASS_2_89334FCBD7D0C5CC__CTOR_OFFSET UNITYSDK_OFFSET(0x155A11C0)

inline static constexpr unsigned int Class_2_89334FCBD7D0C5CC_TypeDefinitionIndex = 51479;

class Class_2_89334FCBD7D0C5CC : public ::Class_1_57578741329DF018
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_89334FCBD7D0C5CC_TypeDefinitionIndex)->GetStaticField(0x55C40);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_89334FCBD7D0C5CC_TypeDefinitionIndex)->GetStaticField(0xE9C0);
	}
	static ::System::Single* StaticGet_Field_2_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_89334FCBD7D0C5CC_TypeDefinitionIndex)->GetStaticField(0xE9C4);
	}
	::Class_2_0299C3274218DF36* Field_2_3; // 0x18
	::Class_0_16E4307DCC419505_455* Field_2_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC__CCTOR_OFFSET))();
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_67EFB5573D8C81F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC_METHOD_2_67EFB5573D8C81F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F7B99BF19542069(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::Rtcb_BreakActionOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC_METHOD_2_4F7B99BF19542069_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A94284BE799AABC7(::Class_1_D8203AFB32E9259C* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC_METHOD_2_A94284BE799AABC7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B13C5C1355442AE6(::RPG::GameCore::Rtcb_BreakActionOption a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC_METHOD_2_B13C5C1355442AE6_OFFSET))(this, a1);
	}

	::System::Void Method_2_94592516286D8334(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::Rtcb_BreakActionOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC_METHOD_2_94592516286D8334_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99768A3992475A51(::RPG::GameCore::Rtcb_BreakActionOption a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC_METHOD_2_99768A3992475A51_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_23D900FBEDF3D2CA(::Class_2_67C5F2015028CF70* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_2_67C5F2015028CF70*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89334FCBD7D0C5CC_METHOD_2_23D900FBEDF3D2CA_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransitionMode.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MazeBattleTransitionConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransitionPerformConfig; }
namespace System { class Action; }

#define CLASS_1_2178DA8BBAE007EC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C9C760)
#define CLASS_1_2178DA8BBAE007EC_GET_CURRENTATTACKER_OFFSET UNITYSDK_OFFSET(0x16CA07E0)
#define CLASS_1_2178DA8BBAE007EC_GET_CURRENTDEFENDER_OFFSET UNITYSDK_OFFSET(0x16CA0800)
#define CLASS_1_2178DA8BBAE007EC_GET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET UNITYSDK_OFFSET(0x16CA07C0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_09D92EE02A83C51D_OFFSET UNITYSDK_OFFSET(0x16C9E350)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x16C9EBF0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x16CA04B0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16C9E9D0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16C9DFF0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_1_OFFSET UNITYSDK_OFFSET(0x16C9D7E0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_2_OFFSET UNITYSDK_OFFSET(0x16C9DA90)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_3_OFFSET UNITYSDK_OFFSET(0x16C9DD80)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_4_OFFSET UNITYSDK_OFFSET(0x16C9E0C0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x16C9CF00)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x16C9CCE0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16C9EBA0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_3BF9B67F74EEB9FA_OFFSET UNITYSDK_OFFSET(0x16C9D1E0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x16CA0340)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_57D7671870F3331B_OFFSET UNITYSDK_OFFSET(0x16C9E890)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_5AD211D08ADF3F6E_OFFSET UNITYSDK_OFFSET(0x16CA0790)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_5CC589A90C8895C1_OFFSET UNITYSDK_OFFSET(0x16CA05E0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x16C9B840)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_721C8F8A1B12BAFC_OFFSET UNITYSDK_OFFSET(0x16C9F590)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_74DC427A9191C639_OFFSET UNITYSDK_OFFSET(0x16C9EC80)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x16CA0590)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_88A5355116A88152_1_OFFSET UNITYSDK_OFFSET(0x16C9DD30)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_88A5355116A88152_OFFSET UNITYSDK_OFFSET(0x16C9DA40)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_8C1DD01C5F096716_OFFSET UNITYSDK_OFFSET(0x16C9F270)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_8DFE27A803774727_OFFSET UNITYSDK_OFFSET(0x16C9CAC0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x16C9C9E0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_934A67A86EB996AE_OFFSET UNITYSDK_OFFSET(0x16C9D4D0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_A41E5E09290EF5A0_OFFSET UNITYSDK_OFFSET(0x16C9B920)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x16C9E050)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_A8272415FB0F8D75_OFFSET UNITYSDK_OFFSET(0x16CA0120)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_B4FEB1F5D516A801_OFFSET UNITYSDK_OFFSET(0x16C9C800)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16C9DFA0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x16CA0180)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_DE1755B73A3E9F2E_OFFSET UNITYSDK_OFFSET(0x16C9EDF0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_DE28E5797D5F3B4F_1_OFFSET UNITYSDK_OFFSET(0x16C9FD80)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_DE28E5797D5F3B4F_OFFSET UNITYSDK_OFFSET(0x16C9F9E0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_EA1355C3DBBA00B4_OFFSET UNITYSDK_OFFSET(0x16CA0540)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_EC2956354B919FE0_OFFSET UNITYSDK_OFFSET(0x16C9EA60)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_F05F95789250CAA6_OFFSET UNITYSDK_OFFSET(0x16C9F330)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_F755ED20B18F4BDE_OFFSET UNITYSDK_OFFSET(0x16C9E630)
#define CLASS_1_2178DA8BBAE007EC_SET_CURRENTATTACKER_OFFSET UNITYSDK_OFFSET(0x16CA07F0)
#define CLASS_1_2178DA8BBAE007EC_SET_CURRENTDEFENDER_OFFSET UNITYSDK_OFFSET(0x16CA0810)
#define CLASS_1_2178DA8BBAE007EC_SET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET UNITYSDK_OFFSET(0x16CA07D0)
#define CLASS_1_2178DA8BBAE007EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA0820)
#define CLASS_1_2178DA8BBAE007EC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9B7A0)

inline static constexpr unsigned int Class_1_2178DA8BBAE007EC_TypeDefinitionIndex = 58127;

class Class_1_2178DA8BBAE007EC : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2178DA8BBAE007EC_TypeDefinitionIndex)->GetStaticField(0x3C40);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2178DA8BBAE007EC_TypeDefinitionIndex)->GetStaticField(0x3C48);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2178DA8BBAE007EC_TypeDefinitionIndex)->GetStaticField(0x3C50);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2178DA8BBAE007EC_TypeDefinitionIndex)->GetStaticField(0x3C58);
	}
	::Class_3_07C3C4D2990C49EE* Field_1_4; // 0x10
	::RPG::GameCore::GameEntity* _CurrentAttacker_k__BackingField; // 0x18
	::RPG::GameCore::TaskContext* Field_1_6; // 0x20
	::System::Action* Field_1_7; // 0x28
	::RPG::GameCore::GameEntity* _CurrentDefender_k__BackingField; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_1_9; // 0x38
	::System::Action* Field_1_10; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_1_11; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_1_12; // 0x50
	::Class_3_07C3C4D2990C49EE* Field_1_13; // 0x58
	::Class_3_07C3C4D2990C49EE* Field_1_14; // 0x60
	::Class_3_07C3C4D2990C49EE* Field_1_15; // 0x68
	::Class_3_07C3C4D2990C49EE* Field_1_16; // 0x70
	::System::Action* Field_1_17; // 0x78
	::Class_3_07C3C4D2990C49EE* Field_1_18; // 0x80
	::Class_3_07C3C4D2990C49EE* Field_1_19; // 0x88
	::Class_3_07C3C4D2990C49EE* Field_1_20; // 0x90
	::System::Action* Field_1_21; // 0x98
	::Class_3_07C3C4D2990C49EE* Field_1_22; // 0xA0
	::Class_3_07C3C4D2990C49EE* Field_1_23; // 0xA8
	::RPG::GameCore::TransitionPerformConfig* Field_1_24; // 0xB0
	::System::Single Field_1_25; // 0xB8
	::System::UInt32 Field_1_26; // 0xBC
	::RPG::Client::TransitionMode Field_1_27; // 0xC0
	::System::Boolean Field_1_28; // 0xC4
	::System::Boolean _IsMazeToBattleTransitionShowStarted_k__BackingField; // 0xC5
	::System::Boolean Field_1_30; // 0xC6
	::System::Boolean Field_1_31; // 0xC7
	::System::Single Field_1_32; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC__CCTOR_OFFSET))();
	}

	::System::Void Method_1_A41E5E09290EF5A0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_A41E5E09290EF5A0_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8DFE27A803774727(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_8DFE27A803774727_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3BF9B67F74EEB9FA(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_3BF9B67F74EEB9FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_934A67A86EB996AE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_934A67A86EB996AE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_88A5355116A88152(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_88A5355116A88152_OFFSET))(this, a1);
	}

	::System::Void Method_1_88A5355116A88152_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_88A5355116A88152_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_1_09D92EE02A83C51D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_09D92EE02A83C51D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F755ED20B18F4BDE(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_F755ED20B18F4BDE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_57D7671870F3331B(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_57D7671870F3331B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_EC2956354B919FE0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_EC2956354B919FE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_1_74DC427A9191C639(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_74DC427A9191C639_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE1755B73A3E9F2E(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_DE1755B73A3E9F2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_721C8F8A1B12BAFC(::RPG::GameCore::TransitionLoadingType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_721C8F8A1B12BAFC_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE28E5797D5F3B4F(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_DE28E5797D5F3B4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE28E5797D5F3B4F_1(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_DE28E5797D5F3B4F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F05F95789250CAA6(::RPG::GameCore::TransitionLoadingType a1, ::Class_3_07C3C4D2990C49EE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_F05F95789250CAA6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A8272415FB0F8D75(::RPG::GameCore::TransitionLoadingType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_A8272415FB0F8D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_1_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_2_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_3_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_4_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_B4FEB1F5D516A801()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_B4FEB1F5D516A801_OFFSET))(this);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Void Method_1_EA1355C3DBBA00B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_EA1355C3DBBA00B4_OFFSET))(this);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CC589A90C8895C1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_5CC589A90C8895C1_OFFSET))(this, a1);
	}

	::RPG::GameCore::MazeBattleTransitionConfig* Method_1_5AD211D08ADF3F6E()
	{
		return ((::RPG::GameCore::MazeBattleTransitionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_5AD211D08ADF3F6E_OFFSET))(this);
	}

	::RPG::GameCore::TransitionPerformConfig* Method_1_8C1DD01C5F096716()
	{
		return ((::RPG::GameCore::TransitionPerformConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_8C1DD01C5F096716_OFFSET))(this);
	}

	::System::Boolean get_IsMazeToBattleTransitionShowStarted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_GET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET))(this);
	}

	::System::Void set_IsMazeToBattleTransitionShowStarted(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_SET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_CurrentAttacker()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_GET_CURRENTATTACKER_OFFSET))(this);
	}

	::System::Void set_CurrentAttacker(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_SET_CURRENTATTACKER_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_CurrentDefender()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_GET_CURRENTDEFENDER_OFFSET))(this);
	}

	::System::Void set_CurrentDefender(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_SET_CURRENTDEFENDER_OFFSET))(this, a1);
	}
};

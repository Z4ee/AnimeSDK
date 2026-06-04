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

#define CLASS_1_2178DA8BBAE007EC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14177530)
#define CLASS_1_2178DA8BBAE007EC_GET_CURRENTATTACKER_OFFSET UNITYSDK_OFFSET(0x1417AF80)
#define CLASS_1_2178DA8BBAE007EC_GET_CURRENTDEFENDER_OFFSET UNITYSDK_OFFSET(0x1417AFA0)
#define CLASS_1_2178DA8BBAE007EC_GET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET UNITYSDK_OFFSET(0x1417AF60)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_09D92EE02A83C51D_OFFSET UNITYSDK_OFFSET(0x14178BE0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_0A50B8D0FB7E316B_OFFSET UNITYSDK_OFFSET(0x1417ACE0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_151211B50CF4240D_OFFSET UNITYSDK_OFFSET(0x14178E40)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x141793B0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x1417AC50)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14179180)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_1_OFFSET UNITYSDK_OFFSET(0x141784B0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_2_OFFSET UNITYSDK_OFFSET(0x14178700)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_3_OFFSET UNITYSDK_OFFSET(0x141789A0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x14177CA0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x14177A90)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14179360)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_5086D84434FB4C11_OFFSET UNITYSDK_OFFSET(0x14179B30)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_57D7671870F3331B_OFFSET UNITYSDK_OFFSET(0x14179040)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_5AD211D08ADF3F6E_OFFSET UNITYSDK_OFFSET(0x1417AF30)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_5CC589A90C8895C1_OFFSET UNITYSDK_OFFSET(0x1417AD80)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x14176750)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_721C8F8A1B12BAFC_OFFSET UNITYSDK_OFFSET(0x14179D30)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_74DC427A9191C639_OFFSET UNITYSDK_OFFSET(0x14179440)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1417AD30)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_88A5355116A88152_OFFSET UNITYSDK_OFFSET(0x141786A0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0x141775C0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_8C1DD01C5F096716_OFFSET UNITYSDK_OFFSET(0x14179A70)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_8DFE27A803774727_OFFSET UNITYSDK_OFFSET(0x14177870)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_934A67A86EB996AE_OFFSET UNITYSDK_OFFSET(0x141781A0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_93C126D556FAD743_OFFSET UNITYSDK_OFFSET(0x14177F10)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_A41E5E09290EF5A0_OFFSET UNITYSDK_OFFSET(0x14176830)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x1417AB30)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x14178920)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_A8272415FB0F8D75_OFFSET UNITYSDK_OFFSET(0x1417A980)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_B036E5806AE655F4_OFFSET UNITYSDK_OFFSET(0x14177790)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_D2BD4A437CC32DCC_1_OFFSET UNITYSDK_OFFSET(0x1417A5A0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_D2BD4A437CC32DCC_OFFSET UNITYSDK_OFFSET(0x1417A1C0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x1417A9E0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_DE1755B73A3E9F2E_OFFSET UNITYSDK_OFFSET(0x141795C0)
#define CLASS_1_2178DA8BBAE007EC_METHOD_1_EC2956354B919FE0_OFFSET UNITYSDK_OFFSET(0x14179210)
#define CLASS_1_2178DA8BBAE007EC_SET_CURRENTATTACKER_OFFSET UNITYSDK_OFFSET(0x1417AF90)
#define CLASS_1_2178DA8BBAE007EC_SET_CURRENTDEFENDER_OFFSET UNITYSDK_OFFSET(0x1417AFB0)
#define CLASS_1_2178DA8BBAE007EC_SET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET UNITYSDK_OFFSET(0x1417AF70)
#define CLASS_1_2178DA8BBAE007EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1417AFC0)
#define CLASS_1_2178DA8BBAE007EC__CTOR_OFFSET UNITYSDK_OFFSET(0x141766B0)

inline static constexpr unsigned int Class_1_2178DA8BBAE007EC_TypeDefinitionIndex = 56880;

class Class_1_2178DA8BBAE007EC : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2178DA8BBAE007EC_TypeDefinitionIndex)->GetStaticField(0x113E0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2178DA8BBAE007EC_TypeDefinitionIndex)->GetStaticField(0x113E8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2178DA8BBAE007EC_TypeDefinitionIndex)->GetStaticField(0x113F0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2178DA8BBAE007EC_TypeDefinitionIndex)->GetStaticField(0x113F8);
	}
	::Class_3_07C3C4D2990C49EE* Field_1_4; // 0x10
	::Class_3_07C3C4D2990C49EE* Field_1_5; // 0x18
	::System::Action* Field_1_6; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_1_7; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_1_8; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_1_9; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_1_10; // 0x40
	::System::Action* Field_1_11; // 0x48
	::System::Action* Field_1_12; // 0x50
	::Class_3_07C3C4D2990C49EE* Field_1_13; // 0x58
	::Class_3_07C3C4D2990C49EE* Field_1_14; // 0x60
	::Class_3_07C3C4D2990C49EE* Field_1_15; // 0x68
	::System::Action* Field_1_16; // 0x70
	::RPG::GameCore::GameEntity* _CurrentDefender_k__BackingField; // 0x78
	::RPG::GameCore::GameEntity* _CurrentAttacker_k__BackingField; // 0x80
	::Class_3_07C3C4D2990C49EE* Field_1_19; // 0x88
	::RPG::GameCore::TransitionPerformConfig* Field_1_20; // 0x90
	::Class_3_07C3C4D2990C49EE* Field_1_21; // 0x98
	::RPG::GameCore::TaskContext* Field_1_22; // 0xA0
	::Class_3_07C3C4D2990C49EE* Field_1_23; // 0xA8
	::System::UInt32 Field_1_24; // 0xB0
	::System::Single Field_1_25; // 0xB4
	::System::Boolean Field_1_26; // 0xB8
	::System::Boolean Field_1_27; // 0xB9
	::System::Boolean _IsMazeToBattleTransitionShowStarted_k__BackingField; // 0xBA
	::RPG::Client::TransitionMode Field_1_29; // 0xBC
	::System::Single Field_1_30; // 0xC0

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

	::System::Void Method_1_93C126D556FAD743(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_93C126D556FAD743_OFFSET))(this, a1);
	}

	::System::Void Method_1_934A67A86EB996AE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_934A67A86EB996AE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_88A5355116A88152(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_88A5355116A88152_OFFSET))(this, a1);
	}

	::System::Void Method_1_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_1_09D92EE02A83C51D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_09D92EE02A83C51D_OFFSET))(this, a1);
	}

	::System::Void Method_1_151211B50CF4240D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_151211B50CF4240D_OFFSET))(this, a1);
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

	::System::Void Method_1_D2BD4A437CC32DCC(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_D2BD4A437CC32DCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D2BD4A437CC32DCC_1(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_D2BD4A437CC32DCC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5086D84434FB4C11(::RPG::GameCore::TransitionLoadingType a1, ::Class_3_07C3C4D2990C49EE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_5086D84434FB4C11_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A8272415FB0F8D75(::RPG::GameCore::TransitionLoadingType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_A8272415FB0F8D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_B036E5806AE655F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_B036E5806AE655F4_OFFSET))(this);
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

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_8B37A17B7A3F06D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_8B37A17B7A3F06D8_OFFSET))(this);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Void Method_1_0A50B8D0FB7E316B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2178DA8BBAE007EC_METHOD_1_0A50B8D0FB7E316B_OFFSET))(this);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransitionMode.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MazeBattleTransitionConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransitionPerformConfig; }
namespace System { class Action; }

#define CLASS_1_3255B09AEB5A1EF7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B47080)
#define CLASS_1_3255B09AEB5A1EF7_GET_CURRENTATTACKER_OFFSET UNITYSDK_OFFSET(0x11B4A8A0)
#define CLASS_1_3255B09AEB5A1EF7_GET_CURRENTDEFENDER_OFFSET UNITYSDK_OFFSET(0x11B4A8C0)
#define CLASS_1_3255B09AEB5A1EF7_GET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET UNITYSDK_OFFSET(0x11B4A880)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_09D92EE02A83C51D_OFFSET UNITYSDK_OFFSET(0x11B485F0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_151211B50CF4240D_OFFSET UNITYSDK_OFFSET(0x11B48850)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x11B48DC0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x11B4A570)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x11B48BA0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x11B47110)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_276036CDF4BFF5A6_1_OFFSET UNITYSDK_OFFSET(0x11B47EF0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_276036CDF4BFF5A6_2_OFFSET UNITYSDK_OFFSET(0x11B48130)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_276036CDF4BFF5A6_3_OFFSET UNITYSDK_OFFSET(0x11B483C0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x11B47760)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x11B47550)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_32FE792EB1B0F498_OFFSET UNITYSDK_OFFSET(0x11B4A6A0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11B48D70)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_4F6CB99543AF5BF6_OFFSET UNITYSDK_OFFSET(0x11B472E0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_57D7671870F3331B_OFFSET UNITYSDK_OFFSET(0x11B48A60)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_5AD211D08ADF3F6E_OFFSET UNITYSDK_OFFSET(0x11B4A850)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x11B462F0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_721C8F8A1B12BAFC_OFFSET UNITYSDK_OFFSET(0x11B496C0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_74DC427A9191C639_OFFSET UNITYSDK_OFFSET(0x11B48E50)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x11B4A650)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_8329DFD991D0827A_OFFSET UNITYSDK_OFFSET(0x11B494D0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_88A5355116A88152_OFFSET UNITYSDK_OFFSET(0x11B480E0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_8C1DD01C5F096716_OFFSET UNITYSDK_OFFSET(0x11B49420)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_93C126D556FAD743_OFFSET UNITYSDK_OFFSET(0x11B479C0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x11B4A450)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x11B48350)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_A8272415FB0F8D75_OFFSET UNITYSDK_OFFSET(0x11B4A2A0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x11B4A600)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_D2BD4A437CC32DCC_1_OFFSET UNITYSDK_OFFSET(0x11B49EC0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_D2BD4A437CC32DCC_OFFSET UNITYSDK_OFFSET(0x11B49AE0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_D2FE66DC844A8D8A_OFFSET UNITYSDK_OFFSET(0x11B46390)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x11B4A300)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_DE1755B73A3E9F2E_OFFSET UNITYSDK_OFFSET(0x11B48FC0)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_EC2956354B919FE0_OFFSET UNITYSDK_OFFSET(0x11B48C30)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_F38ACC6EDAA9FF32_1_OFFSET UNITYSDK_OFFSET(0x11B47C50)
#define CLASS_1_3255B09AEB5A1EF7_METHOD_1_F38ACC6EDAA9FF32_OFFSET UNITYSDK_OFFSET(0x11B47380)
#define CLASS_1_3255B09AEB5A1EF7_SET_CURRENTATTACKER_OFFSET UNITYSDK_OFFSET(0x11B4A8B0)
#define CLASS_1_3255B09AEB5A1EF7_SET_CURRENTDEFENDER_OFFSET UNITYSDK_OFFSET(0x11B4A8D0)
#define CLASS_1_3255B09AEB5A1EF7_SET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET UNITYSDK_OFFSET(0x11B4A890)
#define CLASS_1_3255B09AEB5A1EF7__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B4A8E0)
#define CLASS_1_3255B09AEB5A1EF7__CTOR_OFFSET UNITYSDK_OFFSET(0x11B46250)

inline static constexpr unsigned int Class_1_3255B09AEB5A1EF7_TypeDefinitionIndex = 56118;

class Class_1_3255B09AEB5A1EF7 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_30()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3255B09AEB5A1EF7_TypeDefinitionIndex)->GetStaticField(0x4BC20);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_27()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3255B09AEB5A1EF7_TypeDefinitionIndex)->GetStaticField(0x4BC28);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_29()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3255B09AEB5A1EF7_TypeDefinitionIndex)->GetStaticField(0x4BC30);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_28()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3255B09AEB5A1EF7_TypeDefinitionIndex)->GetStaticField(0x4BC38);
	}
	::Class_3_E21F6DE9B7FA4D05* Field_1_9; // 0x10
	::System::Action* Field_1_8; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_1_14; // 0x20
	::System::Action* Field_1_24; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_1_13; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_1_10; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_1_18; // 0x40
	::System::Action* Field_1_21; // 0x48
	::RPG::GameCore::GameEntity* _CurrentAttacker_k__BackingField; // 0x50
	::RPG::GameCore::TransitionPerformConfig* Field_1_5; // 0x58
	::Class_3_E21F6DE9B7FA4D05* Field_1_11; // 0x60
	::Class_3_E21F6DE9B7FA4D05* Field_1_16; // 0x68
	::Class_3_E21F6DE9B7FA4D05* Field_1_7; // 0x70
	::Class_3_E21F6DE9B7FA4D05* Field_1_6; // 0x78
	::RPG::GameCore::TaskContext* Field_1_4; // 0x80
	::Class_3_E21F6DE9B7FA4D05* Field_1_17; // 0x88
	::Class_3_E21F6DE9B7FA4D05* Field_1_20; // 0x90
	::Class_3_E21F6DE9B7FA4D05* Field_1_12; // 0x98
	::System::Action* Field_1_19; // 0xA0
	::RPG::GameCore::GameEntity* _CurrentDefender_k__BackingField; // 0xA8
	::System::Single Field_1_23; // 0xB0
	::System::UInt32 Field_1_26; // 0xB4
	::RPG::Client::TransitionMode Field_1_0; // 0xB8
	::System::Boolean Field_1_15; // 0xBC
	::System::Boolean Field_1_25; // 0xBD
	::System::Boolean _IsMazeToBattleTransitionShowStarted_k__BackingField; // 0xBE
	::System::Single Field_1_22; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D2FE66DC844A8D8A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_D2FE66DC844A8D8A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F38ACC6EDAA9FF32(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_F38ACC6EDAA9FF32_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_93C126D556FAD743(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_93C126D556FAD743_OFFSET))(this, a1);
	}

	::System::Void Method_1_F38ACC6EDAA9FF32_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_F38ACC6EDAA9FF32_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_88A5355116A88152(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_88A5355116A88152_OFFSET))(this, a1);
	}

	::System::Void Method_1_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_1_09D92EE02A83C51D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_09D92EE02A83C51D_OFFSET))(this, a1);
	}

	::System::Void Method_1_151211B50CF4240D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_151211B50CF4240D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_57D7671870F3331B(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_57D7671870F3331B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_EC2956354B919FE0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_EC2956354B919FE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_1_74DC427A9191C639(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_74DC427A9191C639_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE1755B73A3E9F2E(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_DE1755B73A3E9F2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_721C8F8A1B12BAFC(::RPG::GameCore::TransitionLoadingType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_721C8F8A1B12BAFC_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2BD4A437CC32DCC(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_D2BD4A437CC32DCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D2BD4A437CC32DCC_1(::RPG::GameCore::TransitionLoadingType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_D2BD4A437CC32DCC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8329DFD991D0827A(::RPG::GameCore::TransitionLoadingType a1, ::Class_3_E21F6DE9B7FA4D05* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType, ::Class_3_E21F6DE9B7FA4D05*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_8329DFD991D0827A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A8272415FB0F8D75(::RPG::GameCore::TransitionLoadingType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_A8272415FB0F8D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_4F6CB99543AF5BF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_4F6CB99543AF5BF6_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_276036CDF4BFF5A6_1_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_276036CDF4BFF5A6_2_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_276036CDF4BFF5A6_3_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_1B9BAFE25893B138_OFFSET))(this);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Void Method_1_D20F759FC2EC43FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_D20F759FC2EC43FB_OFFSET))(this);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_32FE792EB1B0F498(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_32FE792EB1B0F498_OFFSET))(this, a1);
	}

	::RPG::GameCore::MazeBattleTransitionConfig* Method_1_5AD211D08ADF3F6E()
	{
		return ((::RPG::GameCore::MazeBattleTransitionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_5AD211D08ADF3F6E_OFFSET))(this);
	}

	::RPG::GameCore::TransitionPerformConfig* Method_1_8C1DD01C5F096716()
	{
		return ((::RPG::GameCore::TransitionPerformConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_METHOD_1_8C1DD01C5F096716_OFFSET))(this);
	}

	::System::Boolean get_IsMazeToBattleTransitionShowStarted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_GET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET))(this);
	}

	::System::Void set_IsMazeToBattleTransitionShowStarted(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_SET_ISMAZETOBATTLETRANSITIONSHOWSTARTED_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_CurrentAttacker()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_GET_CURRENTATTACKER_OFFSET))(this);
	}

	::System::Void set_CurrentAttacker(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_SET_CURRENTATTACKER_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_CurrentDefender()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_GET_CURRENTDEFENDER_OFFSET))(this);
	}

	::System::Void set_CurrentDefender(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3255B09AEB5A1EF7_SET_CURRENTDEFENDER_OFFSET))(this, value);
	}
};

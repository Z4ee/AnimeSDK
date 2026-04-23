#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7E6F98A8FA0DAC16_RegisterNoCheckDistrictLeaveStateReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TimeRewindControlSwitcherState.h"
#include "unitysdk/RPG/GameCore/TimeRewindEntityControlType.h"

class Class_0_16E4307DCC419505_382;
class Class_1_7E355D3BCC0A3370_Class_1_F430351B57E59FB6;
class Class_1_DD81253E160EB8B2;
class Class_2_775953B773EF713C;
class Class_2_7E6F98A8FA0DAC16_Class_1_2C3C4102E0261131_1;
class Class_2_7E6F98A8FA0DAC16_Class_1_39154B8B2AA98D66_1;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class ButtonListTrigger; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class ToastPile; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7E6F98A8FA0DAC16_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0xB4A9BE0)
#define CLASS_2_7E6F98A8FA0DAC16_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4A9DA0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_016A610D2E27A33E_OFFSET UNITYSDK_OFFSET(0xB4ACDF0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0xB4AC9A0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_0986B6F765C6D4BF_1_OFFSET UNITYSDK_OFFSET(0xB4AC520)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_0986B6F765C6D4BF_2_OFFSET UNITYSDK_OFFSET(0xB4AC5D0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_0986B6F765C6D4BF_OFFSET UNITYSDK_OFFSET(0xB4AC470)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_1107D58E9DAAA01A_OFFSET UNITYSDK_OFFSET(0xB4AC810)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_12F55A3B72ABD40C_1_OFFSET UNITYSDK_OFFSET(0xB4AC7B0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_12F55A3B72ABD40C_OFFSET UNITYSDK_OFFSET(0xB4AB7B0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_3A9C03366E936C66_OFFSET UNITYSDK_OFFSET(0xB4AA2E0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB4AC680)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB4AB810)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_4E06A3CAB868F83F_OFFSET UNITYSDK_OFFSET(0xB4AAE40)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_51B145293EFD5C20_OFFSET UNITYSDK_OFFSET(0xB4ABF60)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_55157FBA4997D865_OFFSET UNITYSDK_OFFSET(0xB4ABE90)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xB4AB8E0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_57E9D53C8A17BFCC_OFFSET UNITYSDK_OFFSET(0xB4AC3F0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_5AD6FBFC290F7CFF_OFFSET UNITYSDK_OFFSET(0xB4AB470)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0xB4A9D10)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_7D602A72F2676500_OFFSET UNITYSDK_OFFSET(0xB4AC090)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0xB4ACBA0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_83EF02F8F4B2192A_OFFSET UNITYSDK_OFFSET(0xB4ABBA0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xB4AB170)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_89BAEFE98AE475D0_OFFSET UNITYSDK_OFFSET(0xB4AA700)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB4AC270)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_B7A43C06FD78D78B_OFFSET UNITYSDK_OFFSET(0xB4AC140)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xB4AB760)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_BDEE96BFE11032F9_OFFSET UNITYSDK_OFFSET(0xB4ABF00)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_C77463CBD1FD0903_OFFSET UNITYSDK_OFFSET(0xB4A9920)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB4AC770)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4AC230)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_D3789CFB5317098B_OFFSET UNITYSDK_OFFSET(0xB4AB9B0)
#define CLASS_2_7E6F98A8FA0DAC16_METHOD_2_FFE382724CE391A4_OFFSET UNITYSDK_OFFSET(0xB4AA580)
#define CLASS_2_7E6F98A8FA0DAC16_TICK_OFFSET UNITYSDK_OFFSET(0xB4AA1D0)
#define CLASS_2_7E6F98A8FA0DAC16__CTOR_OFFSET UNITYSDK_OFFSET(0xB4ACE00)
#define CLASS_2_7E6F98A8FA0DAC16__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB4A9660)
#define CLASS_2_7E6F98A8FA0DAC16___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB4ACEF0)
#define CLASS_2_7E6F98A8FA0DAC16___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB4ACE90)

inline static constexpr unsigned int Class_2_7E6F98A8FA0DAC16_TypeDefinitionIndex = 52991;

class Class_2_7E6F98A8FA0DAC16 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Int32* StaticGet_Field_2_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7E6F98A8FA0DAC16_TypeDefinitionIndex)->GetStaticField(0x13EC0);
	}
	// static const ::System::String* Field_2_15; // 0x0
	::Class_1_7E355D3BCC0A3370_Class_1_F430351B57E59FB6* Field_2_27; // 0x18
	::Il2CppArray<::Class_1_DD81253E160EB8B2*>* Field_2_18; // 0x20
	::Class_2_775953B773EF713C* Field_2_7; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_19; // 0x30
	::RPG::GameCore::ColliderTriggerComponent* Field_2_9; // 0x38
	::RPG::GameCore::GameEntity* Field_2_6; // 0x40
	::RPG::GameCore::ToastPile* Field_2_20; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_2_11; // 0x50
	::System::String* Field_2_14; // 0x58
	::RPG::GameCore::PropComponent* Field_2_8; // 0x60
	::Class_2_775953B773EF713C* Field_2_5; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_24; // 0x70
	::UnityEngine::Transform* Field_2_10; // 0x78
	::Il2CppArray<::Class_1_DD81253E160EB8B2*>* Field_2_17; // 0x80
	::Class_2_7E6F98A8FA0DAC16_Class_1_2C3C4102E0261131_1* Field_2_2; // 0x88
	::RPG::GameCore::ButtonListTrigger* Field_2_12; // 0x90
	::RPG::GameCore::ToastPile* Field_2_21; // 0x98
	::System::Collections::Generic::List_1<::Class_2_7E6F98A8FA0DAC16_Class_1_39154B8B2AA98D66_1*>* Field_2_3; // 0xA0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TimeRewindControlSwitcherState, ::Class_2_7E6F98A8FA0DAC16_Class_1_2C3C4102E0261131_1*>* Field_2_1; // 0xA8
	::RPG::GameCore::GameEntity* Field_2_4; // 0xB0
	::System::UInt32 Field_2_22; // 0xB8
	::System::Single Field_2_25; // 0xBC
	::System::Int32 Field_2_28; // 0xC0
	::System::Boolean Field_2_26; // 0xC4
	::System::Boolean Field_2_16; // 0xC5
	::System::Boolean Field_2_31; // 0xC6
	::System::Boolean Field_2_30; // 0xC7
	::RPG::GameCore::TimeRewindControlSwitcherState Field_2_0; // 0xC8
	::System::UInt32 Field_2_23; // 0xCC
	::System::Int32 Field_2_29; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_C77463CBD1FD0903(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_C77463CBD1FD0903_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_TICK_OFFSET))(this, a1);
	}

	::System::Single Method_2_FFE382724CE391A4(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_FFE382724CE391A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_89BAEFE98AE475D0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_89BAEFE98AE475D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_D3789CFB5317098B(::RPG::GameCore::TimeRewindEntityControlType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindEntityControlType))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_D3789CFB5317098B_OFFSET))(this, a1);
	}

	::System::Void Method_2_83EF02F8F4B2192A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_83EF02F8F4B2192A_OFFSET))(this);
	}

	::System::Void Method_2_BDEE96BFE11032F9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_BDEE96BFE11032F9_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_4E06A3CAB868F83F(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3, ::System::Action* a4, ::Class_2_775953B773EF713C*& a5)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*, ::Class_2_775953B773EF713C*&))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_4E06A3CAB868F83F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_51B145293EFD5C20(::RPG::GameCore::TimeRewindControlSwitcherState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_51B145293EFD5C20_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D602A72F2676500(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_7D602A72F2676500_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_0986B6F765C6D4BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_0986B6F765C6D4BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_0986B6F765C6D4BF_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_0986B6F765C6D4BF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0986B6F765C6D4BF_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_0986B6F765C6D4BF_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_57E9D53C8A17BFCC(::System::Boolean a1, ::Class_2_7E6F98A8FA0DAC16_RegisterNoCheckDistrictLeaveStateReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_7E6F98A8FA0DAC16_RegisterNoCheckDistrictLeaveStateReason))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_57E9D53C8A17BFCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_55157FBA4997D865()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_55157FBA4997D865_OFFSET))(this);
	}

	::System::Void Method_2_B7A43C06FD78D78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_B7A43C06FD78D78B_OFFSET))(this);
	}

	::RPG::GameCore::TimeRewindControlSwitcherState Method_2_12F55A3B72ABD40C(::RPG::GameCore::PropState a1)
	{
		return ((::RPG::GameCore::TimeRewindControlSwitcherState(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_12F55A3B72ABD40C_OFFSET))(this, a1);
	}

	::RPG::GameCore::PropState Method_2_12F55A3B72ABD40C_1(::RPG::GameCore::TimeRewindControlSwitcherState a1)
	{
		return ((::RPG::GameCore::PropState(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_12F55A3B72ABD40C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1107D58E9DAAA01A(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_1107D58E9DAAA01A_OFFSET))(this, a1);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_5AD6FBFC290F7CFF(::RPG::GameCore::TimeRewindControlSwitcherState a1, ::RPG::GameCore::TimeRewindControlSwitcherState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_5AD6FBFC290F7CFF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_0860F812E446AE7C_OFFSET))(this);
	}

	::System::Void Method_2_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_2_3A9C03366E936C66(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_3A9C03366E936C66_OFFSET))(this, a1);
	}

	::RPG::GameCore::TimeRewindControlSwitcherState Method_2_016A610D2E27A33E()
	{
		return ((::RPG::GameCore::TimeRewindControlSwitcherState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16_METHOD_2_016A610D2E27A33E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7E6F98A8FA0DAC16___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7441D3F0EDA3D41C_RegisterNoCheckDistrictLeaveStateReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TimeRewindControlSwitcherState.h"
#include "unitysdk/RPG/GameCore/TimeRewindEntityControlType.h"

class Class_0_16E4307DCC419505_401;
class Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6;
class Class_1_E45C207B1AC948BE;
class Class_2_7441D3F0EDA3D41C_Class_1_2C3C4102E0261131_1;
class Class_2_7441D3F0EDA3D41C_Class_1_39154B8B2AA98D66_1;
class Class_2_775953B773EF713C;
class Class_3_07C3C4D2990C49EE;
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

#define CLASS_2_7441D3F0EDA3D41C_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x137D8B60)
#define CLASS_2_7441D3F0EDA3D41C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137D8D70)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_016A610D2E27A33E_OFFSET UNITYSDK_OFFSET(0x137DBFB0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0x137DBB00)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_0986B6F765C6D4BF_1_OFFSET UNITYSDK_OFFSET(0x137DB660)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_0986B6F765C6D4BF_2_OFFSET UNITYSDK_OFFSET(0x137DB710)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_0986B6F765C6D4BF_OFFSET UNITYSDK_OFFSET(0x137DB5B0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_0F76D2A38DFBC84F_OFFSET UNITYSDK_OFFSET(0x137D92D0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_12F55A3B72ABD40C_1_OFFSET UNITYSDK_OFFSET(0x137DB8F0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_12F55A3B72ABD40C_OFFSET UNITYSDK_OFFSET(0x137DA940)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_28195C58A2C3F3C2_OFFSET UNITYSDK_OFFSET(0x137DAB40)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x137DA250)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x137DB7C0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x137DA9A0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_4701B4FE177F3DB3_OFFSET UNITYSDK_OFFSET(0x137D9EB0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_51A2EAB7889E8A59_OFFSET UNITYSDK_OFFSET(0x137DB950)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_55157FBA4997D865_OFFSET UNITYSDK_OFFSET(0x137DB000)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x137DAA70)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_5739CCCE693D1FCB_OFFSET UNITYSDK_OFFSET(0x137DB280)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_57E9D53C8A17BFCC_OFFSET UNITYSDK_OFFSET(0x137DB530)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_5AD6FBFC290F7CFF_OFFSET UNITYSDK_OFFSET(0x137DA600)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x137D8CE0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_77F5848A371D8677_OFFSET UNITYSDK_OFFSET(0x137D8830)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_7B26CD82688F4AA2_OFFSET UNITYSDK_OFFSET(0x137DB070)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x137DBD10)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_8B57BE8E25691A6A_OFFSET UNITYSDK_OFFSET(0x137DB0D0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x137DB3B0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_AA957E371B77E633_OFFSET UNITYSDK_OFFSET(0x137DAD20)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x137DA8F0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x137DB8B0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x137DB370)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_D7157DC24D72CC2F_OFFSET UNITYSDK_OFFSET(0x137DB1D0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_EE27BA5388FE7451_OFFSET UNITYSDK_OFFSET(0x137D96F0)
#define CLASS_2_7441D3F0EDA3D41C_METHOD_2_FFE382724CE391A4_OFFSET UNITYSDK_OFFSET(0x137D9580)
#define CLASS_2_7441D3F0EDA3D41C_TICK_OFFSET UNITYSDK_OFFSET(0x137D91C0)
#define CLASS_2_7441D3F0EDA3D41C__CTOR_OFFSET UNITYSDK_OFFSET(0x137DBFC0)
#define CLASS_2_7441D3F0EDA3D41C__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x137D8570)
#define CLASS_2_7441D3F0EDA3D41C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x137DC0B0)
#define CLASS_2_7441D3F0EDA3D41C___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x137DC050)

inline static constexpr unsigned int Class_2_7441D3F0EDA3D41C_TypeDefinitionIndex = 53701;

class Class_2_7441D3F0EDA3D41C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7441D3F0EDA3D41C_TypeDefinitionIndex)->GetStaticField(0x14420);
	}
	// static const ::System::String* Field_2_1; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_2; // 0x18
	::Class_2_7441D3F0EDA3D41C_Class_1_2C3C4102E0261131_1* Field_2_3; // 0x20
	::RPG::GameCore::ToastPile* Field_2_4; // 0x28
	::UnityEngine::Transform* Field_2_5; // 0x30
	::Class_2_775953B773EF713C* Field_2_6; // 0x38
	::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6* Field_2_7; // 0x40
	::Il2CppArray<::Class_1_E45C207B1AC948BE*>* Field_2_8; // 0x48
	::Class_2_775953B773EF713C* Field_2_9; // 0x50
	::System::Collections::Generic::List_1<::Class_2_7441D3F0EDA3D41C_Class_1_39154B8B2AA98D66_1*>* Field_2_10; // 0x58
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_11; // 0x60
	::RPG::GameCore::GameEntity* Field_2_12; // 0x68
	::RPG::GameCore::PropComponent* Field_2_13; // 0x70
	::RPG::GameCore::ColliderTriggerComponent* Field_2_14; // 0x78
	::RPG::GameCore::ToastPile* Field_2_15; // 0x80
	::RPG::GameCore::GameEntity* Field_2_16; // 0x88
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TimeRewindControlSwitcherState, ::Class_2_7441D3F0EDA3D41C_Class_1_2C3C4102E0261131_1*>* Field_2_17; // 0x90
	::RPG::GameCore::ButtonListTrigger* Field_2_18; // 0x98
	::System::String* Field_2_19; // 0xA0
	::Il2CppArray<::Class_1_E45C207B1AC948BE*>* Field_2_20; // 0xA8
	::Class_3_07C3C4D2990C49EE* Field_2_21; // 0xB0
	::System::UInt32 Field_2_22; // 0xB8
	::System::Boolean Field_2_23; // 0xBC
	::System::Boolean Field_2_24; // 0xBD
	::System::Boolean Field_2_25; // 0xBE
	::System::Boolean Field_2_26; // 0xBF
	::System::Int32 Field_2_27; // 0xC0
	::System::Single Field_2_28; // 0xC4
	::System::UInt32 Field_2_29; // 0xC8
	::System::Int32 Field_2_30; // 0xCC
	::RPG::GameCore::TimeRewindControlSwitcherState Field_2_31; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_77F5848A371D8677(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_77F5848A371D8677_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_TICK_OFFSET))(this, a1);
	}

	::System::Single Method_2_FFE382724CE391A4(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_FFE382724CE391A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE27BA5388FE7451(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_EE27BA5388FE7451_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_28195C58A2C3F3C2(::RPG::GameCore::TimeRewindEntityControlType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindEntityControlType))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_28195C58A2C3F3C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA957E371B77E633()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_AA957E371B77E633_OFFSET))(this);
	}

	::System::Void Method_2_7B26CD82688F4AA2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_7B26CD82688F4AA2_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_4701B4FE177F3DB3(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3, ::System::Action* a4, ::Class_2_775953B773EF713C*& a5)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*, ::Class_2_775953B773EF713C*&))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_4701B4FE177F3DB3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B57BE8E25691A6A(::RPG::GameCore::TimeRewindControlSwitcherState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_8B57BE8E25691A6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7157DC24D72CC2F(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_D7157DC24D72CC2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_0986B6F765C6D4BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_0986B6F765C6D4BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_0986B6F765C6D4BF_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_0986B6F765C6D4BF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0986B6F765C6D4BF_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_0986B6F765C6D4BF_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_57E9D53C8A17BFCC(::System::Boolean a1, ::Class_2_7441D3F0EDA3D41C_RegisterNoCheckDistrictLeaveStateReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_7441D3F0EDA3D41C_RegisterNoCheckDistrictLeaveStateReason))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_57E9D53C8A17BFCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_55157FBA4997D865()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_55157FBA4997D865_OFFSET))(this);
	}

	::System::Void Method_2_5739CCCE693D1FCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_5739CCCE693D1FCB_OFFSET))(this);
	}

	::RPG::GameCore::TimeRewindControlSwitcherState Method_2_12F55A3B72ABD40C(::RPG::GameCore::PropState a1)
	{
		return ((::RPG::GameCore::TimeRewindControlSwitcherState(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_12F55A3B72ABD40C_OFFSET))(this, a1);
	}

	::RPG::GameCore::PropState Method_2_12F55A3B72ABD40C_1(::RPG::GameCore::TimeRewindControlSwitcherState a1)
	{
		return ((::RPG::GameCore::PropState(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_12F55A3B72ABD40C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_51A2EAB7889E8A59(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_51A2EAB7889E8A59_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_5AD6FBFC290F7CFF(::RPG::GameCore::TimeRewindControlSwitcherState a1, ::RPG::GameCore::TimeRewindControlSwitcherState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_5AD6FBFC290F7CFF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_0860F812E446AE7C_OFFSET))(this);
	}

	::System::Void Method_2_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_2_0F76D2A38DFBC84F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_0F76D2A38DFBC84F_OFFSET))(this, a1);
	}

	::RPG::GameCore::TimeRewindControlSwitcherState Method_2_016A610D2E27A33E()
	{
		return ((::RPG::GameCore::TimeRewindControlSwitcherState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C_METHOD_2_016A610D2E27A33E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7441D3F0EDA3D41C___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2ADE56E1A540FAD0_RegisterNoCheckDistrictLeaveStateReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TimeRewindControlSwitcherState.h"
#include "unitysdk/RPG/GameCore/TimeRewindEntityControlType.h"

class Class_0_16E4307DCC419505_460;
class Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6;
class Class_1_E45C207B1AC948BE;
class Class_2_2ADE56E1A540FAD0_Class_1_2C3C4102E0261131_1;
class Class_2_2ADE56E1A540FAD0_Class_1_39154B8B2AA98D66_1;
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

#define CLASS_2_2ADE56E1A540FAD0_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x155AE430)
#define CLASS_2_2ADE56E1A540FAD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155AE640)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_016A610D2E27A33E_OFFSET UNITYSDK_OFFSET(0x155B1B90)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_0652D63C548AA44C_OFFSET UNITYSDK_OFFSET(0x155AF040)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_0F76D2A38DFBC84F_OFFSET UNITYSDK_OFFSET(0x155AEC10)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_12F55A3B72ABD40C_1_OFFSET UNITYSDK_OFFSET(0x155B1490)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_12F55A3B72ABD40C_OFFSET UNITYSDK_OFFSET(0x155B03A0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x155B1690)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_28195C58A2C3F3C2_OFFSET UNITYSDK_OFFSET(0x155B05A0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_2C1E776057172D81_OFFSET UNITYSDK_OFFSET(0x155B0CF0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x155AFC50)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_3EDC87C7D43518B8_OFFSET UNITYSDK_OFFSET(0x155B0B20)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x155B0400)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x155B12E0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x155B04D0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_5C061BFFDACCF2F9_OFFSET UNITYSDK_OFFSET(0x155B0DA0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_5CF7372BE981F716_OFFSET UNITYSDK_OFFSET(0x155B0000)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_617412338D2072E4_OFFSET UNITYSDK_OFFSET(0x155B0780)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x155AE5B0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_77F5848A371D8677_OFFSET UNITYSDK_OFFSET(0x155AE100)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_7B26CD82688F4AA2_OFFSET UNITYSDK_OFFSET(0x155B0AC0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x155B18F0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x155B0A50)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x155B0ED0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_A2A2FF9514E1BC10_OFFSET UNITYSDK_OFFSET(0x155B14F0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_A96B77FC3BB1F54F_OFFSET UNITYSDK_OFFSET(0x155AF870)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x155B0350)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x155B1450)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x155B0E90)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_1_OFFSET UNITYSDK_OFFSET(0x155B1180)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_2_OFFSET UNITYSDK_OFFSET(0x155B1230)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_OFFSET UNITYSDK_OFFSET(0x155B10D0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_F461D109CA28EDFE_OFFSET UNITYSDK_OFFSET(0x155B1050)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_FFE382724CE391A4_OFFSET UNITYSDK_OFFSET(0x155AEED0)
#define CLASS_2_2ADE56E1A540FAD0_TICK_OFFSET UNITYSDK_OFFSET(0x155AEB00)
#define CLASS_2_2ADE56E1A540FAD0__CTOR_OFFSET UNITYSDK_OFFSET(0x155B1BA0)
#define CLASS_2_2ADE56E1A540FAD0__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x155ADE40)

inline static constexpr unsigned int Class_2_2ADE56E1A540FAD0_TypeDefinitionIndex = 57644;

class Class_2_2ADE56E1A540FAD0 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Int32* StaticGet_BNCPBBHOOKB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2ADE56E1A540FAD0_TypeDefinitionIndex)->GetStaticField(0x15790);
	}
	// static const ::System::String* EJIIFMOBPJG; // 0x0
	::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6* GEKCJABJEJK; // 0x18
	::Class_2_775953B773EF713C* KEPEPPNNKCL; // 0x20
	::UnityEngine::Transform* BJFMLBLCNAG; // 0x28
	::Class_3_07C3C4D2990C49EE* FIBOMINFALL; // 0x30
	::RPG::GameCore::GameEntity* JPNCBHDADAD; // 0x38
	::Il2CppArray<::Class_1_E45C207B1AC948BE*>* DJOFHAMCMOI; // 0x40
	::RPG::GameCore::ToastPile* EHEDCPBKKCM; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* KBINEEJBKDA; // 0x50
	::Class_2_775953B773EF713C* CPICGKNFIDB; // 0x58
	::System::Collections::Generic::List_1<::Class_2_2ADE56E1A540FAD0_Class_1_39154B8B2AA98D66_1*>* FDIPAPEDAOJ; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TimeRewindControlSwitcherState, ::Class_2_2ADE56E1A540FAD0_Class_1_2C3C4102E0261131_1*>* GDEEJGLLLHA; // 0x68
	::RPG::GameCore::ColliderTriggerComponent* BAOGDDEGAFI; // 0x70
	::Il2CppArray<::Class_1_E45C207B1AC948BE*>* FBJLEBEINFP; // 0x78
	::RPG::GameCore::ButtonListTrigger* GMPJEFGNPBO; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CONPLOOFIAJ; // 0x88
	::Class_2_2ADE56E1A540FAD0_Class_1_2C3C4102E0261131_1* LJCNFGGKGEO; // 0x90
	::RPG::GameCore::GameEntity* GDOOEEKAMDJ; // 0x98
	::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0xA0
	::RPG::GameCore::ToastPile* PNOMDIODMHL; // 0xA8
	::System::String* JCPGBFFLHGK; // 0xB0
	::System::Boolean KEPCHPNEEME; // 0xB8
	::System::Boolean OEEPMLJKKPE; // 0xB9
	::System::Boolean HACGNLHMCHM; // 0xBA
	::System::Boolean HILNKAGKNMP; // 0xBB
	::System::UInt32 GLMCEJFFMMA; // 0xBC
	::System::Int32 KFGOGNAKELL; // 0xC0
	::System::UInt32 NEKPKFFBOFC; // 0xC4
	::System::Int32 FIKDAEMFAJA; // 0xC8
	::RPG::GameCore::TimeRewindControlSwitcherState LDIKKJECDKP; // 0xCC
	::System::Single MJKGNKNKAMH; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_77F5848A371D8677(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_77F5848A371D8677_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_TICK_OFFSET))(this, a1);
	}

	::System::Single Method_2_FFE382724CE391A4(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_FFE382724CE391A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0652D63C548AA44C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_0652D63C548AA44C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_28195C58A2C3F3C2(::RPG::GameCore::TimeRewindEntityControlType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindEntityControlType))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_28195C58A2C3F3C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_617412338D2072E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_617412338D2072E4_OFFSET))(this);
	}

	::System::Void Method_2_7B26CD82688F4AA2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_7B26CD82688F4AA2_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_A96B77FC3BB1F54F(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3, ::System::Action* a4, ::Class_2_775953B773EF713C*& a5)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*, ::Class_2_775953B773EF713C*&))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_A96B77FC3BB1F54F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EDC87C7D43518B8(::RPG::GameCore::TimeRewindControlSwitcherState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_3EDC87C7D43518B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C1E776057172D81(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_2C1E776057172D81_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_E94EA76DD62C72A9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E94EA76DD62C72A9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E94EA76DD62C72A9_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F461D109CA28EDFE(::System::Boolean a1, ::Class_2_2ADE56E1A540FAD0_RegisterNoCheckDistrictLeaveStateReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_2ADE56E1A540FAD0_RegisterNoCheckDistrictLeaveStateReason))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_F461D109CA28EDFE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_2_5C061BFFDACCF2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_5C061BFFDACCF2F9_OFFSET))(this);
	}

	::RPG::GameCore::TimeRewindControlSwitcherState Method_2_12F55A3B72ABD40C(::RPG::GameCore::PropState a1)
	{
		return ((::RPG::GameCore::TimeRewindControlSwitcherState(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_12F55A3B72ABD40C_OFFSET))(this, a1);
	}

	::RPG::GameCore::PropState Method_2_12F55A3B72ABD40C_1(::RPG::GameCore::TimeRewindControlSwitcherState a1)
	{
		return ((::RPG::GameCore::PropState(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_12F55A3B72ABD40C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2A2FF9514E1BC10(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_A2A2FF9514E1BC10_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_5CF7372BE981F716(::RPG::GameCore::TimeRewindControlSwitcherState a1, ::RPG::GameCore::TimeRewindControlSwitcherState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_5CF7372BE981F716_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_2_0F76D2A38DFBC84F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_0F76D2A38DFBC84F_OFFSET))(this, a1);
	}

	::RPG::GameCore::TimeRewindControlSwitcherState Method_2_016A610D2E27A33E()
	{
		return ((::RPG::GameCore::TimeRewindControlSwitcherState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_016A610D2E27A33E_OFFSET))(this);
	}
};

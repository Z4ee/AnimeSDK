#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_RoomInfoData.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_5DA2E7556103D5A3_386;
class Class_1_5DA2E7556103D5A3_399;
class Class_1_5DA2E7556103D5A3_414;
class Class_2_10C1E1662BD0781C_1_Class_1_025C70E19F82BF2F_1;
class Class_2_1824EF69C8E376A3;
class Class_2_1A39E1B51756BF41;
class Class_2_9A3131FC3F38E383;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
class Class_2_F8EB4D9464ADCCA1;
class Class_2_F95242C0939727AB;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBossChallengeDetailRoleRowWidgetController; }
namespace MoleMole { class UIBossChallengeQuickTeamListRowWidgetController_Context; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_0_16E4307DCC419505_165;
template <typename T> class Class_3_026083D0A4F08738;

#define CLASS_2_9FCC85CCFECD4422_METHOD_2_0002FD427F9DA06E_OFFSET UNITYSDK_OFFSET(0x13BCCE50)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x13BCC2F0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_1734DB95D619A946_OFFSET UNITYSDK_OFFSET(0x13BCF4E0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x13BCC840)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x13BCECD0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x13BCE830)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_29890C802CC87ED8_OFFSET UNITYSDK_OFFSET(0x13BCE4B0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_2AD9227EB04196F4_OFFSET UNITYSDK_OFFSET(0x13BD0600)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_4BDDA83A3E9868DC_OFFSET UNITYSDK_OFFSET(0x13BCFEC0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_4C93A371A0DC625B_OFFSET UNITYSDK_OFFSET(0x13BCB3A0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_57C4AEA703D76F6E_OFFSET UNITYSDK_OFFSET(0x13BCEA50)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0x13BCD410)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_6C5DF8BFB3D9C640_OFFSET UNITYSDK_OFFSET(0x13BCD550)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_76259B0AF2C3C666_OFFSET UNITYSDK_OFFSET(0x13BD0D60)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x13BCDB90)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_7F62DEBE566C05B0_OFFSET UNITYSDK_OFFSET(0x13BCF6F0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_80BBB1FFBF365A2A_OFFSET UNITYSDK_OFFSET(0x13BD0040)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_8420DC088664D618_OFFSET UNITYSDK_OFFSET(0x13BCF580)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0x13BCF1C0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_9219C2A9E5905AEF_OFFSET UNITYSDK_OFFSET(0x13BD0A60)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_9549CBCBCD3D977F_OFFSET UNITYSDK_OFFSET(0x13BD0870)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_98D20D52586D1B5F_OFFSET UNITYSDK_OFFSET(0x13BD0A50)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13BCC430)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x13BCEB80)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x13BD0610)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x13BD0BA0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x13BCF900)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_C859A67AAEA0562C_OFFSET UNITYSDK_OFFSET(0x13BCEB70)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13BCEAE0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x13BD0210)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x13BCE6A0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0x13BCDA30)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x13BCC4D0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_E46DDF7FC80BC770_OFFSET UNITYSDK_OFFSET(0x13BCD040)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x13BCD370)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x13BCE250)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x13BCFE60)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_F9DD5BEBBFAE60E4_OFFSET UNITYSDK_OFFSET(0x13BCD4D0)
#define CLASS_2_9FCC85CCFECD4422__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCC610)

inline static constexpr unsigned int Class_2_9FCC85CCFECD4422_TypeDefinitionIndex = 85540;

class Class_2_9FCC85CCFECD4422 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	// static const ::System::Int32 Field_2_36 = 0x3; // 0x0
	// static const ::System::Int32 Field_2_37 = 0x3; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_34; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_17; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_30; // 0x68
	::UnityEngine::RectTransform* Field_2_8; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x80
	::UnityEngine::GameObject* Field_2_18; // 0x88
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x90
	::System::Collections::Generic::List_1<::Class_2_10C1E1662BD0781C_1_Class_1_025C70E19F82BF2F_1*>* Field_2_31; // 0x98
	::Il2CppArray<::Class_2_1824EF69C8E376A3*>* Field_2_32; // 0xA0
	::UnityEngine::GameObject* Field_2_22; // 0xA8
	::System::Collections::Generic::List_1<::Class_3_026083D0A4F08738<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>*>* Field_2_20; // 0xB0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_25; // 0xB8
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0xC0
	::Class_2_1A39E1B51756BF41* Field_2_19; // 0xC8
	::MoleMole::MonoGamepadCustomList* Field_2_28; // 0xD0
	::Class_2_1A39E1B51756BF41* Field_2_14; // 0xD8
	::Class_2_1A39E1B51756BF41* Field_2_24; // 0xE0
	::System::Collections::Generic::List_1<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>* Field_2_42; // 0xE8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0xF0
	::Class_2_B4378B46E0020E85* Field_2_3; // 0xF8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x100
	::Class_1_5DA2E7556103D5A3_399* Field_2_39; // 0x108
	::UnityEngine::GameObject* Field_2_13; // 0x110
	::UnityEngine::GameObject* Field_2_21; // 0x118
	::Class_1_5DA2E7556103D5A3_386* Field_2_41; // 0x120
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_26; // 0x128
	::UnityEngine::RectTransform* Field_2_7; // 0x130
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_2_33; // 0x138
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_27; // 0x140
	::Class_2_9A3131FC3F38E383* Field_2_44; // 0x148
	::Class_0_16E4307DCC419505_165<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* Field_2_29; // 0x150
	::Class_2_1A39E1B51756BF41* Field_2_16; // 0x158
	::Class_1_5DA2E7556103D5A3_414* Field_2_40; // 0x160
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x168
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x170
	::Class_2_F95242C0939727AB* Field_2_45; // 0x178
	::Class_2_B4378B46E0020E85* Field_2_23; // 0x180
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x188
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x190
	::System::Int32 Field_2_35; // 0x198
	::System::Int32 Field_2_43; // 0x19C
	::MoleMole::UIBossChallengePageController_RoomInfoData Field_2_38; // 0x1A0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4C93A371A0DC625B(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_4C93A371A0DC625B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_0002FD427F9DA06E(::Class_2_1A39E1B51756BF41* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_0002FD427F9DA06E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E46DDF7FC80BC770(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_E46DDF7FC80BC770_OFFSET))(this, a1);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F9DD5BEBBFAE60E4(::Class_2_1A39E1B51756BF41* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_F9DD5BEBBFAE60E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6C5DF8BFB3D9C640(::System::Int32 a1, ::MoleMole::UIBossChallengePageController_RoomInfoData a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBossChallengePageController_RoomInfoData))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_6C5DF8BFB3D9C640_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIBossChallengeDetailRoleRowWidgetController* Method_2_57C4AEA703D76F6E(::Class_3_026083D0A4F08738<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>* a1)
	{
		return ((::MoleMole::UIBossChallengeDetailRoleRowWidgetController*(*)(::PVOID, ::Class_3_026083D0A4F08738<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_57C4AEA703D76F6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_E3DE31A03057E055_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_165<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* Method_2_C859A67AAEA0562C()
	{
		return ((::Class_0_16E4307DCC419505_165<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_C859A67AAEA0562C_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_1734DB95D619A946(::Class_2_1A39E1B51756BF41* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_1734DB95D619A946_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_2_8420DC088664D618(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_8420DC088664D618_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_7F62DEBE566C05B0(::Class_1_5DA2E7556103D5A3_386* a1, ::Class_2_F8EB4D9464ADCCA1* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_386*, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_7F62DEBE566C05B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_8BC85DADEC2C3862_OFFSET))(this);
	}

	::System::Void Method_2_29890C802CC87ED8(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_29890C802CC87ED8_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_4BDDA83A3E9868DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_4BDDA83A3E9868DC_OFFSET))(this);
	}

	::System::Void Method_2_80BBB1FFBF365A2A(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_80BBB1FFBF365A2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_2AD9227EB04196F4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_2AD9227EB04196F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_9549CBCBCD3D977F(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_9549CBCBCD3D977F_OFFSET))(this, a1);
	}

	::System::Void Method_2_98D20D52586D1B5F(::Class_0_16E4307DCC419505_165<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_98D20D52586D1B5F_OFFSET))(this, a1);
	}

	::System::Void Method_2_9219C2A9E5905AEF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_9219C2A9E5905AEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_76259B0AF2C3C666(::Class_2_10C1E1662BD0781C_1_Class_1_025C70E19F82BF2F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_10C1E1662BD0781C_1_Class_1_025C70E19F82BF2F_1*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_76259B0AF2C3C666_OFFSET))(this, a1);
	}
};

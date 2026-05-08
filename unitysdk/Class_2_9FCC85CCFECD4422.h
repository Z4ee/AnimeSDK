#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_RoomInfoData.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_5DA2E7556103D5A3_111;
class Class_1_5DA2E7556103D5A3_336;
class Class_1_5DA2E7556103D5A3_96;
class Class_2_104EA16A1BE40F83;
class Class_2_10C1E1662BD0781C_Class_1_025C70E19F82BF2F;
class Class_2_1824EF69C8E376A3;
class Class_2_1A39E1B51756BF41;
class Class_2_9A3131FC3F38E383;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
class Class_2_F8EB4D9464ADCCA1;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBossChallengeDetailRoleRowWidgetController; }
namespace MoleMole { class UIBossChallengeQuickTeamListRowWidgetController_Context; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_3_6630F8877346891C;

#define CLASS_2_9FCC85CCFECD4422_METHOD_2_0002FD427F9DA06E_OFFSET UNITYSDK_OFFSET(0x13DA9B60)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x13DA9320)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_1734DB95D619A946_OFFSET UNITYSDK_OFFSET(0x13DAB250)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x13DAB590)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x13DAA200)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x13DA98C0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_29890C802CC87ED8_OFFSET UNITYSDK_OFFSET(0x13DAB3A0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_2AD9227EB04196F4_OFFSET UNITYSDK_OFFSET(0x13DAA1F0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_4BDDA83A3E9868DC_OFFSET UNITYSDK_OFFSET(0x13DAC160)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13DADE70)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_57C4AEA703D76F6E_OFFSET UNITYSDK_OFFSET(0x13DADDD0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0x13DAA8A0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_6C5DF8BFB3D9C640_OFFSET UNITYSDK_OFFSET(0x13DAD140)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_76259B0AF2C3C666_OFFSET UNITYSDK_OFFSET(0x13DAC880)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_7F62DEBE566C05B0_OFFSET UNITYSDK_OFFSET(0x13DAB040)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_80BBB1FFBF365A2A_OFFSET UNITYSDK_OFFSET(0x13DAC2E0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0x13DABBA0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_9219C2A9E5905AEF_OFFSET UNITYSDK_OFFSET(0x13DABEC0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_9549CBCBCD3D977F_OFFSET UNITYSDK_OFFSET(0x13DACB00)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_98D20D52586D1B5F_OFFSET UNITYSDK_OFFSET(0x13DAB2F0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x13DAA960)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13DA9460)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x13DAC730)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x13DADB80)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_ADE7EC82E13C7741_OFFSET UNITYSDK_OFFSET(0x13DA9D50)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_BB4F9CE38883FF81_OFFSET UNITYSDK_OFFSET(0x13DA81F0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x13DAD620)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_C859A67AAEA0562C_OFFSET UNITYSDK_OFFSET(0x13DAC720)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13DAD0B0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x13DACCE0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x13DAA710)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x13DA9500)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x13DAC010)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_E46DDF7FC80BC770_OFFSET UNITYSDK_OFFSET(0x13DA9EC0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x13DAB300)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x13DAC4B0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x13DACAA0)
#define CLASS_2_9FCC85CCFECD4422_METHOD_2_F9DD5BEBBFAE60E4_OFFSET UNITYSDK_OFFSET(0x13DA9AE0)
#define CLASS_2_9FCC85CCFECD4422__CTOR_OFFSET UNITYSDK_OFFSET(0x13DA9680)

inline static constexpr unsigned int Class_2_9FCC85CCFECD4422_TypeDefinitionIndex = 40609;

class Class_2_9FCC85CCFECD4422 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	// static const ::System::Int32 Field_2_36 = 0x3; // 0x0
	// static const ::System::Int32 Field_2_37 = 0x3; // 0x0
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x50
	::Class_1_5DA2E7556103D5A3_96* Field_2_40; // 0x58
	::UnityEngine::GameObject* Field_2_18; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x68
	::UnityEngine::RectTransform* Field_2_7; // 0x70
	::Class_1_5DA2E7556103D5A3_111* Field_2_41; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_25; // 0x80
	::Class_2_9A3131FC3F38E383* Field_2_44; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_27; // 0x90
	::Class_2_B4378B46E0020E85* Field_2_23; // 0x98
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0xA0
	::UnityEngine::GameObject* Field_2_22; // 0xA8
	::Class_2_104EA16A1BE40F83* Field_2_45; // 0xB0
	::Class_2_B4378B46E0020E85* Field_2_0; // 0xB8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_26; // 0xC0
	::Class_2_1A39E1B51756BF41* Field_2_16; // 0xC8
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0xD0
	::MoleMole::MonoGamepadCustomList* Field_2_28; // 0xD8
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0xE0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_30; // 0xE8
	::Class_0_16E4307DCC41950C_13<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* Field_2_29; // 0xF0
	::Class_2_1A39E1B51756BF41* Field_2_14; // 0xF8
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x100
	::Class_2_1A39E1B51756BF41* Field_2_24; // 0x108
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x110
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x118
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x120
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x128
	::UnityEngine::RectTransform* Field_2_8; // 0x130
	::System::Collections::Generic::List_1<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>* Field_2_42; // 0x138
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_34; // 0x140
	::Class_2_1A39E1B51756BF41* Field_2_19; // 0x148
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x150
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_2_33; // 0x158
	::Class_2_1A39E1B51756BF41* Field_2_17; // 0x160
	::System::Collections::Generic::List_1<::Class_2_10C1E1662BD0781C_Class_1_025C70E19F82BF2F*>* Field_2_31; // 0x168
	::UnityEngine::GameObject* Field_2_21; // 0x170
	::UnityEngine::GameObject* Field_2_13; // 0x178
	::Class_1_5DA2E7556103D5A3_336* Field_2_39; // 0x180
	::System::Collections::Generic::List_1<::Class_3_6630F8877346891C<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>*>* Field_2_20; // 0x188
	::Il2CppArray<::Class_2_1824EF69C8E376A3*>* Field_2_32; // 0x190
	::MoleMole::UIBossChallengePageController_RoomInfoData Field_2_38; // 0x198
	::System::Int32 Field_2_35; // 0x1A4
	::System::Int32 Field_2_43; // 0x1A8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BB4F9CE38883FF81(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_BB4F9CE38883FF81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_F9DD5BEBBFAE60E4(::Class_2_1A39E1B51756BF41* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_F9DD5BEBBFAE60E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_ADE7EC82E13C7741(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_ADE7EC82E13C7741_OFFSET))(this, a1);
	}

	::System::Void Method_2_E46DDF7FC80BC770(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_E46DDF7FC80BC770_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AD9227EB04196F4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_2AD9227EB04196F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_2_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_98D20D52586D1B5F(::Class_0_16E4307DCC41950C_13<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_98D20D52586D1B5F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_7F62DEBE566C05B0(::Class_1_5DA2E7556103D5A3_111* a1, ::Class_2_F8EB4D9464ADCCA1* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_111*, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_7F62DEBE566C05B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9219C2A9E5905AEF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_9219C2A9E5905AEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_0002FD427F9DA06E(::Class_2_1A39E1B51756BF41* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_0002FD427F9DA06E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_4BDDA83A3E9868DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_4BDDA83A3E9868DC_OFFSET))(this);
	}

	::System::Void Method_2_80BBB1FFBF365A2A(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_80BBB1FFBF365A2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::Class_0_16E4307DCC41950C_13<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>* Method_2_C859A67AAEA0562C()
	{
		return ((::Class_0_16E4307DCC41950C_13<::MoleMole::UIBossChallengeQuickTeamListRowWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_C859A67AAEA0562C_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_76259B0AF2C3C666(::Class_2_10C1E1662BD0781C_Class_1_025C70E19F82BF2F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_10C1E1662BD0781C_Class_1_025C70E19F82BF2F*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_76259B0AF2C3C666_OFFSET))(this, a1);
	}

	::System::Void Method_2_9549CBCBCD3D977F(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_9549CBCBCD3D977F_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_8BC85DADEC2C3862_OFFSET))(this);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1734DB95D619A946(::Class_2_1A39E1B51756BF41* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_1734DB95D619A946_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6C5DF8BFB3D9C640(::System::Int32 a1, ::MoleMole::UIBossChallengePageController_RoomInfoData a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBossChallengePageController_RoomInfoData))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_6C5DF8BFB3D9C640_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::MoleMole::UIBossChallengeDetailRoleRowWidgetController* Method_2_57C4AEA703D76F6E(::Class_3_6630F8877346891C<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>* a1)
	{
		return ((::MoleMole::UIBossChallengeDetailRoleRowWidgetController*(*)(::PVOID, ::Class_3_6630F8877346891C<::MoleMole::UIBossChallengeDetailRoleRowWidgetController*>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_57C4AEA703D76F6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_29890C802CC87ED8(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_METHOD_2_29890C802CC87ED8_OFFSET))(this, a1);
	}
};

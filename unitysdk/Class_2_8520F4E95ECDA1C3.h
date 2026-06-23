#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Enum_3_7A61FE75AFF4E240.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_5DA2E7556103D5A3_386;
class Class_1_5DA2E7556103D5A3_414;
class Class_1_6E27A6139B6AC956;
class Class_2_1824EF69C8E376A3;
class Class_2_1A39E1B51756BF41;
class Class_2_4D8739E272CE2D35;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
class Class_2_F8EB4D9464ADCCA1;
class Class_3_025FF4981524A424_494;
class Class_3_3D3D5AB52AC6095A;
class Class_3_4DFEF16562BE6605_5_Class_4_E8B7CBB6A6429A63;
class Class_3_4DFEF16562BE6605_5_Class_4_E8B7CBB6A6429A63_1;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBuffPanelWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_E2828CA0AAE5C975;

#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x15FD12A0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_08BC5F80744BF2F7_1_OFFSET UNITYSDK_OFFSET(0x15FD3EC0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_08BC5F80744BF2F7_OFFSET UNITYSDK_OFFSET(0x15FD37C0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_0F72EB07B305C2F1_1_OFFSET UNITYSDK_OFFSET(0x15FD68A0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_0F72EB07B305C2F1_OFFSET UNITYSDK_OFFSET(0x15FD1E00)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x15FD4DE0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x15FD4B60)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_1AE07FDB9C7B9E43_OFFSET UNITYSDK_OFFSET(0x15FD3B70)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_306DD1EFCEBCF285_OFFSET UNITYSDK_OFFSET(0x15FD3A30)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_33DA59074B8E204B_OFFSET UNITYSDK_OFFSET(0x15FD2990)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0x15FD4A20)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15FD0570)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x15FD4270)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x15FD40A0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_47D42B95159AE8D1_OFFSET UNITYSDK_OFFSET(0x15FD6A40)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_4A924CEE40144255_OFFSET UNITYSDK_OFFSET(0x15FD1FB0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_4EA6B1791DACA9CC_1_OFFSET UNITYSDK_OFFSET(0x15FD5170)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x15FD4F50)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_5388312B490900A3_OFFSET UNITYSDK_OFFSET(0x15FD0C70)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x15FD5780)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x15FD55B0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x15FD5380)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x15FD0100)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_6DB0CBC8B59AD1F4_OFFSET UNITYSDK_OFFSET(0x15FD0EA0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x15FD6700)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x15FD4B10)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x15FD4990)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_7BEA63DE6FFF43F1_OFFSET UNITYSDK_OFFSET(0x15FD0F60)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_7EEBD5CFECCBC45E_OFFSET UNITYSDK_OFFSET(0x15FD3830)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_85DF30302C90C168_OFFSET UNITYSDK_OFFSET(0x15FD6AB0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x15FD57D0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x15FD2DB0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x15FD1820)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_A076FFFD24F1CF82_OFFSET UNITYSDK_OFFSET(0x15FD05D0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_A0E765C281314950_OFFSET UNITYSDK_OFFSET(0x15FD3080)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_AA957E371B77E633_OFFSET UNITYSDK_OFFSET(0x15FD5EB0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_AE28EB12CB70B929_OFFSET UNITYSDK_OFFSET(0x15FCDD70)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x15FD3430)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x15FD6110)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15FD56F0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15FD1790)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x15FD5330)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_D3F23593B8DA5FDC_OFFSET UNITYSDK_OFFSET(0x15FD1B40)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x15FCFF80)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x15FD3F80)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x15FD54E0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_E46B0BE7E11A158F_OFFSET UNITYSDK_OFFSET(0x15FD0760)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x15FD10E0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0x15FD36A0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x15FD3760)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x15FD4D90)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x15FD46C0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x15FD3F30)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_F98EEC809427A73C_OFFSET UNITYSDK_OFFSET(0x15FD34C0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x15FD2270)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_FFADC3D869800452_1_OFFSET UNITYSDK_OFFSET(0x15FD1D60)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_FFADC3D869800452_OFFSET UNITYSDK_OFFSET(0x15FD1AA0)
#define CLASS_2_8520F4E95ECDA1C3_METHOD_2_FFE039835364CD7B_OFFSET UNITYSDK_OFFSET(0x15FD3CC0)
#define CLASS_2_8520F4E95ECDA1C3__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD0D70)

inline static constexpr unsigned int Class_2_8520F4E95ECDA1C3_TypeDefinitionIndex = 72718;

class Class_2_8520F4E95ECDA1C3 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_63; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_19; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_40; // 0x60
	::UnityEngine::RectTransform* Field_2_33; // 0x68
	::UnityEngine::RectTransform* Field_2_11; // 0x70
	::MoleMole::UIGeneralButtonController* Field_2_9; // 0x78
	::UnityEngine::RectTransform* Field_2_46; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_37; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_12; // 0x90
	::UnityEngine::UI::Extension::UIImgText* Field_2_41; // 0x98
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_4DFEF16562BE6605_5_Class_4_E8B7CBB6A6429A63*>*>* Field_2_38; // 0xA0
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_29; // 0xA8
	::Class_2_1A39E1B51756BF41* Field_2_55; // 0xB0
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* Field_2_65; // 0xB8
	::UnityEngine::RectTransform* Field_2_36; // 0xC0
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0xC8
	::MoleMole::UIGeneralButtonController* Field_2_7; // 0xD0
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_57; // 0xD8
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_47; // 0xE0
	::Class_1_6E27A6139B6AC956* Field_2_80; // 0xE8
	::Class_2_1A39E1B51756BF41* Field_2_60; // 0xF0
	::Class_2_1A39E1B51756BF41* Field_2_61; // 0xF8
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_76; // 0x100
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x108
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x110
	::Class_2_1A39E1B51756BF41* Field_2_16; // 0x118
	::Class_2_1A39E1B51756BF41* Field_2_54; // 0x120
	::UnityEngine::RectTransform* Field_2_30; // 0x128
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_2_77; // 0x130
	::Class_2_B4378B46E0020E85* Field_2_59; // 0x138
	::UnityEngine::RectTransform* Field_2_42; // 0x140
	::UnityEngine::RectTransform* Field_2_50; // 0x148
	::UnityEngine::RectTransform* Field_2_10; // 0x150
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x158
	::Class_2_B4378B46E0020E85* Field_2_25; // 0x160
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_34; // 0x168
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_24; // 0x170
	::MoleMole::UIGeneralButtonController* Field_2_5; // 0x178
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x180
	::UnityEngine::RectTransform* Field_2_6; // 0x188
	::Class_2_B4378B46E0020E85* Field_2_52; // 0x190
	::UnityEngine::RectTransform* Field_2_43; // 0x198
	::MoleMole::UIGeneralBuffPanelWidgetController* Field_2_64; // 0x1A0
	::UnityEngine::RectTransform* Field_2_20; // 0x1A8
	::Class_3_3D3D5AB52AC6095A* Field_2_71; // 0x1B0
	::UnityEngine::RectTransform* Field_2_45; // 0x1B8
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_4DFEF16562BE6605_5_Class_4_E8B7CBB6A6429A63_1*>*>* Field_2_31; // 0x1C0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_17; // 0x1C8
	::UnityEngine::RectTransform* Field_2_32; // 0x1D0
	::MoleMole::UIGeneralButtonController* Field_2_8; // 0x1D8
	::Class_2_4D8739E272CE2D35* Field_2_66; // 0x1E0
	::Class_2_1A39E1B51756BF41* Field_2_51; // 0x1E8
	::UnityEngine::RectTransform* Field_2_48; // 0x1F0
	::Class_1_5DA2E7556103D5A3_386* Field_2_73; // 0x1F8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x200
	::Class_2_1A39E1B51756BF41* Field_2_53; // 0x208
	::Class_1_5DA2E7556103D5A3_414* Field_2_72; // 0x210
	::UnityEngine::RectTransform* Field_2_49; // 0x218
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x220
	::UnityEngine::RectTransform* Field_2_28; // 0x228
	::MoleMole::MonoGamepadCustomList* Field_2_58; // 0x230
	::UnityEngine::RectTransform* Field_2_13; // 0x238
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_44; // 0x240
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_35; // 0x248
	::UnityEngine::RectTransform* Field_2_56; // 0x250
	::UnityEngine::RectTransform* Field_2_39; // 0x258
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_26; // 0x260
	::UnityEngine::RectTransform* Field_2_21; // 0x268
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_27; // 0x270
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_23; // 0x278
	::Class_2_F8EB4D9464ADCCA1* Field_2_74; // 0x280
	::UnityEngine::RectTransform* Field_2_22; // 0x288
	::UnityEngine::RectTransform* Field_2_18; // 0x290
	::Class_2_1A39E1B51756BF41* Field_2_62; // 0x298
	::System::Int32 Field_2_67; // 0x2A0
	::Enum_3_7A61FE75AFF4E240 Field_2_68; // 0x2A4
	::System::Int32 Field_2_78; // 0x2A8
	::System::Int32 Field_2_79; // 0x2AC
	::System::Int32 Field_2_75; // 0x2B0
	::System::Int32 Field_2_70; // 0x2B4
	::System::Int32 Field_2_69; // 0x2B8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AE28EB12CB70B929(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_AE28EB12CB70B929_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_A076FFFD24F1CF82(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_A076FFFD24F1CF82_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6DB0CBC8B59AD1F4(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_6DB0CBC8B59AD1F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7BEA63DE6FFF43F1(::MoleMole::UIGeneralHeadRowWidgetController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_7BEA63DE6FFF43F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_0F72EB07B305C2F1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_0F72EB07B305C2F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E46B0BE7E11A158F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_E46B0BE7E11A158F_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_D3F23593B8DA5FDC()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_D3F23593B8DA5FDC_OFFSET))(this);
	}

	::System::Void Method_2_FFADC3D869800452(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_FFADC3D869800452_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::String* Method_2_A0E765C281314950(::System::Int32 a1, ::System::Int32 a2, ::Class_2_1824EF69C8E376A3* a3)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_A0E765C281314950_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F98EEC809427A73C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_F98EEC809427A73C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC00644AF39B5DED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_EC00644AF39B5DED_OFFSET))(this);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_FFADC3D869800452_1(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_FFADC3D869800452_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_08BC5F80744BF2F7(::MoleMole::UIGeneralHeadRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_08BC5F80744BF2F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EEBD5CFECCBC45E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_7EEBD5CFECCBC45E_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_306DD1EFCEBCF285(::Class_2_1824EF69C8E376A3* a1)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_306DD1EFCEBCF285_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AE07FDB9C7B9E43(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_1AE07FDB9C7B9E43_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A924CEE40144255()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_4A924CEE40144255_OFFSET))(this);
	}

	::System::Void Method_2_FFE039835364CD7B(::MoleMole::UIGeneralHeadRowWidgetController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_FFE039835364CD7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_5388312B490900A3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_5388312B490900A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_4EA6B1791DACA9CC_1_OFFSET))(this);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_2_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_5FAD56E9E208220A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_33DA59074B8E204B(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_33DA59074B8E204B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_3FAAA518D3F433CC_OFFSET))(this);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_08BC5F80744BF2F7_1(::MoleMole::UIGeneralHeadRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_08BC5F80744BF2F7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_AA957E371B77E633()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_AA957E371B77E633_OFFSET))(this);
	}

	::System::Void Method_2_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_0F72EB07B305C2F1_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_0F72EB07B305C2F1_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_47D42B95159AE8D1(::Class_3_025FF4981524A424_494* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_494*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_47D42B95159AE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_85DF30302C90C168(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3_METHOD_2_85DF30302C90C168_OFFSET))(this, a1);
	}
};

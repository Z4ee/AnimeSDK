#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Enum_3_88A364F1F2179491_2.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_5DA2E7556103D5A3_178;
class Class_1_5DA2E7556103D5A3_344;
class Class_1_6E27A6139B6AC956;
class Class_2_1824EF69C8E376A3;
class Class_2_1A39E1B51756BF41;
class Class_2_4D8739E272CE2D35;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
class Class_2_F8EB4D9464ADCCA1;
class Class_3_025FF4981524A424_51;
class Class_3_3D3D5AB52AC6095A;
class Class_3_408273B32D465A51_9_Class_4_E8B7CBB6A6429A63;
class Class_3_408273B32D465A51_9_Class_4_E8B7CBB6A6429A63_1;
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

#define CLASS_2_65431B70BEB038E5_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x165D5010)
#define CLASS_2_65431B70BEB038E5_METHOD_2_08BC5F80744BF2F7_1_OFFSET UNITYSDK_OFFSET(0x165D8B60)
#define CLASS_2_65431B70BEB038E5_METHOD_2_08BC5F80744BF2F7_OFFSET UNITYSDK_OFFSET(0x165D8AF0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_0F72EB07B305C2F1_1_OFFSET UNITYSDK_OFFSET(0x165D60E0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_0F72EB07B305C2F1_OFFSET UNITYSDK_OFFSET(0x165D4E60)
#define CLASS_2_65431B70BEB038E5_METHOD_2_16559FCDAE7E53DB_OFFSET UNITYSDK_OFFSET(0x165D46E0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x165D5DB0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x165D6280)
#define CLASS_2_65431B70BEB038E5_METHOD_2_1AE07FDB9C7B9E43_OFFSET UNITYSDK_OFFSET(0x165D94F0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_306DD1EFCEBCF285_OFFSET UNITYSDK_OFFSET(0x165D93B0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_33DA59074B8E204B_OFFSET UNITYSDK_OFFSET(0x165D8470)
#define CLASS_2_65431B70BEB038E5_METHOD_2_38FE3C72164BB8E3_OFFSET UNITYSDK_OFFSET(0x165D8BD0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0x165D90A0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x165D3460)
#define CLASS_2_65431B70BEB038E5_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x165D4A10)
#define CLASS_2_65431B70BEB038E5_METHOD_2_47D42B95159AE8D1_OFFSET UNITYSDK_OFFSET(0x165D48C0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_4EA6B1791DACA9CC_1_OFFSET UNITYSDK_OFFSET(0x165D9190)
#define CLASS_2_65431B70BEB038E5_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x165D4450)
#define CLASS_2_65431B70BEB038E5_METHOD_2_5388312B490900A3_OFFSET UNITYSDK_OFFSET(0x165D3B60)
#define CLASS_2_65431B70BEB038E5_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x165D6840)
#define CLASS_2_65431B70BEB038E5_METHOD_2_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x165D9BF0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_66153C75D9B30EA6_OFFSET UNITYSDK_OFFSET(0x165D3650)
#define CLASS_2_65431B70BEB038E5_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x165D9A10)
#define CLASS_2_65431B70BEB038E5_METHOD_2_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x165D6890)
#define CLASS_2_65431B70BEB038E5_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x165D77E0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x165D7980)
#define CLASS_2_65431B70BEB038E5_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x165D43C0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_7BEA63DE6FFF43F1_OFFSET UNITYSDK_OFFSET(0x165D7660)
#define CLASS_2_65431B70BEB038E5_METHOD_2_7EEBD5CFECCBC45E_OFFSET UNITYSDK_OFFSET(0x165D96A0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_85DF30302C90C168_OFFSET UNITYSDK_OFFSET(0x165D79D0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x165D7DD0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_8F7825DAFFB9B517_1_OFFSET UNITYSDK_OFFSET(0x165D2FE0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x165D6570)
#define CLASS_2_65431B70BEB038E5_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x165D3DE0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x165D3D90)
#define CLASS_2_65431B70BEB038E5_METHOD_2_A076FFFD24F1CF82_OFFSET UNITYSDK_OFFSET(0x165D34C0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_AA957E371B77E633_OFFSET UNITYSDK_OFFSET(0x165D8890)
#define CLASS_2_65431B70BEB038E5_METHOD_2_AE28EB12CB70B929_OFFSET UNITYSDK_OFFSET(0x165D0C50)
#define CLASS_2_65431B70BEB038E5_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x165D8F80)
#define CLASS_2_65431B70BEB038E5_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x165D57C0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x165D9010)
#define CLASS_2_65431B70BEB038E5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165D4930)
#define CLASS_2_65431B70BEB038E5_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x165D98A0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_CD9B97298FEB96F9_OFFSET UNITYSDK_OFFSET(0x165D64B0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_D3F23593B8DA5FDC_OFFSET UNITYSDK_OFFSET(0x165D4100)
#define CLASS_2_65431B70BEB038E5_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x165D2E60)
#define CLASS_2_65431B70BEB038E5_METHOD_2_D9F4209D09F89FB9_OFFSET UNITYSDK_OFFSET(0x165D5500)
#define CLASS_2_65431B70BEB038E5_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x165D98F0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x165D4610)
#define CLASS_2_65431B70BEB038E5_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x165D5F20)
#define CLASS_2_65431B70BEB038E5_METHOD_2_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0x165D69F0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x165D9640)
#define CLASS_2_65431B70BEB038E5_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x165D49C0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x165D6AB0)
#define CLASS_2_65431B70BEB038E5_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x165D6D70)
#define CLASS_2_65431B70BEB038E5_METHOD_2_FFADC3D869800452_1_OFFSET UNITYSDK_OFFSET(0x165D4320)
#define CLASS_2_65431B70BEB038E5_METHOD_2_FFADC3D869800452_OFFSET UNITYSDK_OFFSET(0x165D4060)
#define CLASS_2_65431B70BEB038E5_METHOD_2_FFE039835364CD7B_OFFSET UNITYSDK_OFFSET(0x165D7460)
#define CLASS_2_65431B70BEB038E5__CTOR_OFFSET UNITYSDK_OFFSET(0x165D3C60)

inline static constexpr unsigned int Class_2_65431B70BEB038E5_TypeDefinitionIndex = 54153;

class Class_2_65431B70BEB038E5 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x50
	::UnityEngine::RectTransform* Field_2_21; // 0x58
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x68
	::Class_1_5DA2E7556103D5A3_344* Field_2_75; // 0x70
	::Class_3_3D3D5AB52AC6095A* Field_2_68; // 0x78
	::UnityEngine::RectTransform* Field_2_29; // 0x80
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_408273B32D465A51_9_Class_4_E8B7CBB6A6429A63*>*>* Field_2_28; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_27; // 0x90
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_60; // 0x98
	::Class_2_4D8739E272CE2D35* Field_2_65; // 0xA0
	::UnityEngine::RectTransform* Field_2_5; // 0xA8
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* Field_2_66; // 0xB0
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0xB8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_38; // 0xC0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_79; // 0xC8
	::Class_2_B4378B46E0020E85* Field_2_7; // 0xD0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_25; // 0xD8
	::UnityEngine::RectTransform* Field_2_40; // 0xE0
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_44; // 0xE8
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_32; // 0xF0
	::UnityEngine::RectTransform* Field_2_36; // 0xF8
	::UnityEngine::RectTransform* Field_2_31; // 0x100
	::Class_2_1A39E1B51756BF41* Field_2_48; // 0x108
	::UnityEngine::RectTransform* Field_2_51; // 0x110
	::Class_2_1A39E1B51756BF41* Field_2_53; // 0x118
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_2_78; // 0x120
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x128
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x130
	::UnityEngine::RectTransform* Field_2_59; // 0x138
	::Class_2_B4378B46E0020E85* Field_2_26; // 0x140
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_13; // 0x148
	::Class_2_B4378B46E0020E85* Field_2_55; // 0x150
	::UnityEngine::RectTransform* Field_2_45; // 0x158
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_30; // 0x160
	::UnityEngine::RectTransform* Field_2_46; // 0x168
	::UnityEngine::RectTransform* Field_2_9; // 0x170
	::UnityEngine::RectTransform* Field_2_34; // 0x178
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_43; // 0x180
	::UnityEngine::RectTransform* Field_2_50; // 0x188
	::UnityEngine::UI::Extension::UIImgText* Field_2_42; // 0x190
	::Class_2_1A39E1B51756BF41* Field_2_62; // 0x198
	::MoleMole::UIGeneralButtonController* Field_2_11; // 0x1A0
	::MoleMole::UIGeneralButtonController* Field_2_10; // 0x1A8
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_33; // 0x1B0
	::UnityEngine::RectTransform* Field_2_8; // 0x1B8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_18; // 0x1C0
	::Class_2_1A39E1B51756BF41* Field_2_52; // 0x1C8
	::Class_2_1A39E1B51756BF41* Field_2_61; // 0x1D0
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_47; // 0x1D8
	::Class_2_1A39E1B51756BF41* Field_2_63; // 0x1E0
	::Class_2_F8EB4D9464ADCCA1* Field_2_73; // 0x1E8
	::Class_2_B4378B46E0020E85* Field_2_56; // 0x1F0
	::MoleMole::UIGeneralBuffPanelWidgetController* Field_2_67; // 0x1F8
	::MoleMole::MonoGamepadCustomList* Field_2_57; // 0x200
	::UnityEngine::RectTransform* Field_2_35; // 0x208
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x210
	::UnityEngine::RectTransform* Field_2_14; // 0x218
	::UnityEngine::RectTransform* Field_2_17; // 0x220
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_408273B32D465A51_9_Class_4_E8B7CBB6A6429A63_1*>*>* Field_2_37; // 0x228
	::UnityEngine::RectTransform* Field_2_41; // 0x230
	::UnityEngine::RectTransform* Field_2_23; // 0x238
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x240
	::Class_2_1A39E1B51756BF41* Field_2_19; // 0x248
	::Class_2_1A39E1B51756BF41* Field_2_16; // 0x250
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_20; // 0x258
	::Class_1_5DA2E7556103D5A3_178* Field_2_74; // 0x260
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_58; // 0x268
	::Class_2_1A39E1B51756BF41* Field_2_54; // 0x270
	::UnityEngine::RectTransform* Field_2_49; // 0x278
	::UnityEngine::RectTransform* Field_2_22; // 0x280
	::UnityEngine::RectTransform* Field_2_39; // 0x288
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_24; // 0x290
	::Class_1_6E27A6139B6AC956* Field_2_83; // 0x298
	::System::Int32 Field_2_72; // 0x2A0
	::System::Int32 Field_2_69; // 0x2A4
	::System::Int32 Field_2_77; // 0x2A8
	::System::Int32 Field_2_64; // 0x2AC
	::Enum_3_88A364F1F2179491_2 Field_2_71; // 0x2B0
	::System::Int32 Field_2_76; // 0x2B4
	::System::Int32 Field_2_70; // 0x2B8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AE28EB12CB70B929(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_AE28EB12CB70B929_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_A076FFFD24F1CF82(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_A076FFFD24F1CF82_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_16559FCDAE7E53DB(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_16559FCDAE7E53DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_47D42B95159AE8D1(::Class_3_025FF4981524A424_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_51*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_47D42B95159AE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_D3F23593B8DA5FDC()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_D3F23593B8DA5FDC_OFFSET))(this);
	}

	::System::Void Method_2_0F72EB07B305C2F1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_0F72EB07B305C2F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_0F72EB07B305C2F1_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_0F72EB07B305C2F1_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CD9B97298FEB96F9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_CD9B97298FEB96F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_2_EC00644AF39B5DED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_EC00644AF39B5DED_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_2_FFE039835364CD7B(::MoleMole::UIGeneralHeadRowWidgetController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_FFE039835364CD7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7BEA63DE6FFF43F1(::MoleMole::UIGeneralHeadRowWidgetController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_7BEA63DE6FFF43F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_85DF30302C90C168(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_85DF30302C90C168_OFFSET))(this, a1);
	}

	::System::Void Method_2_33DA59074B8E204B(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_33DA59074B8E204B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA957E371B77E633()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_AA957E371B77E633_OFFSET))(this);
	}

	::System::Void Method_2_08BC5F80744BF2F7(::MoleMole::UIGeneralHeadRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_08BC5F80744BF2F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BC5F80744BF2F7_1(::MoleMole::UIGeneralHeadRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_08BC5F80744BF2F7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::String* Method_2_38FE3C72164BB8E3(::System::Int32 a1, ::System::Int32 a2, ::Class_2_1824EF69C8E376A3* a3)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_38FE3C72164BB8E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8F7825DAFFB9B517_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_8F7825DAFFB9B517_1_OFFSET))(this);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_3FAAA518D3F433CC_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_4EA6B1791DACA9CC_1_OFFSET))(this);
	}

	::System::Void Method_2_FFADC3D869800452(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_FFADC3D869800452_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_306DD1EFCEBCF285(::Class_2_1824EF69C8E376A3* a1)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_306DD1EFCEBCF285_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFADC3D869800452_1(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_FFADC3D869800452_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AE07FDB9C7B9E43(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_1AE07FDB9C7B9E43_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void Method_2_7EEBD5CFECCBC45E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_7EEBD5CFECCBC45E_OFFSET))(this);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_2_D9F4209D09F89FB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_D9F4209D09F89FB9_OFFSET))(this);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_66153C75D9B30EA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_66153C75D9B30EA6_OFFSET))(this, a1);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_5388312B490900A3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_5388312B490900A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5_METHOD_2_5FAD56E9E208220A_OFFSET))(this);
	}
};

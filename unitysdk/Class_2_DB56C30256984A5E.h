#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/MonoUITableScrollV2_ScrollMeta.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_457;
class Class_1_1685EC66FBD28897;
class Class_2_134E5210FBBAC6E5;
class Class_2_1A39E1B51756BF41;
class Class_2_D1CED082B4F1459A;
class Class_2_E87F1D15F1D4AC72;
class Class_3_7A267C1006DF3527;
class Class_3_C3F0E3B5AB5977AE_3;
class MonoUITableScrollV2;
namespace MoleMole { class UIBangkovBagSubPanelWidgetController_Context; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_DB56C30256984A5E_METHOD_2_0303EA996E2229CD_OFFSET UNITYSDK_OFFSET(0x16643EC0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x16639E30)
#define CLASS_2_DB56C30256984A5E_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x16635E50)
#define CLASS_2_DB56C30256984A5E_METHOD_2_1266A942BF66AA3D_OFFSET UNITYSDK_OFFSET(0x16641E80)
#define CLASS_2_DB56C30256984A5E_METHOD_2_1351D0EC66310CF3_OFFSET UNITYSDK_OFFSET(0x1663FB30)
#define CLASS_2_DB56C30256984A5E_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x1663E410)
#define CLASS_2_DB56C30256984A5E_METHOD_2_261DF843E298B71B_1_OFFSET UNITYSDK_OFFSET(0x16639380)
#define CLASS_2_DB56C30256984A5E_METHOD_2_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0x1663EF30)
#define CLASS_2_DB56C30256984A5E_METHOD_2_2FAEE67AE4D55CD9_OFFSET UNITYSDK_OFFSET(0x16642DD0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_311BE8873930132D_OFFSET UNITYSDK_OFFSET(0x16642BD0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_3EA6C397C34AAC8F_OFFSET UNITYSDK_OFFSET(0x16642B40)
#define CLASS_2_DB56C30256984A5E_METHOD_2_41997AFD133B2134_OFFSET UNITYSDK_OFFSET(0x16639650)
#define CLASS_2_DB56C30256984A5E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1663BE70)
#define CLASS_2_DB56C30256984A5E_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x16641470)
#define CLASS_2_DB56C30256984A5E_METHOD_2_5ACFF98CC29B00A1_OFFSET UNITYSDK_OFFSET(0x16642F30)
#define CLASS_2_DB56C30256984A5E_METHOD_2_65C8295A99348326_OFFSET UNITYSDK_OFFSET(0x1663EFC0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_7979FF5AB50794DE_OFFSET UNITYSDK_OFFSET(0x16643CD0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_7C96C65E6F94E09E_OFFSET UNITYSDK_OFFSET(0x166390C0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_8DDF3004C510AB0A_OFFSET UNITYSDK_OFFSET(0x166406B0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x16635FA0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0x16635E00)
#define CLASS_2_DB56C30256984A5E_METHOD_2_A1075642AC8E7495_OFFSET UNITYSDK_OFFSET(0x1663BAE0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_A1241FFDFABF9ED7_OFFSET UNITYSDK_OFFSET(0x1663E6B0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_AA5A63EF1421373E_OFFSET UNITYSDK_OFFSET(0x16641E70)
#define CLASS_2_DB56C30256984A5E_METHOD_2_AB47C0AD5F8C704F_OFFSET UNITYSDK_OFFSET(0x1663D9D0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_AE2206521FDCAB54_OFFSET UNITYSDK_OFFSET(0x166444E0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_AF77DFF9D5C3C4C0_OFFSET UNITYSDK_OFFSET(0x1663F6C0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x1663BEE0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1663ECA0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_B2C52ACF9D9B435B_1_OFFSET UNITYSDK_OFFSET(0x166431D0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x16642020)
#define CLASS_2_DB56C30256984A5E_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x16642B20)
#define CLASS_2_DB56C30256984A5E_METHOD_2_C2CACDCDB513150B_OFFSET UNITYSDK_OFFSET(0x16641410)
#define CLASS_2_DB56C30256984A5E_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16642B30)
#define CLASS_2_DB56C30256984A5E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16641380)
#define CLASS_2_DB56C30256984A5E_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x16643E30)
#define CLASS_2_DB56C30256984A5E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1663EEA0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_D0CF1F88429C1E1C_OFFSET UNITYSDK_OFFSET(0x166444D0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_E03BFC9324B200B6_OFFSET UNITYSDK_OFFSET(0x16639400)
#define CLASS_2_DB56C30256984A5E_METHOD_2_E1BF03A233A7778C_OFFSET UNITYSDK_OFFSET(0x1663ABA0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x1663ED10)
#define CLASS_2_DB56C30256984A5E_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x16644250)
#define CLASS_2_DB56C30256984A5E_METHOD_2_F773D945760BF918_1_OFFSET UNITYSDK_OFFSET(0x16642B50)
#define CLASS_2_DB56C30256984A5E_METHOD_2_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0x16641DF0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_FDF9B21BA16000B3_1_OFFSET UNITYSDK_OFFSET(0x1663D950)
#define CLASS_2_DB56C30256984A5E_METHOD_2_FDF9B21BA16000B3_OFFSET UNITYSDK_OFFSET(0x1663D8D0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_FE200325DC71EE44_OFFSET UNITYSDK_OFFSET(0x1663E6C0)
#define CLASS_2_DB56C30256984A5E_METHOD_2_FE3C57C9613968EB_OFFSET UNITYSDK_OFFSET(0x1663F150)
#define CLASS_2_DB56C30256984A5E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1663D780)
#define CLASS_2_DB56C30256984A5E__CTOR_OFFSET UNITYSDK_OFFSET(0x1663D690)

inline static constexpr unsigned int Class_2_DB56C30256984A5E_TypeDefinitionIndex = 70142;

class Class_2_DB56C30256984A5E : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_2_19()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DB56C30256984A5E_TypeDefinitionIndex)->GetStaticField(0x3D760);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_2_20()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DB56C30256984A5E_TypeDefinitionIndex)->GetStaticField(0x3D768);
	}
	static ::System::Collections::Generic::List_1<::Enum_3_01618AD0437C8486>** StaticGet_Field_2_6()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_01618AD0437C8486>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DB56C30256984A5E_TypeDefinitionIndex)->GetStaticField(0x3D770);
	}
	static ::UnityEngine::Color* StaticGet_Field_2_44()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_2_DB56C30256984A5E_TypeDefinitionIndex)->GetStaticField(0xF010);
	}
	// static const ::System::Single Field_2_28; // 0x0
	// static const ::System::Single Field_2_29; // 0x0
	::Class_0_16E4307DCC41950C_13<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>* Field_2_0; // 0x50
	::UnityEngine::GameObject* Field_2_34; // 0x58
	::System::Action* Field_2_25; // 0x60
	::System::Action_1<::Class_0_16E4307DCC419505_457*>* Field_2_24; // 0x68
	::Class_0_16E4307DCC41950C_13<::System::Int32>* Field_2_1; // 0x70
	::UnityEngine::RectTransform* Field_2_37; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_9; // 0x80
	::UnityEngine::UI::Image* Field_2_5; // 0x88
	::UnityEngine::GameObject* Field_2_18; // 0x90
	::Class_2_D1CED082B4F1459A* Field_2_21; // 0x98
	::System::Action* Field_2_40; // 0xA0
	::UnityEngine::GameObject* Field_2_17; // 0xA8
	::UnityEngine::RectTransform* Field_2_43; // 0xB0
	::System::Action_1<::UnityEngine::Vector2>* Field_2_31; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_2_7; // 0xC0
	::MonoUITableScrollV2* Field_2_15; // 0xC8
	::UnityEngine::RectTransform* Field_2_36; // 0xD0
	::Class_2_1A39E1B51756BF41* Field_2_33; // 0xD8
	::MonoUITableScrollV2* Field_2_16; // 0xE0
	::UnityEngine::RectTransform* Field_2_41; // 0xE8
	::Class_2_1A39E1B51756BF41* Field_2_32; // 0xF0
	::Class_0_16E4307DCC41950C_13<::System::Int32>* Field_2_2; // 0xF8
	::System::Action* Field_2_39; // 0x100
	::MonoUITableScrollV2* Field_2_14; // 0x108
	::UnityEngine::RectTransform* Field_2_42; // 0x110
	::System::Action* Field_2_38; // 0x118
	::System::Action* Field_2_23; // 0x120
	::MonoUITableScrollV2* Field_2_26; // 0x128
	::System::Action_1<::System::Object*>* Field_2_22; // 0x130
	::System::Action* Field_2_8; // 0x138
	::UnityEngine::Animation* Field_2_4; // 0x140
	::System::Boolean Field_2_35; // 0x148
	::System::Boolean Field_2_27; // 0x149
	::System::Boolean Field_2_13; // 0x14A
	::System::Boolean Field_2_11; // 0x14B
	::System::Boolean Field_2_12; // 0x14C
	::System::Boolean Field_2_10; // 0x14D
	::System::Boolean Field_2_30; // 0x14E
	::System::Int32 Field_2_3; // 0x150

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_41997AFD133B2134(::Class_2_134E5210FBBAC6E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_134E5210FBBAC6E5*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_41997AFD133B2134_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDF9B21BA16000B3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_FDF9B21BA16000B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDF9B21BA16000B3_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_FDF9B21BA16000B3_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB47C0AD5F8C704F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_AB47C0AD5F8C704F_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1241FFDFABF9ED7(::Class_0_16E4307DCC41950C_13<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_A1241FFDFABF9ED7_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE200325DC71EE44(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_FE200325DC71EE44_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_261DF843E298B71B()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_261DF843E298B71B_OFFSET))(this);
	}

	static ::System::Boolean Method_2_65C8295A99348326(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_65C8295A99348326_OFFSET))(a1, a2);
	}

	::System::Void Method_2_A1075642AC8E7495(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_A1075642AC8E7495_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF77DFF9D5C3C4C0(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_AF77DFF9D5C3C4C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_1351D0EC66310CF3(::MonoUITableScrollV2* a1, ::Enum_3_01618AD0437C8486 a2, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::Enum_3_01618AD0437C8486, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_1351D0EC66310CF3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_C2CACDCDB513150B(::MonoUITableScrollV2_ScrollMeta a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollMeta))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_C2CACDCDB513150B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F773D945760BF918(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_F773D945760BF918_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE3C57C9613968EB(::MonoUITableScrollV2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_FE3C57C9613968EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA5A63EF1421373E(::Class_0_16E4307DCC41950C_13<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_AA5A63EF1421373E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_8DDF3004C510AB0A(::MonoUITableScrollV2* a1, ::System::Collections::Generic::List_1<::Enum_3_01618AD0437C8486>* a2, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::Generic::List_1<::Enum_3_01618AD0437C8486>*, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_8DDF3004C510AB0A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Void Method_2_E1BF03A233A7778C(::MonoUITableScrollV2* a1, ::MonoUITableScrollV2* a2, ::MonoUITableScrollV2* a3, ::Class_2_134E5210FBBAC6E5* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::MonoUITableScrollV2*, ::MonoUITableScrollV2*, ::Class_2_134E5210FBBAC6E5*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_E1BF03A233A7778C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::Class_0_16E4307DCC41950C_13<::System::Int32>* Method_2_3EA6C397C34AAC8F()
	{
		return ((::Class_0_16E4307DCC41950C_13<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_3EA6C397C34AAC8F_OFFSET))(this);
	}

	::System::Void Method_2_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_2_F773D945760BF918_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_F773D945760BF918_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_311BE8873930132D(::Class_1_1685EC66FBD28897* a1, ::Class_3_7A267C1006DF3527* a2)
	{
		return ((::System::Void(*)(::Class_1_1685EC66FBD28897*, ::Class_3_7A267C1006DF3527*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_311BE8873930132D_OFFSET))(a1, a2);
	}

	::System::Void Method_2_2FAEE67AE4D55CD9(::Class_3_C3F0E3B5AB5977AE_3* a1, ::Class_3_C3F0E3B5AB5977AE_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_3*, ::Class_3_C3F0E3B5AB5977AE_3*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_2FAEE67AE4D55CD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5ACFF98CC29B00A1(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Object* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_5ACFF98CC29B00A1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B2C52ACF9D9B435B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_B2C52ACF9D9B435B_1_OFFSET))(this);
	}

	::System::Void Method_2_7979FF5AB50794DE(::Class_3_C3F0E3B5AB5977AE_3* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_3*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_7979FF5AB50794DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_261DF843E298B71B_1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_261DF843E298B71B_1_OFFSET))(this);
	}

	::System::Void Method_2_0303EA996E2229CD(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Object* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_0303EA996E2229CD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7C96C65E6F94E09E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_7C96C65E6F94E09E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1266A942BF66AA3D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_1266A942BF66AA3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_E03BFC9324B200B6(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_E03BFC9324B200B6_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC41950C_13<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>* Method_2_D0CF1F88429C1E1C()
	{
		return ((::Class_0_16E4307DCC41950C_13<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_D0CF1F88429C1E1C_OFFSET))(this);
	}

	::System::Void Method_2_AE2206521FDCAB54(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_DB56C30256984A5E_METHOD_2_AE2206521FDCAB54_OFFSET))(this, a1);
	}
};

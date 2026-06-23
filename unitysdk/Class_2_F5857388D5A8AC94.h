#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Enum_3_01618AD0437C8486_1.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/MonoUITableScrollV2_ScrollMeta.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_241;
class Class_1_1685EC66FBD28897;
class Class_2_134E5210FBBAC6E5;
class Class_2_1A39E1B51756BF41;
class Class_2_D1CED082B4F1459A;
class Class_2_E87F1D15F1D4AC72;
class Class_3_7A267C1006DF3527_1;
class Class_3_C3F0E3B5AB5977AE;
class MonoUITableScrollV2;
namespace MoleMole { class UIBangkovBagSubPanelWidgetController_Context; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
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
template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_F5857388D5A8AC94_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x179EC4D0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_1266A942BF66AA3D_OFFSET UNITYSDK_OFFSET(0x179F4E00)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_1351D0EC66310CF3_OFFSET UNITYSDK_OFFSET(0x179F40A0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x179F2BB0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_261DF843E298B71B_1_OFFSET UNITYSDK_OFFSET(0x179F6740)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0x179EBA20)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_2FAEE67AE4D55CD9_OFFSET UNITYSDK_OFFSET(0x179F0980)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_311BE8873930132D_OFFSET UNITYSDK_OFFSET(0x179F1940)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_38DEB559D235FE18_OFFSET UNITYSDK_OFFSET(0x179F1B40)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_3EA6C397C34AAC8F_OFFSET UNITYSDK_OFFSET(0x179F50C0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_41997AFD133B2134_OFFSET UNITYSDK_OFFSET(0x179EBCF0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x179EE4A0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x179E8720)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_5ACFF98CC29B00A1_OFFSET UNITYSDK_OFFSET(0x179F0C90)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_65C8295A99348326_OFFSET UNITYSDK_OFFSET(0x179F0AE0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x179EFF20)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_7979FF5AB50794DE_OFFSET UNITYSDK_OFFSET(0x179F4C20)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_7C96C65E6F94E09E_OFFSET UNITYSDK_OFFSET(0x179EB760)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_83F05C0E85DCC0D0_OFFSET UNITYSDK_OFFSET(0x179F0F30)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x179EE150)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_948FFB67AB91EBB7_OFFSET UNITYSDK_OFFSET(0x179F1370)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0x179E86D0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_A1241FFDFABF9ED7_OFFSET UNITYSDK_OFFSET(0x179F0C70)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_AA5A63EF1421373E_OFFSET UNITYSDK_OFFSET(0x179F33D0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_AB47C0AD5F8C704F_OFFSET UNITYSDK_OFFSET(0x179F7E90)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_AE2206521FDCAB54_OFFSET UNITYSDK_OFFSET(0x179F2840)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x179EE510)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x179F4D80)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x179F5160)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x179F0C80)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x179F4DF0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_C751E4F3F332C05D_OFFSET UNITYSDK_OFFSET(0x179EFEC0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_C8E2469222842786_1_OFFSET UNITYSDK_OFFSET(0x179F72A0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x179F67C0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x179F50D0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x179F7E00)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x179F5030)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_D0CF1F88429C1E1C_OFFSET UNITYSDK_OFFSET(0x179F2E50)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_E03BFC9324B200B6_OFFSET UNITYSDK_OFFSET(0x179EBAA0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_E1BF03A233A7778C_OFFSET UNITYSDK_OFFSET(0x179ED200)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_ED9404AAED87BF25_OFFSET UNITYSDK_OFFSET(0x179F33E0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_EE014829E78CFBA8_OFFSET UNITYSDK_OFFSET(0x179F2420)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x179F2A10)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x179E87F0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_F773D945760BF918_1_OFFSET UNITYSDK_OFFSET(0x179F4FB0)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0x179F0900)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_FDF9B21BA16000B3_1_OFFSET UNITYSDK_OFFSET(0x179F7D80)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_FDF9B21BA16000B3_OFFSET UNITYSDK_OFFSET(0x179F0880)
#define CLASS_2_F5857388D5A8AC94_METHOD_2_FE3C57C9613968EB_OFFSET UNITYSDK_OFFSET(0x179F2E60)
#define CLASS_2_F5857388D5A8AC94__CCTOR_OFFSET UNITYSDK_OFFSET(0x179EFD70)
#define CLASS_2_F5857388D5A8AC94__CTOR_OFFSET UNITYSDK_OFFSET(0x179EFC80)

inline static constexpr unsigned int Class_2_F5857388D5A8AC94_TypeDefinitionIndex = 56821;

class Class_2_F5857388D5A8AC94 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_2_20()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F5857388D5A8AC94_TypeDefinitionIndex)->GetStaticField(0x395B0);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_2_19()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F5857388D5A8AC94_TypeDefinitionIndex)->GetStaticField(0x395B8);
	}
	static ::System::Collections::Generic::List_1<::Enum_3_01618AD0437C8486_1>** StaticGet_Field_2_6()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_01618AD0437C8486_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F5857388D5A8AC94_TypeDefinitionIndex)->GetStaticField(0x395C0);
	}
	static ::UnityEngine::Color* StaticGet_Field_2_44()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F5857388D5A8AC94_TypeDefinitionIndex)->GetStaticField(0xE280);
	}
	// static const ::System::Single Field_2_28; // 0x0
	// static const ::System::Single Field_2_29; // 0x0
	::UnityEngine::RectTransform* Field_2_36; // 0x50
	::System::Action* Field_2_23; // 0x58
	::UnityEngine::RectTransform* Field_2_42; // 0x60
	::System::Action* Field_2_40; // 0x68
	::UnityEngine::Animation* Field_2_4; // 0x70
	::System::Action* Field_2_38; // 0x78
	::System::Action_1<::UnityEngine::Vector2>* Field_2_31; // 0x80
	::MonoUITableScrollV2* Field_2_15; // 0x88
	::UnityEngine::GameObject* Field_2_34; // 0x90
	::Class_0_16E4307DCC419505_165<::System::Int32>* Field_2_2; // 0x98
	::System::Action_1<::System::Object*>* Field_2_22; // 0xA0
	::UnityEngine::RectTransform* Field_2_41; // 0xA8
	::MonoUITableScrollV2* Field_2_14; // 0xB0
	::Class_2_1A39E1B51756BF41* Field_2_32; // 0xB8
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_9; // 0xC0
	::Class_0_16E4307DCC419505_165<::System::Int32>* Field_2_1; // 0xC8
	::UnityEngine::RectTransform* Field_2_43; // 0xD0
	::UnityEngine::GameObject* Field_2_18; // 0xD8
	::Class_2_1A39E1B51756BF41* Field_2_33; // 0xE0
	::System::Action* Field_2_8; // 0xE8
	::System::Action_1<::Class_0_16E4307DCC419505_241*>* Field_2_24; // 0xF0
	::Class_0_16E4307DCC419505_165<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>* Field_2_0; // 0xF8
	::System::Action* Field_2_25; // 0x100
	::UnityEngine::GameObject* Field_2_17; // 0x108
	::System::Action* Field_2_39; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_2_7; // 0x118
	::MonoUITableScrollV2* Field_2_26; // 0x120
	::Class_2_D1CED082B4F1459A* Field_2_21; // 0x128
	::UnityEngine::UI::Image* Field_2_5; // 0x130
	::MonoUITableScrollV2* Field_2_16; // 0x138
	::UnityEngine::RectTransform* Field_2_37; // 0x140
	::System::Boolean Field_2_12; // 0x148
	::System::Boolean Field_2_10; // 0x149
	::System::Boolean Field_2_30; // 0x14A
	::System::Int32 Field_2_3; // 0x14C
	::System::Boolean Field_2_11; // 0x150
	::System::Boolean Field_2_27; // 0x151
	::System::Boolean Field_2_35; // 0x152
	::System::Boolean Field_2_13; // 0x153

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_C751E4F3F332C05D(::MonoUITableScrollV2_ScrollMeta a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollMeta))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_C751E4F3F332C05D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDF9B21BA16000B3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_FDF9B21BA16000B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F773D945760BF918(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_F773D945760BF918_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FAEE67AE4D55CD9(::Class_3_C3F0E3B5AB5977AE* a1, ::Class_3_C3F0E3B5AB5977AE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE*, ::Class_3_C3F0E3B5AB5977AE*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_2FAEE67AE4D55CD9_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_65C8295A99348326(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_65C8295A99348326_OFFSET))(a1, a2);
	}

	::System::Void Method_2_A1241FFDFABF9ED7(::Class_0_16E4307DCC419505_165<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_A1241FFDFABF9ED7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ACFF98CC29B00A1(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Object* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_5ACFF98CC29B00A1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_948FFB67AB91EBB7(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_948FFB67AB91EBB7_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_311BE8873930132D(::Class_1_1685EC66FBD28897* a1, ::Class_3_7A267C1006DF3527_1* a2)
	{
		return ((::System::Void(*)(::Class_1_1685EC66FBD28897*, ::Class_3_7A267C1006DF3527_1*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_311BE8873930132D_OFFSET))(a1, a2);
	}

	::System::Void Method_2_38DEB559D235FE18(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Object* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_38DEB559D235FE18_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AE2206521FDCAB54(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_AE2206521FDCAB54_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE014829E78CFBA8(::UnityEngine::RectTransform* a1, ::MoleMole::UIItemIconBtnWidgetController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_EE014829E78CFBA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_261DF843E298B71B()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_261DF843E298B71B_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_165<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>* Method_2_D0CF1F88429C1E1C()
	{
		return ((::Class_0_16E4307DCC419505_165<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_D0CF1F88429C1E1C_OFFSET))(this);
	}

	::System::Void Method_2_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA5A63EF1421373E(::Class_0_16E4307DCC419505_165<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_AA5A63EF1421373E_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED9404AAED87BF25(::MonoUITableScrollV2* a1, ::System::Collections::Generic::List_1<::Enum_3_01618AD0437C8486_1>* a2, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::Generic::List_1<::Enum_3_01618AD0437C8486_1>*, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_ED9404AAED87BF25_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1351D0EC66310CF3(::MonoUITableScrollV2* a1, ::Enum_3_01618AD0437C8486_1 a2, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::Enum_3_01618AD0437C8486_1, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_1351D0EC66310CF3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7979FF5AB50794DE(::Class_3_C3F0E3B5AB5977AE* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_7979FF5AB50794DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_E1BF03A233A7778C(::MonoUITableScrollV2* a1, ::MonoUITableScrollV2* a2, ::MonoUITableScrollV2* a3, ::Class_2_134E5210FBBAC6E5* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::MonoUITableScrollV2*, ::MonoUITableScrollV2*, ::Class_2_134E5210FBBAC6E5*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_E1BF03A233A7778C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_2_F773D945760BF918_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_F773D945760BF918_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1266A942BF66AA3D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_1266A942BF66AA3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E03BFC9324B200B6(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_E03BFC9324B200B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_165<::System::Int32>* Method_2_3EA6C397C34AAC8F()
	{
		return ((::Class_0_16E4307DCC419505_165<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_3EA6C397C34AAC8F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_2_FE3C57C9613968EB(::MonoUITableScrollV2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_FE3C57C9613968EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_2_41997AFD133B2134(::Class_2_134E5210FBBAC6E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_134E5210FBBAC6E5*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_41997AFD133B2134_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C96C65E6F94E09E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_7C96C65E6F94E09E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_261DF843E298B71B_1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_261DF843E298B71B_1_OFFSET))(this);
	}

	::System::Void Method_2_83F05C0E85DCC0D0(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_83F05C0E85DCC0D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_2_C8E2469222842786_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_C8E2469222842786_1_OFFSET))(this);
	}

	::System::Void Method_2_FDF9B21BA16000B3_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_FDF9B21BA16000B3_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_AB47C0AD5F8C704F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_METHOD_2_AB47C0AD5F8C704F_OFFSET))(this, a1);
	}
};

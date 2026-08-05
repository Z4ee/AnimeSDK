#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/MonoUITableScrollV2_ScrollMeta.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_175;
class Class_0_16E4307DCC419505_266;
class Class_0_16E4307DCC419505_362;
class Class_1_23643BA6F1420C6B;
class Class_1_77418F3E8AFE9F3A;
class Class_1_80FBD59441D4B59D;
class Class_2_134E5210FBBAC6E5;
class Class_2_1A39E1B51756BF41;
class Class_2_AF5BA1C65F12F4B1;
class Class_2_D1CED082B4F1459A;
class Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184;
class Class_2_E87F1D15F1D4AC72;
class Class_3_C3F0E3B5AB5977AE_29;
class MonoUITableScrollV2;
namespace MoleMole { class UIBangkovBagSubPanelWidgetController_Context; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_973F5868D05C1A36_METHOD_2_0089E869E2D4144B_OFFSET UNITYSDK_OFFSET(0x18E7A340)
#define CLASS_2_973F5868D05C1A36_METHOD_2_052FAABF5BB8BE83_OFFSET UNITYSDK_OFFSET(0x18E7A9D0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_0533F6269AECF239_OFFSET UNITYSDK_OFFSET(0x18E71AD0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x18E7DB60)
#define CLASS_2_973F5868D05C1A36_METHOD_2_1480DF634322F5AA_OFFSET UNITYSDK_OFFSET(0x18E74DD0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_1B7BA2B0F75C7DA0_OFFSET UNITYSDK_OFFSET(0x18E6E940)
#define CLASS_2_973F5868D05C1A36_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x18E6C8D0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x18E74860)
#define CLASS_2_973F5868D05C1A36_METHOD_2_261DF843E298B71B_1_OFFSET UNITYSDK_OFFSET(0x18E74940)
#define CLASS_2_973F5868D05C1A36_METHOD_2_261DF843E298B71B_2_OFFSET UNITYSDK_OFFSET(0x18E7DA60)
#define CLASS_2_973F5868D05C1A36_METHOD_2_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0x18E68C30)
#define CLASS_2_973F5868D05C1A36_METHOD_2_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x18E66630)
#define CLASS_2_973F5868D05C1A36_METHOD_2_2CC167BC41F5AA26_OFFSET UNITYSDK_OFFSET(0x18E6AF80)
#define CLASS_2_973F5868D05C1A36_METHOD_2_30C2D368B2361B2C_OFFSET UNITYSDK_OFFSET(0x18E6C3C0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_34EEDE6F4D9D9AB4_OFFSET UNITYSDK_OFFSET(0x18E751C0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_3C6A01333729B50A_OFFSET UNITYSDK_OFFSET(0x18E6FD00)
#define CLASS_2_973F5868D05C1A36_METHOD_2_3CD3A0AD85450624_OFFSET UNITYSDK_OFFSET(0x18E6FCA0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_3EA6C397C34AAC8F_OFFSET UNITYSDK_OFFSET(0x18E71730)
#define CLASS_2_973F5868D05C1A36_METHOD_2_3EF4811D485FF05A_OFFSET UNITYSDK_OFFSET(0x18E7CAA0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_41663BA270FD7E79_OFFSET UNITYSDK_OFFSET(0x18E6E5D0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18E5F0C0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x18E78B20)
#define CLASS_2_973F5868D05C1A36_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x18E80D40)
#define CLASS_2_973F5868D05C1A36_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x18E67A30)
#define CLASS_2_973F5868D05C1A36_METHOD_2_4F40B88ED704E763_OFFSET UNITYSDK_OFFSET(0x18E6F5F0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_4F934196753710D2_OFFSET UNITYSDK_OFFSET(0x18E6E990)
#define CLASS_2_973F5868D05C1A36_METHOD_2_5353458EBADA488A_OFFSET UNITYSDK_OFFSET(0x18E68CB0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x18E732A0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_5ACFF98CC29B00A1_OFFSET UNITYSDK_OFFSET(0x18E7A3D0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_5EE047E48143A8CA_OFFSET UNITYSDK_OFFSET(0x18E6FAE0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_64542B5D04758D5E_OFFSET UNITYSDK_OFFSET(0x18E76AF0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_6487472598762AAE_OFFSET UNITYSDK_OFFSET(0x18E7EE20)
#define CLASS_2_973F5868D05C1A36_METHOD_2_65C8295A99348326_OFFSET UNITYSDK_OFFSET(0x18E7E1D0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x18E71CD0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_6BF28FCDB3FDACE9_OFFSET UNITYSDK_OFFSET(0x18E7F090)
#define CLASS_2_973F5868D05C1A36_METHOD_2_6C4D89F764ACFD6A_OFFSET UNITYSDK_OFFSET(0x18E80380)
#define CLASS_2_973F5868D05C1A36_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x18E74A60)
#define CLASS_2_973F5868D05C1A36_METHOD_2_7AB17DFCA92746D5_OFFSET UNITYSDK_OFFSET(0x18E7E360)
#define CLASS_2_973F5868D05C1A36_METHOD_2_7C96C65E6F94E09E_OFFSET UNITYSDK_OFFSET(0x18E66F80)
#define CLASS_2_973F5868D05C1A36_METHOD_2_806CAE05251092BD_OFFSET UNITYSDK_OFFSET(0x18E70E40)
#define CLASS_2_973F5868D05C1A36_METHOD_2_870E2EC9CB5FE8B6_OFFSET UNITYSDK_OFFSET(0x18E769D0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_885C24791CC0D1EB_OFFSET UNITYSDK_OFFSET(0x18E7FC80)
#define CLASS_2_973F5868D05C1A36_METHOD_2_88739BF91E158878_OFFSET UNITYSDK_OFFSET(0x18E73470)
#define CLASS_2_973F5868D05C1A36_METHOD_2_8AEE260165B3DF9A_OFFSET UNITYSDK_OFFSET(0x18E70A40)
#define CLASS_2_973F5868D05C1A36_METHOD_2_8B2C412259A94321_OFFSET UNITYSDK_OFFSET(0x18E7A170)
#define CLASS_2_973F5868D05C1A36_METHOD_2_8CDA5A058007B28B_OFFSET UNITYSDK_OFFSET(0x18E7B260)
#define CLASS_2_973F5868D05C1A36_METHOD_2_8D30FE6C0D9B3A3E_OFFSET UNITYSDK_OFFSET(0x18E74410)
#define CLASS_2_973F5868D05C1A36_METHOD_2_944479B7BFCF90AE_OFFSET UNITYSDK_OFFSET(0x18E7CEB0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_96AE56175F10DE1C_OFFSET UNITYSDK_OFFSET(0x18E67250)
#define CLASS_2_973F5868D05C1A36_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0x18E5F070)
#define CLASS_2_973F5868D05C1A36_METHOD_2_A0C1DAA6261B1CB5_1_OFFSET UNITYSDK_OFFSET(0x18E73500)
#define CLASS_2_973F5868D05C1A36_METHOD_2_A0C1DAA6261B1CB5_OFFSET UNITYSDK_OFFSET(0x18E733E0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_A1241FFDFABF9ED7_OFFSET UNITYSDK_OFFSET(0x18E7EA40)
#define CLASS_2_973F5868D05C1A36_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18E7CA50)
#define CLASS_2_973F5868D05C1A36_METHOD_2_A3FEA384B8335E57_OFFSET UNITYSDK_OFFSET(0x18E68B80)
#define CLASS_2_973F5868D05C1A36_METHOD_2_A41D6AF6FE1FA056_OFFSET UNITYSDK_OFFSET(0x18E7D760)
#define CLASS_2_973F5868D05C1A36_METHOD_2_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x18E6CBD0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_A6F8DE3C0D00B91A_OFFSET UNITYSDK_OFFSET(0x18E7DDE0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_AA5A63EF1421373E_OFFSET UNITYSDK_OFFSET(0x18E7EA60)
#define CLASS_2_973F5868D05C1A36_METHOD_2_AB47C0AD5F8C704F_OFFSET UNITYSDK_OFFSET(0x18E727C0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_AF353088A556587C_OFFSET UNITYSDK_OFFSET(0x18E691D0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_AF39D358D996BED2_OFFSET UNITYSDK_OFFSET(0x18E69650)
#define CLASS_2_973F5868D05C1A36_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18E80310)
#define CLASS_2_973F5868D05C1A36_METHOD_2_B1D31BF3FB0E1F6F_OFFSET UNITYSDK_OFFSET(0x18E78300)
#define CLASS_2_973F5868D05C1A36_METHOD_2_BED580AE8B057B28_OFFSET UNITYSDK_OFFSET(0x18E7E9B0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x18E7EE00)
#define CLASS_2_973F5868D05C1A36_METHOD_2_C13FF1006FB39E3D_OFFSET UNITYSDK_OFFSET(0x18E69880)
#define CLASS_2_973F5868D05C1A36_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x18E6A030)
#define CLASS_2_973F5868D05C1A36_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x18E7EA50)
#define CLASS_2_973F5868D05C1A36_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18E733D0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_C758EF3A33663B4F_OFFSET UNITYSDK_OFFSET(0x18E71C70)
#define CLASS_2_973F5868D05C1A36_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x18E7F270)
#define CLASS_2_973F5868D05C1A36_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18E79F50)
#define CLASS_2_973F5868D05C1A36_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x18E7E920)
#define CLASS_2_973F5868D05C1A36_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18E78A90)
#define CLASS_2_973F5868D05C1A36_METHOD_2_CEA7FC230F9CB84C_OFFSET UNITYSDK_OFFSET(0x18E68F90)
#define CLASS_2_973F5868D05C1A36_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x18E71740)
#define CLASS_2_973F5868D05C1A36_METHOD_2_D0CF1F88429C1E1C_OFFSET UNITYSDK_OFFSET(0x18E7EE10)
#define CLASS_2_973F5868D05C1A36_METHOD_2_D7E1DF9EBBA69062_OFFSET UNITYSDK_OFFSET(0x18E73590)
#define CLASS_2_973F5868D05C1A36_METHOD_2_DC14E871645957FF_OFFSET UNITYSDK_OFFSET(0x18E76ED0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_DDF09E3C0CEF0DD6_OFFSET UNITYSDK_OFFSET(0x18E80A40)
#define CLASS_2_973F5868D05C1A36_METHOD_2_E23B607B32C4D0A1_OFFSET UNITYSDK_OFFSET(0x18E749C0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_E31524B0D9095146_OFFSET UNITYSDK_OFFSET(0x18E7B770)
#define CLASS_2_973F5868D05C1A36_METHOD_2_E6184566299DAB0F_OFFSET UNITYSDK_OFFSET(0x18E754C0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_EB2FCAD9E1A88603_OFFSET UNITYSDK_OFFSET(0x18E7E4A0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x18E79FE0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x18E5F1D0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_F6E8F6B7C95CE0F0_OFFSET UNITYSDK_OFFSET(0x18E75510)
#define CLASS_2_973F5868D05C1A36_METHOD_2_F757326E40C0738F_OFFSET UNITYSDK_OFFSET(0x18E7EA70)
#define CLASS_2_973F5868D05C1A36_METHOD_2_F773D945760BF918_1_OFFSET UNITYSDK_OFFSET(0x18E7DAE0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0x18E7D660)
#define CLASS_2_973F5868D05C1A36_METHOD_2_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x18E6E130)
#define CLASS_2_973F5868D05C1A36_METHOD_2_F9FAA0068CB29E22_OFFSET UNITYSDK_OFFSET(0x18E6F1B0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_FAA0A1A7F79E5C07_OFFSET UNITYSDK_OFFSET(0x18E73710)
#define CLASS_2_973F5868D05C1A36_METHOD_2_FDF9B21BA16000B3_1_OFFSET UNITYSDK_OFFSET(0x18E7D6E0)
#define CLASS_2_973F5868D05C1A36_METHOD_2_FDF9B21BA16000B3_OFFSET UNITYSDK_OFFSET(0x18E78A10)
#define CLASS_2_973F5868D05C1A36__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E6DF90)
#define CLASS_2_973F5868D05C1A36__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6DD10)

inline static constexpr unsigned int Class_2_973F5868D05C1A36_TypeDefinitionIndex = 51612;

class Class_2_973F5868D05C1A36 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::Class_1_80FBD59441D4B59D** StaticGet_Field_2_24()
	{
		return (::Class_1_80FBD59441D4B59D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_973F5868D05C1A36_TypeDefinitionIndex)->GetStaticField(0x35350);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_2_41()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_973F5868D05C1A36_TypeDefinitionIndex)->GetStaticField(0x35358);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_2_42()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_973F5868D05C1A36_TypeDefinitionIndex)->GetStaticField(0x35360);
	}
	static ::Class_1_80FBD59441D4B59D** StaticGet_Field_2_31()
	{
		return (::Class_1_80FBD59441D4B59D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_973F5868D05C1A36_TypeDefinitionIndex)->GetStaticField(0x35368);
	}
	static ::Class_1_80FBD59441D4B59D** StaticGet_Field_2_25()
	{
		return (::Class_1_80FBD59441D4B59D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_973F5868D05C1A36_TypeDefinitionIndex)->GetStaticField(0x35370);
	}
	static ::UnityEngine::Color* StaticGet_Field_2_67()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_2_973F5868D05C1A36_TypeDefinitionIndex)->GetStaticField(0xC550);
	}
	// static const ::System::Single Field_2_49; // 0x0
	// static const ::System::Single Field_2_48; // 0x0
	// static const ::System::Single Field_2_84; // 0x0
	::Class_2_AF5BA1C65F12F4B1* Field_2_22; // 0x50
	::UnityEngine::UI::Text* Field_2_65; // 0x58
	::UnityEngine::RectTransform* Field_2_86; // 0x60
	::UnityEngine::GameObject* Field_2_78; // 0x68
	::System::Action_1<::System::EventArgs*>* Field_2_27; // 0x70
	::System::Action* Field_2_29; // 0x78
	::System::Action* Field_2_20; // 0x80
	::UnityEngine::GameObject* Field_2_43; // 0x88
	::MonoUITableScrollV2* Field_2_23; // 0x90
	::System::Action_1<::System::Object*>* Field_2_47; // 0x98
	::System::Action* Field_2_46; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_2_30; // 0xA8
	::Il2CppArray<::UnityEngine::RectTransform*>* Field_2_73; // 0xB0
	::UnityEngine::UI::Text* Field_2_68; // 0xB8
	::UnityEngine::RectTransform* Field_2_87; // 0xC0
	::System::Collections::Generic::IEnumerator_1<::System::Single>* Field_2_71; // 0xC8
	::UnityEngine::GameObject* Field_2_36; // 0xD0
	::UnityEngine::RectTransform* Field_2_85; // 0xD8
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_4; // 0xE0
	::Class_2_D1CED082B4F1459A* Field_2_21; // 0xE8
	::UnityEngine::GameObject* Field_2_69; // 0xF0
	::UnityEngine::RectTransform* Field_2_76; // 0xF8
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_6; // 0x100
	::MonoUITableScrollV2* Field_2_37; // 0x108
	::UnityEngine::UI::Image* Field_2_16; // 0x110
	::System::Action* Field_2_44; // 0x118
	::UnityEngine::Animation* Field_2_64; // 0x120
	::Class_2_1A39E1B51756BF41* Field_2_72; // 0x128
	::Class_0_16E4307DCC419505_266* Field_2_40; // 0x130
	::UnityEngine::GameObject* Field_2_70; // 0x138
	::Class_2_1A39E1B51756BF41* Field_2_79; // 0x140
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_7; // 0x148
	::Class_0_16E4307DCC419505_159<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>* Field_2_0; // 0x150
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_12; // 0x158
	::System::Action* Field_2_81; // 0x160
	::UnityEngine::UI::Extension::UIButtonEx* Field_2_90; // 0x168
	::UnityEngine::RectTransform* Field_2_83; // 0x170
	::System::Action* Field_2_82; // 0x178
	::Class_1_23643BA6F1420C6B* Field_2_11; // 0x180
	::MonoUITableScrollV2* Field_2_38; // 0x188
	::MonoUITableScrollV2* Field_2_51; // 0x190
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_13; // 0x198
	::Il2CppArray<::UnityEngine::RectTransform*>* Field_2_74; // 0x1A0
	::UnityEngine::Transform* Field_2_91; // 0x1A8
	::UnityEngine::Transform* Field_2_66; // 0x1B0
	::MonoUITableScrollV2* Field_2_39; // 0x1B8
	::Class_1_23643BA6F1420C6B* Field_2_8; // 0x1C0
	::UnityEngine::Animation* Field_2_17; // 0x1C8
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_5; // 0x1D0
	::Class_1_23643BA6F1420C6B* Field_2_9; // 0x1D8
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_61; // 0x1E0
	::System::Action_1<::UnityEngine::Vector2>* Field_2_54; // 0x1E8
	::System::Action_1<::Class_0_16E4307DCC419505_362*>* Field_2_45; // 0x1F0
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_28; // 0x1F8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_19; // 0x200
	::Class_1_23643BA6F1420C6B* Field_2_10; // 0x208
	::System::Action* Field_2_80; // 0x210
	::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_29*>* Field_2_15; // 0x218
	::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_29*>* Field_2_14; // 0x220
	::System::Boolean Field_2_60; // 0x228
	::System::Boolean Field_2_32; // 0x229
	::System::Boolean Field_2_62; // 0x22A
	::System::Boolean Field_2_35; // 0x22B
	::System::Boolean Field_2_59; // 0x22C
	::System::Boolean Field_2_55; // 0x22D
	::System::Boolean Field_2_33; // 0x22E
	::System::Nullable_1<::System::Boolean> Field_2_89; // 0x22F
	::System::Boolean Field_2_75; // 0x231
	::System::Boolean Field_2_26; // 0x232
	::System::Boolean Field_2_56; // 0x233
	::System::Boolean Field_2_50; // 0x234
	::System::Int32 Field_2_18; // 0x238
	::System::Boolean Field_2_57; // 0x23C
	::System::Boolean Field_2_34; // 0x23D
	::System::Int32 Field_2_88; // 0x240
	::System::Boolean Field_2_77; // 0x244
	::System::Boolean Field_2_52; // 0x245
	::System::Boolean Field_2_58; // 0x246
	::System::Boolean Field_2_53; // 0x247
	::System::Int64 Field_2_63; // 0x248

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_261DF843E298B71B()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_261DF843E298B71B_OFFSET))(this);
	}

	::System::Void Method_2_1B7BA2B0F75C7DA0(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_1B7BA2B0F75C7DA0_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F934196753710D2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_4F934196753710D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EE047E48143A8CA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_5EE047E48143A8CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CD3A0AD85450624(::MonoUITableScrollV2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_3CD3A0AD85450624_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8AEE260165B3DF9A(::MonoUITableScrollV2* a1, ::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184* a2, ::Class_1_23643BA6F1420C6B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184*, ::Class_1_23643BA6F1420C6B*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_8AEE260165B3DF9A_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_159<::System::Int32>* Method_2_3EA6C397C34AAC8F()
	{
		return ((::Class_0_16E4307DCC419505_159<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_3EA6C397C34AAC8F_OFFSET))(this);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::Class_1_80FBD59441D4B59D* Method_2_0533F6269AECF239()
	{
		return ((::Class_1_80FBD59441D4B59D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_0533F6269AECF239_OFFSET))(this);
	}

	::System::Void Method_2_C758EF3A33663B4F(::MonoUITableScrollV2_ScrollMeta a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollMeta))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_C758EF3A33663B4F_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB47C0AD5F8C704F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_AB47C0AD5F8C704F_OFFSET))(this, a1);
	}

	::System::Object* Method_2_806CAE05251092BD(::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184* a1, ::System::Int32 a2, ::Class_1_23643BA6F1420C6B* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184*, ::System::Int32, ::Class_1_23643BA6F1420C6B*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_806CAE05251092BD_OFFSET))(this, a1, a2, a3);
	}

	::System::Object* Method_2_FAA0A1A7F79E5C07(::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_FAA0A1A7F79E5C07_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Method_2_5353458EBADA488A()
	{
		return ((::UnityEngine::UI::Extension::UIDynamicNumberLabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_5353458EBADA488A_OFFSET))(this);
	}

	::System::Void Method_2_8D30FE6C0D9B3A3E(::MonoUITableScrollV2* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_8D30FE6C0D9B3A3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	static ::System::String* Method_2_E23B607B32C4D0A1(::System::Int64 a1)
	{
		return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_E23B607B32C4D0A1_OFFSET))(a1);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	static ::System::Int32 Method_2_E6184566299DAB0F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_E6184566299DAB0F_OFFSET))(a1);
	}

	::System::Void Method_2_F6E8F6B7C95CE0F0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_F6E8F6B7C95CE0F0_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEA7FC230F9CB84C(::System::Boolean a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_CEA7FC230F9CB84C_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_64542B5D04758D5E(::MonoUITableScrollV2* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::System::Boolean(*)(::MonoUITableScrollV2*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_64542B5D04758D5E_OFFSET))(a1, a2);
	}

	::System::Void Method_2_DC14E871645957FF(::MonoUITableScrollV2* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a2, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* a3, ::Class_1_23643BA6F1420C6B* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>*, ::Class_1_23643BA6F1420C6B*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_DC14E871645957FF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::System::Object*>* Method_2_B1D31BF3FB0E1F6F()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_B1D31BF3FB0E1F6F_OFFSET))(this);
	}

	::System::Void Method_2_FDF9B21BA16000B3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_FDF9B21BA16000B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_34EEDE6F4D9D9AB4(::Class_2_134E5210FBBAC6E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_134E5210FBBAC6E5*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_34EEDE6F4D9D9AB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_30C2D368B2361B2C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_30C2D368B2361B2C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_261DF843E298B71B_1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_261DF843E298B71B_1_OFFSET))(this);
	}

	::System::Void Method_2_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_8B2C412259A94321(::Class_3_C3F0E3B5AB5977AE_29* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_29*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_8B2C412259A94321_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_3C6A01333729B50A(::MonoUITableScrollV2* a1, ::System::Boolean a2, ::Class_1_23643BA6F1420C6B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Boolean, ::Class_1_23643BA6F1420C6B*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_3C6A01333729B50A_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_0089E869E2D4144B(::System::Single a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_0089E869E2D4144B_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ACFF98CC29B00A1(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Object* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_5ACFF98CC29B00A1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::System::Object*>* Method_2_8CDA5A058007B28B(::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_8CDA5A058007B28B_OFFSET))(this, a1);
	}

	::System::Void Method_2_052FAABF5BB8BE83(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_052FAABF5BB8BE83_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_88739BF91E158878()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_88739BF91E158878_OFFSET))(this);
	}

	::System::Void Method_2_E31524B0D9095146(::MonoUITableScrollV2* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* a3, ::Class_1_23643BA6F1420C6B* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>*, ::Class_1_23643BA6F1420C6B*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_E31524B0D9095146_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3EF4811D485FF05A(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_3EF4811D485FF05A_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF353088A556587C(::Class_2_AF5BA1C65F12F4B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AF5BA1C65F12F4B1*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_AF353088A556587C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CC167BC41F5AA26(::MonoUITableScrollV2* a1, ::MonoUITableScrollV2* a2, ::MonoUITableScrollV2* a3, ::Class_2_134E5210FBBAC6E5* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::MonoUITableScrollV2*, ::MonoUITableScrollV2*, ::Class_2_134E5210FBBAC6E5*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_2CC167BC41F5AA26_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_2839AE123F8ECAA7_OFFSET))(this);
	}

	::System::Void Method_2_41663BA270FD7E79(::MonoUITableScrollV2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_41663BA270FD7E79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F773D945760BF918(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_F773D945760BF918_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	static ::System::Void Method_2_96AE56175F10DE1C(::Class_2_134E5210FBBAC6E5* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_2_134E5210FBBAC6E5*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_96AE56175F10DE1C_OFFSET))(a1, a2);
	}

	::System::Void Method_2_FDF9B21BA16000B3_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_FDF9B21BA16000B3_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Object*>* Method_2_A41D6AF6FE1FA056(::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_A41D6AF6FE1FA056_OFFSET))(this, a1);
	}

	::System::Int64 Method_2_870E2EC9CB5FE8B6()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_870E2EC9CB5FE8B6_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_261DF843E298B71B_2()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_261DF843E298B71B_2_OFFSET))(this);
	}

	::System::Void Method_2_D7E1DF9EBBA69062(::Class_1_77418F3E8AFE9F3A* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_77418F3E8AFE9F3A*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_D7E1DF9EBBA69062_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F773D945760BF918_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_F773D945760BF918_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Int32 Method_2_A0C1DAA6261B1CB5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_A0C1DAA6261B1CB5_OFFSET))(this);
	}

	::System::Int32 Method_2_A6F8DE3C0D00B91A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_A6F8DE3C0D00B91A_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_65C8295A99348326(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_65C8295A99348326_OFFSET))(a1, a2);
	}

	::System::Void Method_2_944479B7BFCF90AE(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_944479B7BFCF90AE_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_2_1480DF634322F5AA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_1480DF634322F5AA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* Method_2_7AB17DFCA92746D5(::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_7AB17DFCA92746D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB2FCAD9E1A88603(::UnityEngine::RectTransform* a1, ::Class_0_16E4307DCC419505_175* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_EB2FCAD9E1A88603_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_BED580AE8B057B28(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_BED580AE8B057B28_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1241FFDFABF9ED7(::Class_0_16E4307DCC419505_159<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_A1241FFDFABF9ED7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C13FF1006FB39E3D(::Class_2_134E5210FBBAC6E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_134E5210FBBAC6E5*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_C13FF1006FB39E3D_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_AA5A63EF1421373E(::Class_0_16E4307DCC419505_159<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_AA5A63EF1421373E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F757326E40C0738F(::Class_3_C3F0E3B5AB5977AE_29* a1, ::Class_3_C3F0E3B5AB5977AE_29* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_29*, ::Class_3_C3F0E3B5AB5977AE_29*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_F757326E40C0738F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4F40B88ED704E763(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_4F40B88ED704E763_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF39D358D996BED2(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_AF39D358D996BED2_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_159<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>* Method_2_D0CF1F88429C1E1C()
	{
		return ((::Class_0_16E4307DCC419505_159<::MoleMole::UIBangkovBagSubPanelWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_D0CF1F88429C1E1C_OFFSET))(this);
	}

	static ::System::Int32 Method_2_6487472598762AAE(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_6487472598762AAE_OFFSET))(a1);
	}

	::System::Void Method_2_6BF28FCDB3FDACE9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_6BF28FCDB3FDACE9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_2_885C24791CC0D1EB(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_885C24791CC0D1EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_7C96C65E6F94E09E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_7C96C65E6F94E09E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6C4D89F764ACFD6A(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Object* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_6C4D89F764ACFD6A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DDF09E3C0CEF0DD6(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_DDF09E3C0CEF0DD6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_2_A3FEA384B8335E57(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_A3FEA384B8335E57_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A0C1DAA6261B1CB5_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_A0C1DAA6261B1CB5_1_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_2_F9FAA0068CB29E22(::MonoUITableScrollV2* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_2_973F5868D05C1A36_METHOD_2_F9FAA0068CB29E22_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/ElementDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_986;
class Class_1_0E93F5233A379C3C;
class Class_1_4C48D45043C0B54A;
class Class_1_86B4CACC0974BF85;
class Class_1_F7F129640441419D;
class Class_2_73E06C253DAFCC33_Class_0_16E7307DCC43CB2C_21;
class Class_2_80016B9B50F708B7;
class DamageTextStyle;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SimpleText; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class SimpleAnimation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class LayoutGroup; }

#define CLASS_2_73E06C253DAFCC33_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x118EBB20)
#define CLASS_2_73E06C253DAFCC33_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x118EBC30)
#define CLASS_2_73E06C253DAFCC33_GET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x118EB970)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x118E5CD0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_0A4A57205FA2595A_OFFSET UNITYSDK_OFFSET(0x118EA040)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x118EA2E0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_0DA2366A4A7DBAA7_1_OFFSET UNITYSDK_OFFSET(0x118EB2F0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x118E7AE0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_1031DA75D8DD44E1_OFFSET UNITYSDK_OFFSET(0x118E9AB0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x118E94D0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x118E61C0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_22495BAE14FFEFCB_OFFSET UNITYSDK_OFFSET(0x118E7BF0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_2303E3416C24D3F9_OFFSET UNITYSDK_OFFSET(0x118EA890)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_249C562D39D40DBF_OFFSET UNITYSDK_OFFSET(0x118E7EA0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_254E3F47C444DDAE_OFFSET UNITYSDK_OFFSET(0x118EAB00)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x118EA750)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x118EB400)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x118E66B0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x118E6560)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x118E6710)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x118EA7B0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x118E7420)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_48C86576570A48CA_OFFSET UNITYSDK_OFFSET(0x118E77B0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_49DF3329552800C8_OFFSET UNITYSDK_OFFSET(0x118EACA0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_4B5A2F5B46B88D6B_OFFSET UNITYSDK_OFFSET(0x118E9F00)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_4C6A9BAF3D99BA03_OFFSET UNITYSDK_OFFSET(0x118E9470)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x118EA920)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x118EB9D0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_583D59500575D856_OFFSET UNITYSDK_OFFSET(0x118EB250)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x118E7320)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_626867CFE8995B57_OFFSET UNITYSDK_OFFSET(0x118E9E70)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_633BD41FEBF1F191_OFFSET UNITYSDK_OFFSET(0x118EA690)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x118EB180)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_66C47ED41C56178D_1_OFFSET UNITYSDK_OFFSET(0x118E9A20)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_66C47ED41C56178D_OFFSET UNITYSDK_OFFSET(0x118E99B0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x118EAA70)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x118E65B0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_708E5A65B84D5E24_OFFSET UNITYSDK_OFFSET(0x118EB5A0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_735B72A49CA5A4D8_OFFSET UNITYSDK_OFFSET(0x118E8200)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x118EAA00)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x118E7A50)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_7DC8653DA7B9F869_OFFSET UNITYSDK_OFFSET(0x118EB890)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_80540C1471B83E89_OFFSET UNITYSDK_OFFSET(0x118E8500)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_845A8160D3385F85_OFFSET UNITYSDK_OFFSET(0x118E89B0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_87DA1C86250D2893_OFFSET UNITYSDK_OFFSET(0x118EAE60)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_9047DF81632785E6_OFFSET UNITYSDK_OFFSET(0x118E9C40)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_914575F73265A2FE_OFFSET UNITYSDK_OFFSET(0x118EB510)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_937CB465FF49DCE7_OFFSET UNITYSDK_OFFSET(0x118E9130)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x118E5EF0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_9B0D4BFDBF64D469_OFFSET UNITYSDK_OFFSET(0x118E9560)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_9E79A5511E060783_OFFSET UNITYSDK_OFFSET(0x118E8010)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_A06359FA5E17A386_OFFSET UNITYSDK_OFFSET(0x118E9320)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_A136AB76EB5E8B3E_OFFSET UNITYSDK_OFFSET(0x118EA340)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x118EBAC0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x118EB9F0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x118E74F0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_ABD6C60E1C36A4F4_OFFSET UNITYSDK_OFFSET(0x118E6240)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x118E9400)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x118E7620)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_B44E6B5BFCA54396_OFFSET UNITYSDK_OFFSET(0x118EA560)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_BAC40468D22D4047_OFFSET UNITYSDK_OFFSET(0x118E8880)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x118E6290)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x118ECCC0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_CA47EFC30F69156D_OFFSET UNITYSDK_OFFSET(0x118EA3F0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x118E8E60)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_CBEA6C3CA5E42755_OFFSET UNITYSDK_OFFSET(0x118EB2A0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x118E80A0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x118E5F60)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_DAFB0CB11B77534F_OFFSET UNITYSDK_OFFSET(0x118E8EF0)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_E975629435F9C6D4_OFFSET UNITYSDK_OFFSET(0x118EB740)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x118E6130)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_EB42B35CE6A030FC_OFFSET UNITYSDK_OFFSET(0x118E8350)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x118EB800)
#define CLASS_2_73E06C253DAFCC33_METHOD_2_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x118EA800)
#define CLASS_2_73E06C253DAFCC33_SET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x118EB9A0)
#define CLASS_2_73E06C253DAFCC33__CCTOR_OFFSET UNITYSDK_OFFSET(0x118ECC50)
#define CLASS_2_73E06C253DAFCC33__CTOR_OFFSET UNITYSDK_OFFSET(0x118EBD10)
#define CLASS_2_73E06C253DAFCC33__ONBIND_OFFSET UNITYSDK_OFFSET(0x118E5400)
#define CLASS_2_73E06C253DAFCC33__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x118E73D0)
#define CLASS_2_73E06C253DAFCC33__ONTICK_OFFSET UNITYSDK_OFFSET(0x118E6310)
#define CLASS_2_73E06C253DAFCC33___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x118ECE00)
#define CLASS_2_73E06C253DAFCC33___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x118ECE60)
#define CLASS_2_73E06C253DAFCC33___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x118ECC60)
#define CLASS_2_73E06C253DAFCC33___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x118ECDA0)
#define CLASS_2_73E06C253DAFCC33___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x118ECD30)

inline static constexpr unsigned int Class_2_73E06C253DAFCC33_TypeDefinitionIndex = 66671;

class Class_2_73E06C253DAFCC33 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::RPG::Client::UIFloatingTextType* StaticGet_Field_2_53()
	{
		return (::RPG::Client::UIFloatingTextType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E06C253DAFCC33_TypeDefinitionIndex)->GetStaticField(0x4DD0);
	}
	static ::System::Int32* StaticGet__TopPriority_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E06C253DAFCC33_TypeDefinitionIndex)->GetStaticField(0x4DD4);
	}
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_52; // 0x0
	// static const ::System::String* Field_2_54; // 0x0
	// static const ::System::String* Field_2_55; // 0x0
	// static const ::System::String* Field_2_56; // 0x0
	// static const ::System::String* Field_2_57; // 0x0
	// static const ::System::String* Field_2_58; // 0x0
	// static const ::System::String* Field_2_59; // 0x0
	// static const ::System::String* Field_2_60; // 0x0
	// static const ::System::String* Field_2_61; // 0x0
	// static const ::System::String* Field_2_62; // 0x0
	// static const ::System::String* Field_2_63; // 0x0
	// static const ::System::String* Field_2_64; // 0x0
	// static const ::System::String* Field_2_65; // 0x0
	// static const ::System::String* Field_2_66; // 0x0
	// static const ::System::String* Field_2_67; // 0x0
	// static const ::System::String* Field_2_68; // 0x0
	// static const ::System::String* Field_2_69; // 0x0
	// static const ::System::String* Field_2_70; // 0x0
	// static const ::System::Int32 Field_2_72 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_73 = 0x8; // 0x0
	// static const ::System::Int64 Field_2_74 = 0xE8D4A50FFF; // 0x0
	// static const ::System::String* Field_2_76; // 0x0
	// static const ::System::String* Field_2_77; // 0x0
	// static const ::System::String* Field_2_78; // 0x0
	// static const ::System::String* Field_2_79; // 0x0
	// static const ::System::String* Field_2_80; // 0x0
	// static const ::System::String* Field_2_81; // 0x0
	// static const ::System::String* Field_2_82; // 0x0
	// static const ::System::String* Field_2_83; // 0x0
	// static const ::System::String* Field_2_84; // 0x0
	// static const ::System::String* Field_2_85; // 0x0
	// static const ::System::String* Field_2_86; // 0x0
	// static const ::System::String* Field_2_87; // 0x0
	// static const ::System::String* Field_2_88; // 0x0
	// static const ::System::String* Field_2_89; // 0x0
	// static const ::System::String* Field_2_90; // 0x0
	::Class_1_0E93F5233A379C3C* Field_2_45; // 0x60
	::Class_2_80016B9B50F708B7* Field_2_93; // 0x68
	::UnityEngine::Transform* Field_2_16; // 0x70
	::UnityEngine::RectTransform* Field_2_31; // 0x78
	::UnityEngine::Transform* Field_2_25; // 0x80
	::UnityEngine::Transform* Field_2_39; // 0x88
	::RPG::Client::PrefabLoadMeta* Field_2_38; // 0x90
	::Class_1_4C48D45043C0B54A* Field_2_43; // 0x98
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_71; // 0xA0
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_2; // 0xA8
	::Class_1_0E93F5233A379C3C* Field_2_15; // 0xB0
	::UnityEngine::UI::Image* Field_2_28; // 0xB8
	::Il2CppArray<::Class_1_4C48D45043C0B54A*>* Field_2_8; // 0xC0
	::UnityEngine::UI::ContentSizeFitter* Field_2_33; // 0xC8
	::Class_1_0E93F5233A379C3C* Field_2_26; // 0xD0
	::System::Collections::Generic::List_1<::Class_2_73E06C253DAFCC33_Class_0_16E7307DCC43CB2C_21*>* Field_2_92; // 0xD8
	::System::Collections::Generic::List_1<::Class_1_0E93F5233A379C3C*>* Field_2_51; // 0xE0
	::UnityEngine::UI::LayoutGroup* Field_2_32; // 0xE8
	::UnityEngine::Transform* Field_2_7; // 0xF0
	::Class_1_4C48D45043C0B54A* Field_2_23; // 0xF8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DamateTextFontStyle, ::System::String*>* Field_2_0; // 0x100
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DamateTextFontStyle, ::UnityEngine::Font*>* Field_2_50; // 0x108
	::Class_1_4C48D45043C0B54A* Field_2_29; // 0x110
	::Il2CppArray<::UnityEngine::Transform*>* Field_2_41; // 0x118
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_3; // 0x120
	::RPG::Client::UIFollow3DTarget* Field_2_13; // 0x128
	::RPG::GameCore::CharacterVisibleComponent* Field_2_14; // 0x130
	::Class_1_4C48D45043C0B54A* Field_2_46; // 0x138
	::UnityEngine::CanvasGroup* Field_2_47; // 0x140
	::RPG::GameCore::GameEntity* Field_2_35; // 0x148
	::Class_1_0E93F5233A379C3C* Field_2_22; // 0x150
	::UnityEngine::Transform* Field_2_40; // 0x158
	::Class_1_4C48D45043C0B54A* Field_2_24; // 0x160
	::Class_1_F7F129640441419D* Field_2_48; // 0x168
	::Il2CppArray<::System::String*>* Field_2_75; // 0x170
	::System::Collections::Generic::List_1<::RPG::Client::SimpleText*>* Field_2_34; // 0x178
	::UnityEngine::Transform* Field_2_42; // 0x180
	::System::String* Field_2_12; // 0x188
	::Class_0_16E4307DCC419505_986* Field_2_30; // 0x190
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_4; // 0x198
	::UnityEngine::UI::Image* Field_2_27; // 0x1A0
	::UnityEngine::SimpleAnimation* Field_2_10; // 0x1A8
	::UnityEngine::Animation* Field_2_9; // 0x1B0
	::System::Boolean Field_2_21; // 0x1B8
	::System::Boolean Field_2_11; // 0x1B9
	::System::Boolean Field_2_44; // 0x1BA
	::System::Boolean Field_2_20; // 0x1BB
	::System::Boolean Field_2_6; // 0x1BC
	::UnityEngine::Vector2 Field_2_91; // 0x1C0
	::RPG::GameCore::TeamType Field_2_36; // 0x1C8
	::RPG::GameCore::UIDamageTextType Field_2_37; // 0x1CC
	::RPG::GameCore::DamateTextFontStyle Field_2_49; // 0x1D0
	::System::Single Field_2_19; // 0x1D4
	::System::Single Field_2_18; // 0x1D8
	::System::Single Field_2_17; // 0x1DC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_48C86576570A48CA(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_48C86576570A48CA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void Method_2_22495BAE14FFEFCB(::RPG::GameCore::FixPoint a1, ::System::Boolean a2, ::DamageTextStyle* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Boolean, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_22495BAE14FFEFCB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_9E79A5511E060783(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_9E79A5511E060783_OFFSET))(this, a1);
	}

	::System::Void Method_2_80540C1471B83E89(::System::Decimal a1, ::System::Boolean a2, ::DamageTextStyle* a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal, ::System::Boolean, ::DamageTextStyle*, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_80540C1471B83E89_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_BAC40468D22D4047(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_BAC40468D22D4047_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAFB0CB11B77534F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_DAFB0CB11B77534F_OFFSET))(this, a1);
	}

	::System::Void Method_2_937CB465FF49DCE7(::RPG::GameCore::AttackDamageType a1, ::DamageTextStyle* a2, ::System::Nullable_1<::RPG::GameCore::ElementDamageType> a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::DamageTextStyle*, ::System::Nullable_1<::RPG::GameCore::ElementDamageType>, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_937CB465FF49DCE7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::System::Boolean Method_2_4C6A9BAF3D99BA03(::RPG::Client::UIFloatingTextType a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_4C6A9BAF3D99BA03_OFFSET))(a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_A06359FA5E17A386(::RPG::GameCore::AttackDamageType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_A06359FA5E17A386_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_9B0D4BFDBF64D469(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_9B0D4BFDBF64D469_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C47ED41C56178D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_66C47ED41C56178D_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C47ED41C56178D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_66C47ED41C56178D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1031DA75D8DD44E1(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_1031DA75D8DD44E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9047DF81632785E6(::RPG::Client::TextID a1, ::DamageTextStyle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::DamageTextStyle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_9047DF81632785E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_626867CFE8995B57(::DamageTextStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_626867CFE8995B57_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B5A2F5B46B88D6B(::System::Decimal a1, ::RPG::Client::UIFloatingTextType a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_4B5A2F5B46B88D6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_0C44FB644D25C1C2_OFFSET))(this);
	}

	::System::Void Method_2_CA47EFC30F69156D(::System::Decimal a1, ::RPG::Client::UIFloatingTextType a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_CA47EFC30F69156D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B44E6B5BFCA54396(::System::String* a1, ::RPG::Client::UIFloatingTextType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::UIFloatingTextType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_B44E6B5BFCA54396_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_633BD41FEBF1F191(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_633BD41FEBF1F191_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_0A4A57205FA2595A(::RPG::Client::UIFloatingTextType a1, ::System::Boolean a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::System::Boolean, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_0A4A57205FA2595A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_86B4CACC0974BF85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86B4CACC0974BF85*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Method_2_2303E3416C24D3F9()
	{
		return ((::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_2303E3416C24D3F9_OFFSET))(this);
	}

	::System::Void Method_2_249C562D39D40DBF(::System::Int64 a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_249C562D39D40DBF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_49DF3329552800C8(::System::String* a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_49DF3329552800C8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_254E3F47C444DDAE(::System::String* a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_254E3F47C444DDAE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_87DA1C86250D2893(::System::Int32 a1, ::System::String* a2, ::DamageTextStyle* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_87DA1C86250D2893_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::RPG::GameCore::TeamType Method_2_583D59500575D856()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_583D59500575D856_OFFSET))(this);
	}

	::System::Void Method_2_CBEA6C3CA5E42755(::RPG::GameCore::UIDamageTextType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UIDamageTextType))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_CBEA6C3CA5E42755_OFFSET))(this, a1);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_0DA2366A4A7DBAA7_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_2_A136AB76EB5E8B3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_A136AB76EB5E8B3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_914575F73265A2FE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_914575F73265A2FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_EA3063A5CDD6F164_OFFSET))(this);
	}

	::System::Void Method_2_ABD6C60E1C36A4F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_ABD6C60E1C36A4F4_OFFSET))(this);
	}

	::System::Void Method_2_708E5A65B84D5E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_708E5A65B84D5E24_OFFSET))(this);
	}

	::System::Void Method_2_E975629435F9C6D4(::Class_1_4C48D45043C0B54A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C48D45043C0B54A*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_E975629435F9C6D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC61075536D10822(::Class_1_0E93F5233A379C3C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E93F5233A379C3C*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_EC61075536D10822_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_2_EB42B35CE6A030FC(::UnityEngine::Font* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_EB42B35CE6A030FC_OFFSET))(this, a1);
	}

	::UnityEngine::Font* Method_2_735B72A49CA5A4D8(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::UnityEngine::Font*(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_735B72A49CA5A4D8_OFFSET))(this, a1);
	}

	::UnityEngine::Font* Method_2_7DC8653DA7B9F869(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::UnityEngine::Font*(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_7DC8653DA7B9F869_OFFSET))(this, a1);
	}

	static ::System::Int32 get_TopPriority()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_GET_TOPPRIORITY_OFFSET))();
	}

	static ::System::Void set_TopPriority(::System::Int32 value)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_SET_TOPPRIORITY_OFFSET))(value);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_845A8160D3385F85(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_845A8160D3385F85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E06C253DAFCC33___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

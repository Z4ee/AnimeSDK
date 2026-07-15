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
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1079;
class Class_1_1EDFFB645AFD9A3E;
class Class_1_40540E08ABD916B4;
class Class_1_86B4CACC0974BF85;
class Class_1_C3BEB9A6D7F5D20E;
class Class_2_59B7D0D376F5D526_Class_0_16E7307DCC43CB2C_25;
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

#define CLASS_2_59B7D0D376F5D526_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x171EFAD0)
#define CLASS_2_59B7D0D376F5D526_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x171EFBF0)
#define CLASS_2_59B7D0D376F5D526_GET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x171EF840)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_04516DC4047C3A8D_OFFSET UNITYSDK_OFFSET(0x171ED200)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_061E09523E43F031_OFFSET UNITYSDK_OFFSET(0x171ECA50)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x171EDF50)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_0DA2366A4A7DBAA7_1_OFFSET UNITYSDK_OFFSET(0x171EF110)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x171EB8B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_15286982DF950401_OFFSET UNITYSDK_OFFSET(0x171EDC70)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x171ED170)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x171E9F60)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_1E231E3A449E8C46_OFFSET UNITYSDK_OFFSET(0x171EC080)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_2303E3416C24D3F9_OFFSET UNITYSDK_OFFSET(0x171EE660)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_254E3F47C444DDAE_OFFSET UNITYSDK_OFFSET(0x171EE8D0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_255C4E8D50663DEF_OFFSET UNITYSDK_OFFSET(0x171EB9B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_25FD056A8C10B921_OFFSET UNITYSDK_OFFSET(0x171EC2C0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x171EE510)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_29C99DADD0A1090B_OFFSET UNITYSDK_OFFSET(0x171EF770)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_2C639A7B266E3F6B_OFFSET UNITYSDK_OFFSET(0x171EC190)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x171EF210)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x171EF580)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x171EA370)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x171EA210)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x171EA3D0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x171EE570)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x171EB1D0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_48C86576570A48CA_OFFSET UNITYSDK_OFFSET(0x171EB580)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_49DF3329552800C8_OFFSET UNITYSDK_OFFSET(0x171EEA60)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_4C6A9BAF3D99BA03_OFFSET UNITYSDK_OFFSET(0x171ED110)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_5022DB1DC5AA8CB4_1_OFFSET UNITYSDK_OFFSET(0x171EF6B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x171EE6F0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_53F27F73898F1DBC_OFFSET UNITYSDK_OFFSET(0x171EE1A0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_583D59500575D856_OFFSET UNITYSDK_OFFSET(0x171EF070)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x171EB0D0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_5DE2B5657DE4A62B_OFFSET UNITYSDK_OFFSET(0x171ED750)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_626867CFE8995B57_OFFSET UNITYSDK_OFFSET(0x171EDBE0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_633BD41FEBF1F191_OFFSET UNITYSDK_OFFSET(0x171EE450)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x171EEFA0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x171EE5C0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_66C47ED41C56178D_1_OFFSET UNITYSDK_OFFSET(0x171ED6C0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_66C47ED41C56178D_OFFSET UNITYSDK_OFFSET(0x171ED650)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x171EE840)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x171EA260)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_708E5A65B84D5E24_OFFSET UNITYSDK_OFFSET(0x171EF3B0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_726B11789F671EE9_OFFSET UNITYSDK_OFFSET(0x171ECCF0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_735B72A49CA5A4D8_OFFSET UNITYSDK_OFFSET(0x171EBF40)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x171EE7D0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x171E9ED0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x171EB820)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x171E9D00)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x171EBE30)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_8D099DEEAF2784A3_OFFSET UNITYSDK_OFFSET(0x171EDD50)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x171EB2A0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_914575F73265A2FE_OFFSET UNITYSDK_OFFSET(0x171EF320)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_9E79A5511E060783_OFFSET UNITYSDK_OFFSET(0x171EBDA0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_A06359FA5E17A386_OFFSET UNITYSDK_OFFSET(0x171ECFC0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_A136AB76EB5E8B3E_OFFSET UNITYSDK_OFFSET(0x171EDFB0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x171EF8A0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_ABD6C60E1C36A4F4_OFFSET UNITYSDK_OFFSET(0x171E9FE0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x171ED0A0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x171EB3F0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_B881B32CDE8EA3C3_OFFSET UNITYSDK_OFFSET(0x171ED8F0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x171EA030)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x171EC9C0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_CBEA6C3CA5E42755_OFFSET UNITYSDK_OFFSET(0x171EF0C0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_D615CB28C5656CC3_OFFSET UNITYSDK_OFFSET(0x171EEC20)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x171E9AB0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x171E9C80)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_F0E81349E06FF8CF_OFFSET UNITYSDK_OFFSET(0x171EBC30)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x171EF9C0)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x171EF900)
#define CLASS_2_59B7D0D376F5D526_METHOD_2_F74F5C57177D2273_OFFSET UNITYSDK_OFFSET(0x171EE050)
#define CLASS_2_59B7D0D376F5D526_SET_TOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x171EF870)
#define CLASS_2_59B7D0D376F5D526__CCTOR_OFFSET UNITYSDK_OFFSET(0x171F15C0)
#define CLASS_2_59B7D0D376F5D526__CTOR_OFFSET UNITYSDK_OFFSET(0x171EFCE0)
#define CLASS_2_59B7D0D376F5D526__ONBIND_OFFSET UNITYSDK_OFFSET(0x171E9240)
#define CLASS_2_59B7D0D376F5D526__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x171EB180)
#define CLASS_2_59B7D0D376F5D526__ONTICK_OFFSET UNITYSDK_OFFSET(0x171EA0B0)

inline static constexpr unsigned int Class_2_59B7D0D376F5D526_TypeDefinitionIndex = 69095;

class Class_2_59B7D0D376F5D526 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::RPG::Client::UIFloatingTextType* StaticGet_Field_2_0()
	{
		return (::RPG::Client::UIFloatingTextType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_59B7D0D376F5D526_TypeDefinitionIndex)->GetStaticField(0x8750);
	}
	static ::System::Int32* StaticGet__TopPriority_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_59B7D0D376F5D526_TypeDefinitionIndex)->GetStaticField(0x8754);
	}
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	// static const ::System::String* Field_2_14; // 0x0
	// static const ::System::String* Field_2_15; // 0x0
	// static const ::System::String* Field_2_16; // 0x0
	// static const ::System::String* Field_2_17; // 0x0
	// static const ::System::String* Field_2_18; // 0x0
	// static const ::System::String* Field_2_19; // 0x0
	// static const ::System::String* Field_2_20; // 0x0
	// static const ::System::Int32 Field_2_21 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_22 = 0x8; // 0x0
	// static const ::System::Int64 Field_2_23 = 0xE8D4A50FFF; // 0x0
	// static const ::System::String* Field_2_24; // 0x0
	// static const ::System::String* Field_2_25; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	// static const ::System::String* Field_2_28; // 0x0
	// static const ::System::String* Field_2_29; // 0x0
	// static const ::System::String* Field_2_30; // 0x0
	// static const ::System::String* Field_2_31; // 0x0
	// static const ::System::String* Field_2_32; // 0x0
	// static const ::System::String* Field_2_33; // 0x0
	// static const ::System::String* Field_2_34; // 0x0
	// static const ::System::String* Field_2_35; // 0x0
	// static const ::System::String* Field_2_36; // 0x0
	// static const ::System::String* Field_2_37; // 0x0
	// static const ::System::String* Field_2_38; // 0x0
	::Il2CppArray<::System::String*>* Field_2_39; // 0x60
	::System::String* Field_2_40; // 0x68
	::Class_0_16E4307DCC419505_1079* Field_2_41; // 0x70
	::UnityEngine::Animation* Field_2_42; // 0x78
	::UnityEngine::Transform* Field_2_43; // 0x80
	::UnityEngine::Transform* Field_2_44; // 0x88
	::RPG::GameCore::CharacterVisibleComponent* Field_2_45; // 0x90
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_46; // 0x98
	::RPG::GameCore::GameEntity* Field_2_47; // 0xA0
	::RPG::Client::PrefabLoadMeta* Field_2_48; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_49; // 0xB0
	::UnityEngine::UI::ContentSizeFitter* Field_2_50; // 0xB8
	::UnityEngine::Transform* Field_2_51; // 0xC0
	::System::Collections::Generic::List_1<::RPG::Client::SimpleText*>* Field_2_52; // 0xC8
	::Class_1_C3BEB9A6D7F5D20E* Field_2_53; // 0xD0
	::Class_1_40540E08ABD916B4* Field_2_54; // 0xD8
	::UnityEngine::Transform* Field_2_55; // 0xE0
	::UnityEngine::UI::LayoutGroup* Field_2_56; // 0xE8
	::RPG::Client::UIFollow3DTarget* Field_2_57; // 0xF0
	::Class_1_1EDFFB645AFD9A3E* Field_2_58; // 0xF8
	::System::Collections::Generic::List_1<::Class_1_40540E08ABD916B4*>* Field_2_59; // 0x100
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_60; // 0x108
	::Il2CppArray<::UnityEngine::Transform*>* Field_2_61; // 0x110
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DamateTextFontStyle, ::System::String*>* Field_2_62; // 0x118
	::System::Collections::Generic::List_1<::Class_2_59B7D0D376F5D526_Class_0_16E7307DCC43CB2C_25*>* Field_2_63; // 0x120
	::Class_1_C3BEB9A6D7F5D20E* Field_2_64; // 0x128
	::UnityEngine::UI::Image* Field_2_65; // 0x130
	::Class_1_C3BEB9A6D7F5D20E* Field_2_66; // 0x138
	::UnityEngine::SimpleAnimation* Field_2_67; // 0x140
	::UnityEngine::CanvasGroup* Field_2_68; // 0x148
	::Class_1_40540E08ABD916B4* Field_2_69; // 0x150
	::UnityEngine::RectTransform* Field_2_70; // 0x158
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DamateTextFontStyle, ::UnityEngine::Font*>* Field_2_71; // 0x160
	::Class_2_80016B9B50F708B7* Field_2_72; // 0x168
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Field_2_73; // 0x170
	::Il2CppArray<::Class_1_C3BEB9A6D7F5D20E*>* Field_2_74; // 0x178
	::Class_1_40540E08ABD916B4* Field_2_75; // 0x180
	::UnityEngine::Transform* Field_2_76; // 0x188
	::Class_1_C3BEB9A6D7F5D20E* Field_2_77; // 0x190
	::UnityEngine::Transform* Field_2_78; // 0x198
	::Class_1_40540E08ABD916B4* Field_2_79; // 0x1A0
	::UnityEngine::UI::Image* Field_2_80; // 0x1A8
	::Class_1_C3BEB9A6D7F5D20E* Field_2_81; // 0x1B0
	::System::Boolean Field_2_82; // 0x1B8
	::System::Boolean Field_2_83; // 0x1B9
	::RPG::GameCore::UIDamageTextType Field_2_84; // 0x1BC
	::System::Single Field_2_85; // 0x1C0
	::UnityEngine::Vector2 Field_2_86; // 0x1C4
	::System::Boolean Field_2_87; // 0x1CC
	::System::Boolean Field_2_88; // 0x1CD
	::System::Boolean Field_2_89; // 0x1CE
	::System::Single Field_2_90; // 0x1D0
	::System::Single Field_2_91; // 0x1D4
	::RPG::GameCore::TeamType Field_2_92; // 0x1D8
	::RPG::GameCore::DamateTextFontStyle Field_2_93; // 0x1DC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_48C86576570A48CA(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_48C86576570A48CA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void Method_2_255C4E8D50663DEF(::RPG::GameCore::FixPoint a1, ::System::Boolean a2, ::DamageTextStyle* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Boolean, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_255C4E8D50663DEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_9E79A5511E060783(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_9E79A5511E060783_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C639A7B266E3F6B(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_2C639A7B266E3F6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_061E09523E43F031(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_061E09523E43F031_OFFSET))(this, a1);
	}

	::System::Void Method_2_726B11789F671EE9(::RPG::GameCore::AttackDamageType a1, ::DamageTextStyle* a2, ::System::Nullable_1<::RPG::GameCore::ElementDamageType> a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::DamageTextStyle*, ::System::Nullable_1<::RPG::GameCore::ElementDamageType>, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_726B11789F671EE9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::System::Boolean Method_2_4C6A9BAF3D99BA03(::RPG::Client::UIFloatingTextType a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_4C6A9BAF3D99BA03_OFFSET))(a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_A06359FA5E17A386(::RPG::GameCore::AttackDamageType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_A06359FA5E17A386_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_04516DC4047C3A8D(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_04516DC4047C3A8D_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C47ED41C56178D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_66C47ED41C56178D_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C47ED41C56178D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_66C47ED41C56178D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5DE2B5657DE4A62B(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_5DE2B5657DE4A62B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B881B32CDE8EA3C3(::RPG::Client::TextID a1, ::DamageTextStyle* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::DamageTextStyle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_B881B32CDE8EA3C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_626867CFE8995B57(::DamageTextStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_626867CFE8995B57_OFFSET))(this, a1);
	}

	::System::Void Method_2_15286982DF950401(::RPG::GameCore::FixPoint a1, ::RPG::Client::UIFloatingTextType a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_15286982DF950401_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_0C44FB644D25C1C2_OFFSET))(this);
	}

	::System::Void Method_2_F74F5C57177D2273(::RPG::GameCore::FixPoint a1, ::RPG::Client::UIFloatingTextType a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_F74F5C57177D2273_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_53F27F73898F1DBC(::System::String* a1, ::RPG::Client::UIFloatingTextType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::UIFloatingTextType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_53F27F73898F1DBC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_633BD41FEBF1F191(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_633BD41FEBF1F191_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_8D099DEEAF2784A3(::RPG::Client::UIFloatingTextType a1, ::System::Boolean a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::System::Boolean, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_8D099DEEAF2784A3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_86B4CACC0974BF85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86B4CACC0974BF85*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>* Method_2_2303E3416C24D3F9()
	{
		return ((::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_2303E3416C24D3F9_OFFSET))(this);
	}

	::System::Void Method_2_F0E81349E06FF8CF(::System::Int64 a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_F0E81349E06FF8CF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_49DF3329552800C8(::System::String* a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_49DF3329552800C8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_254E3F47C444DDAE(::System::String* a1, ::DamageTextStyle* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_254E3F47C444DDAE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D615CB28C5656CC3(::System::Int32 a1, ::System::String* a2, ::DamageTextStyle* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::DamageTextStyle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_D615CB28C5656CC3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::RPG::GameCore::TeamType Method_2_583D59500575D856()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_583D59500575D856_OFFSET))(this);
	}

	::System::Void Method_2_CBEA6C3CA5E42755(::RPG::GameCore::UIDamageTextType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UIDamageTextType))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_CBEA6C3CA5E42755_OFFSET))(this, a1);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_0DA2366A4A7DBAA7_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_2_A136AB76EB5E8B3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_A136AB76EB5E8B3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_914575F73265A2FE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_914575F73265A2FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_2_ABD6C60E1C36A4F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_ABD6C60E1C36A4F4_OFFSET))(this);
	}

	::System::Void Method_2_708E5A65B84D5E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_708E5A65B84D5E24_OFFSET))(this);
	}

	::System::Void Method_2_369BB5E7FA6A1768(::Class_1_C3BEB9A6D7F5D20E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3BEB9A6D7F5D20E*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4_1(::Class_1_40540E08ABD916B4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_40540E08ABD916B4*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_5022DB1DC5AA8CB4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_2_1E231E3A449E8C46(::UnityEngine::Font* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_1E231E3A449E8C46_OFFSET))(this, a1);
	}

	::UnityEngine::Font* Method_2_735B72A49CA5A4D8(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::UnityEngine::Font*(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_735B72A49CA5A4D8_OFFSET))(this, a1);
	}

	::UnityEngine::Font* Method_2_29C99DADD0A1090B(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::UnityEngine::Font*(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_29C99DADD0A1090B_OFFSET))(this, a1);
	}

	static ::System::Int32 get_TopPriority()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_GET_TOPPRIORITY_OFFSET))();
	}

	static ::System::Void set_TopPriority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_SET_TOPPRIORITY_OFFSET))(a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_2_25FD056A8C10B921(::RPG::Client::UIFloatingTextType a1, ::DamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFloatingTextType, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_25FD056A8C10B921_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59B7D0D376F5D526_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

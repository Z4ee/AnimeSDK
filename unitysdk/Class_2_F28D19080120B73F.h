#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/Struct_2_A7EFF121F1A9ACBF.h"

class Class_0_16E4307DCC419505_1192;
class Class_1_3FF51CE8B91EFA1B;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_A12205C602394C2F;
class Class_2_B28AAD03E01DF611;
class Class_2_FF56C2D5F7C4ACDC;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class BattleBuffListViewData; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::GameCore { class AvatarBaseTypeRow; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_F28D19080120B73F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xFECD4F0)
#define CLASS_2_F28D19080120B73F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xFECD5E0)
#define CLASS_2_F28D19080120B73F_METHOD_2_007240750E289BD1_OFFSET UNITYSDK_OFFSET(0xFEC9460)
#define CLASS_2_F28D19080120B73F_METHOD_2_01C00AED4805279E_OFFSET UNITYSDK_OFFSET(0xFEC9AC0)
#define CLASS_2_F28D19080120B73F_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xFECB780)
#define CLASS_2_F28D19080120B73F_METHOD_2_18E436D8441F7C1E_OFFSET UNITYSDK_OFFSET(0xFECB8F0)
#define CLASS_2_F28D19080120B73F_METHOD_2_1C5B20CA017A0F3F_OFFSET UNITYSDK_OFFSET(0xFECCD60)
#define CLASS_2_F28D19080120B73F_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xFEC8FF0)
#define CLASS_2_F28D19080120B73F_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xFECB6F0)
#define CLASS_2_F28D19080120B73F_METHOD_2_2ED6963ACD80799F_OFFSET UNITYSDK_OFFSET(0xFECAB10)
#define CLASS_2_F28D19080120B73F_METHOD_2_352108E309FC2A7D_OFFSET UNITYSDK_OFFSET(0xFECC2D0)
#define CLASS_2_F28D19080120B73F_METHOD_2_3F4BAFD01734FF87_OFFSET UNITYSDK_OFFSET(0xFECD060)
#define CLASS_2_F28D19080120B73F_METHOD_2_42A121C686C73935_OFFSET UNITYSDK_OFFSET(0xFECBAE0)
#define CLASS_2_F28D19080120B73F_METHOD_2_44CE4196FD08AB6A_OFFSET UNITYSDK_OFFSET(0xFECA240)
#define CLASS_2_F28D19080120B73F_METHOD_2_4C81839CB015BA71_OFFSET UNITYSDK_OFFSET(0xFECA620)
#define CLASS_2_F28D19080120B73F_METHOD_2_543BACA46DC7AC45_OFFSET UNITYSDK_OFFSET(0xFECA360)
#define CLASS_2_F28D19080120B73F_METHOD_2_61A6B9CAB65D860D_OFFSET UNITYSDK_OFFSET(0xFECC3F0)
#define CLASS_2_F28D19080120B73F_METHOD_2_655FE4766AD9A1D7_OFFSET UNITYSDK_OFFSET(0xFECC1B0)
#define CLASS_2_F28D19080120B73F_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xFEC8730)
#define CLASS_2_F28D19080120B73F_METHOD_2_7DFA4D0453DAD789_OFFSET UNITYSDK_OFFSET(0xFECC050)
#define CLASS_2_F28D19080120B73F_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xFECB660)
#define CLASS_2_F28D19080120B73F_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xFECC240)
#define CLASS_2_F28D19080120B73F_METHOD_2_9F30F370AA7FFDB0_OFFSET UNITYSDK_OFFSET(0xFECD370)
#define CLASS_2_F28D19080120B73F_METHOD_2_A1596F65A2679075_OFFSET UNITYSDK_OFFSET(0xFECBE10)
#define CLASS_2_F28D19080120B73F_METHOD_2_A2140754BB277C2F_OFFSET UNITYSDK_OFFSET(0xFECBA10)
#define CLASS_2_F28D19080120B73F_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0xFEC95F0)
#define CLASS_2_F28D19080120B73F_METHOD_2_A49BE6E62DF652F7_OFFSET UNITYSDK_OFFSET(0xFECAEC0)
#define CLASS_2_F28D19080120B73F_METHOD_2_A727EDC5A74B3CE3_OFFSET UNITYSDK_OFFSET(0xFEC9690)
#define CLASS_2_F28D19080120B73F_METHOD_2_AE30D8621FD9E0AB_OFFSET UNITYSDK_OFFSET(0xFECCCB0)
#define CLASS_2_F28D19080120B73F_METHOD_2_C6629EC30BC4F082_OFFSET UNITYSDK_OFFSET(0xFECBCC0)
#define CLASS_2_F28D19080120B73F_METHOD_2_C8C91A3431993C1D_OFFSET UNITYSDK_OFFSET(0xFECBB80)
#define CLASS_2_F28D19080120B73F_METHOD_2_CCC6A3002C391211_OFFSET UNITYSDK_OFFSET(0xFEC9250)
#define CLASS_2_F28D19080120B73F_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xFEC9A60)
#define CLASS_2_F28D19080120B73F_METHOD_2_E481FFB9C819571A_OFFSET UNITYSDK_OFFSET(0xFECB4E0)
#define CLASS_2_F28D19080120B73F_METHOD_2_E4D422DD274C36BD_OFFSET UNITYSDK_OFFSET(0xFEC9710)
#define CLASS_2_F28D19080120B73F_METHOD_2_EDF310B07574DC41_OFFSET UNITYSDK_OFFSET(0xFECCE40)
#define CLASS_2_F28D19080120B73F_METHOD_2_EED2E6C457473DEB_OFFSET UNITYSDK_OFFSET(0xFECD1F0)
#define CLASS_2_F28D19080120B73F_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xFECD420)
#define CLASS_2_F28D19080120B73F_METHOD_2_F3D9F5693C756112_OFFSET UNITYSDK_OFFSET(0xFEC9E10)
#define CLASS_2_F28D19080120B73F_METHOD_2_FCB083D83811A7AD_OFFSET UNITYSDK_OFFSET(0xFECC4D0)
#define CLASS_2_F28D19080120B73F__CTOR_OFFSET UNITYSDK_OFFSET(0xFECD6B0)
#define CLASS_2_F28D19080120B73F__ONBIND_OFFSET UNITYSDK_OFFSET(0xFEC87D0)
#define CLASS_2_F28D19080120B73F___ONBINDHANDLERS_B__45_1_OFFSET UNITYSDK_OFFSET(0xFECD6E0)

inline static constexpr unsigned int Class_2_F28D19080120B73F_TypeDefinitionIndex = 71315;

class Class_2_F28D19080120B73F : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::UInt32 OACOPDFFICC = 0x21; // 0x0
	// static const ::System::UInt32 GOKKAJEBDFF = 0x1; // 0x0
	// static const ::System::String* BJDEMECMDFO; // 0x0
	::UnityEngine::Transform* KLGICMFOPMB; // 0x60
	::UnityEngine::Transform* NBDAGMFAJFE; // 0x68
	::UnityEngine::UI::Button* LBLGAJJNBNA; // 0x70
	::UnityEngine::UI::Image* NBOMMEHFAEH; // 0x78
	::UnityEngine::Transform* AKBPGBIPNLD; // 0x80
	::RPG::Client::NodeListViewPanel_1<::Class_2_B28AAD03E01DF611*>* IPOFLNLHNON; // 0x88
	::RPG::Client::MonoInControlButton* JCGCFHICIJN; // 0x90
	::UnityEngine::UI::Text* CMAELIBLFJL; // 0x98
	::UnityEngine::UI::Button* MFNLPKHODLO; // 0xA0
	::Class_1_DDDB57AA67C3A9EA* KPFKDKLCFKG; // 0xA8
	::UnityEngine::Transform* KDFDODMGEPP; // 0xB0
	::UnityEngine::UI::Button* OBDDABIIHBM; // 0xB8
	::UnityEngine::Transform* BJJKLEGOFGK; // 0xC0
	::UnityEngine::Transform* OCJAAFKJCNL; // 0xC8
	::UnityEngine::Transform* DDFHOJOLBDC; // 0xD0
	::UnityEngine::RectTransform* HKONEDKHNMM; // 0xD8
	::UnityEngine::Transform* JKFHMICGPKA; // 0xE0
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xE8
	::UnityEngine::Transform* EIPJKCGEGGE; // 0xF0
	::UnityEngine::UI::Text* HEBDBKMCKLD; // 0xF8
	::RPG::Client::LocalizedText* CDKAPPKLOIH; // 0x100
	::RPG::Client::AnimatorButton* CAAMIPIKAFC; // 0x108
	::Class_1_3FF51CE8B91EFA1B* CDMFHPLLFEC; // 0x110
	::UnityEngine::UI::Text* INHMEPCJJDJ; // 0x118
	::RPG::Client::PrefabLoadMeta* EAECFIJKDJD; // 0x120
	::Class_2_FF56C2D5F7C4ACDC* DIPNPLJNKMF; // 0x128
	::UnityEngine::UI::ScrollRect* DNGOBOCIMNC; // 0x130
	::UnityEngine::Transform* CFOMPKBJGHE; // 0x138
	::RPG::Client::NodeListViewPanel_1<::Class_2_A12205C602394C2F*>* CMIPAADGHJM; // 0x140
	::UnityEngine::Transform* MDOOJBFDMLC; // 0x148
	::RPG::Client::LocalizedText* HIHOPIGMGLI; // 0x150
	::UnityEngine::Transform* MMKMILCLBNP; // 0x158
	::UnityEngine::Transform* KJBGPLAICDO; // 0x160
	::UnityEngine::UI::Text* FKFFDCCCGFE; // 0x168
	::UnityEngine::Animation* KCOAILOHDND; // 0x170
	::UnityEngine::Transform* PGACKAFNKDP; // 0x178
	::UnityEngine::UI::Text* FMLIEJCGKEF; // 0x180
	::RPG::Client::LocalizedText* KMOKEOEFJLC; // 0x188
	::RPG::Client::UIStateCtrl* OHIFLMNKEFL; // 0x190
	::UnityEngine::Transform* ICAENPPDHIM; // 0x198
	::UnityEngine::UI::Image* FAGIGDMBBNO; // 0x1A0
	::System::Boolean NPHJEELJPIF; // 0x1A8
	::System::Boolean CNCOLKCMDOK; // 0x1A9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_2_CCC6A3002C391211(::Struct_2_A7EFF121F1A9ACBF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A7EFF121F1A9ACBF))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_CCC6A3002C391211_OFFSET))(this, a1);
	}

	::System::Void Method_2_007240750E289BD1(::Struct_2_A7EFF121F1A9ACBF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A7EFF121F1A9ACBF))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_007240750E289BD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_A727EDC5A74B3CE3(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_A727EDC5A74B3CE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_E4D422DD274C36BD(::Class_0_16E4307DCC419505_1192* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1192*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_E4D422DD274C36BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_F3D9F5693C756112(::Struct_2_A7EFF121F1A9ACBF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A7EFF121F1A9ACBF))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_F3D9F5693C756112_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_2_44CE4196FD08AB6A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_44CE4196FD08AB6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2140754BB277C2F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_A2140754BB277C2F_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::AvatarBaseTypeRow* Method_2_C8C91A3431993C1D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AvatarBaseTypeRow*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_C8C91A3431993C1D_OFFSET))(a1);
	}

	::System::Void Method_2_42A121C686C73935(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_42A121C686C73935_OFFSET))(this, a1);
	}

	::System::Void Method_2_543BACA46DC7AC45(::RPG::GameCore::CharacterDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_543BACA46DC7AC45_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C81839CB015BA71(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_4C81839CB015BA71_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_2ED6963ACD80799F(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::BattleEventDataComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_2ED6963ACD80799F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A49BE6E62DF652F7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_A49BE6E62DF652F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_18E436D8441F7C1E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_18E436D8441F7C1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1596F65A2679075(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_A1596F65A2679075_OFFSET))(this, a1);
	}

	::System::Void Method_2_E481FFB9C819571A(::RPG::Client::BattleBuffListViewData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleBuffListViewData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_E481FFB9C819571A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_01C00AED4805279E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_01C00AED4805279E_OFFSET))(this, a1);
	}

	::System::String* Method_2_655FE4766AD9A1D7(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_655FE4766AD9A1D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_7DFA4D0453DAD789(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_7DFA4D0453DAD789_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_352108E309FC2A7D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_352108E309FC2A7D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_61A6B9CAB65D860D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_61A6B9CAB65D860D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AE30D8621FD9E0AB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_AE30D8621FD9E0AB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::LevelUIComponent* Method_2_3F4BAFD01734FF87()
	{
		return ((::RPG::GameCore::LevelUIComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_3F4BAFD01734FF87_OFFSET))(this);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_1C5B20CA017A0F3F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_1C5B20CA017A0F3F_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_EED2E6C457473DEB(::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_EED2E6C457473DEB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_EDF310B07574DC41(::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_EDF310B07574DC41_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_FCB083D83811A7AD(::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_FCB083D83811A7AD_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_C6629EC30BC4F082()
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_C6629EC30BC4F082_OFFSET))(this);
	}

	::System::Boolean Method_2_9F30F370AA7FFDB0(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_9F30F370AA7FFDB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__45_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___ONBINDHANDLERS_B__45_1_OFFSET))(this, a1);
	}
};

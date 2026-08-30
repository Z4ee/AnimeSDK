#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/Struct_2_A7EFF121F1A9ACBF.h"

class Class_0_16E4307DCC419505_1080;
class Class_1_3FF51CE8B91EFA1B;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_4BD56C05450EB359;
class Class_2_A12205C602394C2F;
class Class_2_B28AAD03E01DF611;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::GameCore { class AvatarBaseTypeRow; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class ElationCharacterUIConfig; }
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

#define CLASS_2_7EB6B93CD50E2F99_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xFA95080)
#define CLASS_2_7EB6B93CD50E2F99_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xFA95170)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_007240750E289BD1_OFFSET UNITYSDK_OFFSET(0xFA90B40)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_01C00AED4805279E_OFFSET UNITYSDK_OFFSET(0xFA911A0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xFA930C0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_0DB4F8DD36A18D8B_OFFSET UNITYSDK_OFFSET(0xFA93A30)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_18E436D8441F7C1E_OFFSET UNITYSDK_OFFSET(0xFA93230)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_1C5B20CA017A0F3F_OFFSET UNITYSDK_OFFSET(0xFA948F0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_1E47304E326E432A_OFFSET UNITYSDK_OFFSET(0xFA936D0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xFA90710)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xFA93020)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_2ED6963ACD80799F_OFFSET UNITYSDK_OFFSET(0xFA922F0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_352108E309FC2A7D_OFFSET UNITYSDK_OFFSET(0xFA93E70)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3B9C56AB1AF0D588_OFFSET UNITYSDK_OFFSET(0xFA92CC0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3F4BAFD01734FF87_OFFSET UNITYSDK_OFFSET(0xFA94BF0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_42A121C686C73935_OFFSET UNITYSDK_OFFSET(0xFA93420)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_44CE4196FD08AB6A_OFFSET UNITYSDK_OFFSET(0xFA91980)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_4C81839CB015BA71_OFFSET UNITYSDK_OFFSET(0xFA91D60)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_543BACA46DC7AC45_OFFSET UNITYSDK_OFFSET(0xFA91AA0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_61A6B9CAB65D860D_OFFSET UNITYSDK_OFFSET(0xFA93F90)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_655FE4766AD9A1D7_OFFSET UNITYSDK_OFFSET(0xFA93D50)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xFA8FE50)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7DFA4D0453DAD789_OFFSET UNITYSDK_OFFSET(0xFA93BF0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xFA92F90)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xFA93DE0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_9F30F370AA7FFDB0_OFFSET UNITYSDK_OFFSET(0xFA94F00)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A1596F65A2679075_OFFSET UNITYSDK_OFFSET(0xFA937F0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A2140754BB277C2F_OFFSET UNITYSDK_OFFSET(0xFA93350)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0xFA90CD0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A49BE6E62DF652F7_OFFSET UNITYSDK_OFFSET(0xFA926A0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A727EDC5A74B3CE3_OFFSET UNITYSDK_OFFSET(0xFA90D70)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_AE30D8621FD9E0AB_OFFSET UNITYSDK_OFFSET(0xFA94840)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_C6629EC30BC4F082_OFFSET UNITYSDK_OFFSET(0xFA93590)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_CCC6A3002C391211_OFFSET UNITYSDK_OFFSET(0xFA90970)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_CEEE72CC5B6C543B_OFFSET UNITYSDK_OFFSET(0xFA934C0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_D1367138CEC8E0AD_OFFSET UNITYSDK_OFFSET(0xFA914F0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xFA91140)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_E4D422DD274C36BD_OFFSET UNITYSDK_OFFSET(0xFA90DF0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_EDF310B07574DC41_OFFSET UNITYSDK_OFFSET(0xFA949D0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_EED2E6C457473DEB_OFFSET UNITYSDK_OFFSET(0xFA94D80)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xFA94FB0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_FABFA21254FBB3C1_OFFSET UNITYSDK_OFFSET(0xFA92250)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_FCB083D83811A7AD_OFFSET UNITYSDK_OFFSET(0xFA94070)
#define CLASS_2_7EB6B93CD50E2F99__CTOR_OFFSET UNITYSDK_OFFSET(0xFA95240)
#define CLASS_2_7EB6B93CD50E2F99__ONBIND_OFFSET UNITYSDK_OFFSET(0xFA8FEF0)
#define CLASS_2_7EB6B93CD50E2F99___ONBINDHANDLERS_B__45_1_OFFSET UNITYSDK_OFFSET(0xFA95270)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99_TypeDefinitionIndex = 71276;

class Class_2_7EB6B93CD50E2F99 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::UInt32 OACOPDFFICC = 0x21; // 0x0
	// static const ::System::UInt32 GOKKAJEBDFF = 0x1; // 0x0
	// static const ::System::String* BJDEMECMDFO; // 0x0
	::UnityEngine::Transform* ICAENPPDHIM; // 0x60
	::UnityEngine::UI::Text* FKFFDCCCGFE; // 0x68
	::UnityEngine::UI::Text* HEBDBKMCKLD; // 0x70
	::RPG::Client::MonoInControlButton* JCGCFHICIJN; // 0x78
	::RPG::Client::NodeListViewPanel_1<::Class_2_B28AAD03E01DF611*>* IPOFLNLHNON; // 0x80
	::RPG::Client::LocalizedText* HIHOPIGMGLI; // 0x88
	::Class_1_DDDB57AA67C3A9EA* KPFKDKLCFKG; // 0x90
	::UnityEngine::Transform* JKFHMICGPKA; // 0x98
	::UnityEngine::Transform* MMKMILCLBNP; // 0xA0
	::UnityEngine::UI::Image* NBOMMEHFAEH; // 0xA8
	::UnityEngine::Transform* MDOOJBFDMLC; // 0xB0
	::UnityEngine::Transform* NBDAGMFAJFE; // 0xB8
	::RPG::Client::PrefabLoadMeta* EAECFIJKDJD; // 0xC0
	::RPG::Client::LocalizedText* CDKAPPKLOIH; // 0xC8
	::UnityEngine::Transform* OCJAAFKJCNL; // 0xD0
	::UnityEngine::Transform* KDFDODMGEPP; // 0xD8
	::UnityEngine::UI::Button* LBLGAJJNBNA; // 0xE0
	::Class_2_4BD56C05450EB359* DIPNPLJNKMF; // 0xE8
	::UnityEngine::Transform* EIPJKCGEGGE; // 0xF0
	::UnityEngine::UI::Button* MFNLPKHODLO; // 0xF8
	::UnityEngine::Transform* PGACKAFNKDP; // 0x100
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x108
	::RPG::Client::AnimatorButton* CAAMIPIKAFC; // 0x110
	::UnityEngine::Transform* CFOMPKBJGHE; // 0x118
	::RPG::Client::LocalizedText* KMOKEOEFJLC; // 0x120
	::UnityEngine::UI::Button* OBDDABIIHBM; // 0x128
	::UnityEngine::Transform* AKBPGBIPNLD; // 0x130
	::RPG::Client::UIStateCtrl* OHIFLMNKEFL; // 0x138
	::UnityEngine::UI::Text* CMAELIBLFJL; // 0x140
	::RPG::Client::NodeListViewPanel_1<::Class_2_A12205C602394C2F*>* CMIPAADGHJM; // 0x148
	::UnityEngine::UI::Image* FAGIGDMBBNO; // 0x150
	::UnityEngine::Transform* DDFHOJOLBDC; // 0x158
	::UnityEngine::Transform* KLGICMFOPMB; // 0x160
	::UnityEngine::UI::Text* INHMEPCJJDJ; // 0x168
	::UnityEngine::UI::ScrollRect* DNGOBOCIMNC; // 0x170
	::UnityEngine::RectTransform* HKONEDKHNMM; // 0x178
	::UnityEngine::Transform* KJBGPLAICDO; // 0x180
	::UnityEngine::Animation* KCOAILOHDND; // 0x188
	::Class_1_3FF51CE8B91EFA1B* CDMFHPLLFEC; // 0x190
	::UnityEngine::UI::Text* FMLIEJCGKEF; // 0x198
	::UnityEngine::Transform* BJJKLEGOFGK; // 0x1A0
	::System::Boolean CNCOLKCMDOK; // 0x1A8
	::System::Boolean NPHJEELJPIF; // 0x1A9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_2_CCC6A3002C391211(::Struct_2_A7EFF121F1A9ACBF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A7EFF121F1A9ACBF))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_CCC6A3002C391211_OFFSET))(this, a1);
	}

	::System::Void Method_2_007240750E289BD1(::Struct_2_A7EFF121F1A9ACBF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A7EFF121F1A9ACBF))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_007240750E289BD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_A727EDC5A74B3CE3(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A727EDC5A74B3CE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_E4D422DD274C36BD(::Class_0_16E4307DCC419505_1080* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1080*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_E4D422DD274C36BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_D1367138CEC8E0AD(::Struct_2_A7EFF121F1A9ACBF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A7EFF121F1A9ACBF))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_D1367138CEC8E0AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_2_44CE4196FD08AB6A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_44CE4196FD08AB6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2140754BB277C2F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A2140754BB277C2F_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::AvatarBaseTypeRow* Method_2_CEEE72CC5B6C543B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AvatarBaseTypeRow*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_CEEE72CC5B6C543B_OFFSET))(a1);
	}

	::System::Void Method_2_42A121C686C73935(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_42A121C686C73935_OFFSET))(this, a1);
	}

	::System::Void Method_2_543BACA46DC7AC45(::RPG::GameCore::CharacterDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_543BACA46DC7AC45_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C81839CB015BA71(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_4C81839CB015BA71_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FABFA21254FBB3C1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_FABFA21254FBB3C1_OFFSET))(this);
	}

	::System::Boolean Method_2_1E47304E326E432A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_1E47304E326E432A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_2ED6963ACD80799F(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::BattleEventDataComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_2ED6963ACD80799F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A49BE6E62DF652F7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A49BE6E62DF652F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_18E436D8441F7C1E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_18E436D8441F7C1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1596F65A2679075(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A1596F65A2679075_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B9C56AB1AF0D588(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::ElationCharacterUIConfig* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_3B9C56AB1AF0D588_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_0DB4F8DD36A18D8B(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_0DB4F8DD36A18D8B_OFFSET))(a1);
	}

	::System::Void Method_2_01C00AED4805279E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_01C00AED4805279E_OFFSET))(this, a1);
	}

	::System::String* Method_2_655FE4766AD9A1D7(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_655FE4766AD9A1D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_7DFA4D0453DAD789(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_7DFA4D0453DAD789_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_352108E309FC2A7D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_352108E309FC2A7D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_61A6B9CAB65D860D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_61A6B9CAB65D860D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AE30D8621FD9E0AB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_AE30D8621FD9E0AB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::LevelUIComponent* Method_2_3F4BAFD01734FF87()
	{
		return ((::RPG::GameCore::LevelUIComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_3F4BAFD01734FF87_OFFSET))(this);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_1C5B20CA017A0F3F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_1C5B20CA017A0F3F_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_EED2E6C457473DEB(::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_EED2E6C457473DEB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_EDF310B07574DC41(::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_EDF310B07574DC41_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_FCB083D83811A7AD(::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_FCB083D83811A7AD_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_C6629EC30BC4F082()
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_C6629EC30BC4F082_OFFSET))(this);
	}

	::System::Boolean Method_2_9F30F370AA7FFDB0(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_9F30F370AA7FFDB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__45_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___ONBINDHANDLERS_B__45_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_A7EFF121F1A9ACBF.h"

class Class_0_16E4307DCC419505_984;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_4BD56C05450EB359;
class Class_2_A12205C602394C2F;
class Class_2_B28AAD03E01DF611;
namespace RPG::Client { class LocalizedText; }
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

#define CLASS_2_7EB6B93CD50E2F99_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE4A18C0)
#define CLASS_2_7EB6B93CD50E2F99_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE4A19B0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_007240750E289BD1_OFFSET UNITYSDK_OFFSET(0xE49E1B0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_01C00AED4805279E_OFFSET UNITYSDK_OFFSET(0xE49E730)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_03237FD6F723F288_OFFSET UNITYSDK_OFFSET(0xE4A0460)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_03D483885D7ECD47_OFFSET UNITYSDK_OFFSET(0xE4A03A0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_0DB4F8DD36A18D8B_OFFSET UNITYSDK_OFFSET(0xE4A0530)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_14F3D539C275A6D3_OFFSET UNITYSDK_OFFSET(0xE4A1680)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xE49DD80)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xE49FED0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_2ED6963ACD80799F_OFFSET UNITYSDK_OFFSET(0xE49F7C0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_352108E309FC2A7D_OFFSET UNITYSDK_OFFSET(0xE4A0970)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3B9C56AB1AF0D588_OFFSET UNITYSDK_OFFSET(0xE49FB70)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3D38B90746E3FB3F_OFFSET UNITYSDK_OFFSET(0xE4A1350)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3F4BAFD01734FF87_OFFSET UNITYSDK_OFFSET(0xE4A1500)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_42A121C686C73935_OFFSET UNITYSDK_OFFSET(0xE4A0220)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_43EA95365AF8ADDE_OFFSET UNITYSDK_OFFSET(0xE4A0A90)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_44CE4196FD08AB6A_OFFSET UNITYSDK_OFFSET(0xE49EF00)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_4C81839CB015BA71_OFFSET UNITYSDK_OFFSET(0xE49F240)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_4CBED7F95EC3822A_OFFSET UNITYSDK_OFFSET(0xE49F020)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xE4A1B80)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_57AD8F5C6456AC94_OFFSET UNITYSDK_OFFSET(0xE4A0B70)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_69C2B7BA6A5FED89_OFFSET UNITYSDK_OFFSET(0xE49FF60)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7AFA6337C157B435_OFFSET UNITYSDK_OFFSET(0xE4A1270)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7DFA4D0453DAD789_OFFSET UNITYSDK_OFFSET(0xE4A06F0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xE49FE40)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xE4A08E0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_9971E1E176D73C0C_OFFSET UNITYSDK_OFFSET(0xE49F730)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_9C1042B30380AA62_OFFSET UNITYSDK_OFFSET(0xE4A0850)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_9F30F370AA7FFDB0_OFFSET UNITYSDK_OFFSET(0xE4A1770)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A2140754BB277C2F_OFFSET UNITYSDK_OFFSET(0xE4A0150)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xE4A1820)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0xE49E340)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A727EDC5A74B3CE3_OFFSET UNITYSDK_OFFSET(0xE49E3E0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_AE30D8621FD9E0AB_OFFSET UNITYSDK_OFFSET(0xE4A11C0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_CCC6A3002C391211_OFFSET UNITYSDK_OFFSET(0xE49DFE0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_CEEE72CC5B6C543B_OFFSET UNITYSDK_OFFSET(0xE4A02D0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_D1367138CEC8E0AD_OFFSET UNITYSDK_OFFSET(0xE49EA80)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xE49E6D0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_E4D422DD274C36BD_OFFSET UNITYSDK_OFFSET(0xE49E460)
#define CLASS_2_7EB6B93CD50E2F99__CTOR_OFFSET UNITYSDK_OFFSET(0xE4A1A80)
#define CLASS_2_7EB6B93CD50E2F99__ONBIND_OFFSET UNITYSDK_OFFSET(0xE49D580)
#define CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE4A1BE0)
#define CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE4A1C40)
#define CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xE4A1B20)
#define CLASS_2_7EB6B93CD50E2F99___ONBINDHANDLERS_B__36_1_OFFSET UNITYSDK_OFFSET(0xE4A1AB0)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99_TypeDefinitionIndex = 66663;

class Class_2_7EB6B93CD50E2F99 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::UInt32 Field_2_0 = 0x21; // 0x0
	// static const ::System::UInt32 Field_2_1 = 0x1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::Transform* Field_2_3; // 0x60
	::Class_1_DDDB57AA67C3A9EA* Field_2_4; // 0x68
	::UnityEngine::UI::Text* Field_2_5; // 0x70
	::UnityEngine::Animation* Field_2_6; // 0x78
	::UnityEngine::UI::Button* Field_2_7; // 0x80
	::UnityEngine::RectTransform* Field_2_8; // 0x88
	::UnityEngine::Transform* Field_2_9; // 0x90
	::UnityEngine::Transform* Field_2_10; // 0x98
	::UnityEngine::Transform* Field_2_11; // 0xA0
	::UnityEngine::Transform* Field_2_12; // 0xA8
	::RPG::Client::NodeListViewPanel_1<::Class_2_B28AAD03E01DF611*>* Field_2_13; // 0xB0
	::UnityEngine::Transform* Field_2_14; // 0xB8
	::UnityEngine::Transform* Field_2_15; // 0xC0
	::UnityEngine::UI::Button* Field_2_16; // 0xC8
	::UnityEngine::UI::Button* Field_2_17; // 0xD0
	::UnityEngine::Transform* Field_2_18; // 0xD8
	::UnityEngine::UI::Text* Field_2_19; // 0xE0
	::UnityEngine::Transform* Field_2_20; // 0xE8
	::UnityEngine::UI::Image* Field_2_21; // 0xF0
	::UnityEngine::UI::Text* Field_2_22; // 0xF8
	::UnityEngine::Transform* Field_2_23; // 0x100
	::UnityEngine::Transform* Field_2_24; // 0x108
	::Class_2_4BD56C05450EB359* Field_2_25; // 0x110
	::UnityEngine::UI::Text* Field_2_26; // 0x118
	::RPG::GameCore::LevelUIComponent* Field_2_27; // 0x120
	::RPG::Client::NodeListViewPanel_1<::Class_2_A12205C602394C2F*>* Field_2_28; // 0x128
	::UnityEngine::UI::ScrollRect* Field_2_29; // 0x130
	::UnityEngine::Transform* Field_2_30; // 0x138
	::UnityEngine::UI::Image* Field_2_31; // 0x140
	::UnityEngine::Transform* Field_2_32; // 0x148
	::RPG::Client::LocalizedText* Field_2_33; // 0x150
	::UnityEngine::Transform* Field_2_34; // 0x158
	::UnityEngine::UI::Text* Field_2_35; // 0x160
	::System::Boolean Field_2_36; // 0x168
	::System::Boolean Field_2_37; // 0x169

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99__CTOR_OFFSET))(this);
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

	::System::Void Method_2_E4D422DD274C36BD(::Class_0_16E4307DCC419505_984* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_984*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_E4D422DD274C36BD_OFFSET))(this, a1);
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

	::System::Void Method_2_69C2B7BA6A5FED89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_69C2B7BA6A5FED89_OFFSET))(this);
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

	::System::Void Method_2_4CBED7F95EC3822A(::RPG::GameCore::CharacterDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_4CBED7F95EC3822A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C81839CB015BA71(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_4C81839CB015BA71_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9971E1E176D73C0C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_9971E1E176D73C0C_OFFSET))(this);
	}

	::System::Boolean Method_2_03237FD6F723F288(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_03237FD6F723F288_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_2ED6963ACD80799F(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::BattleEventDataComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_2ED6963ACD80799F_OFFSET))(this, a1, a2);
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

	::System::String* Method_2_9C1042B30380AA62(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_9C1042B30380AA62_OFFSET))(this, a1);
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

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_43EA95365AF8ADDE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_43EA95365AF8ADDE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AE30D8621FD9E0AB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_AE30D8621FD9E0AB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::LevelUIComponent* Method_2_3F4BAFD01734FF87()
	{
		return ((::RPG::GameCore::LevelUIComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_3F4BAFD01734FF87_OFFSET))(this);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_7AFA6337C157B435(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_7AFA6337C157B435_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_14F3D539C275A6D3(::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_14F3D539C275A6D3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_3D38B90746E3FB3F(::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::System::Func_2<::Class_1_DDDB57AA67C3A9EA*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_3D38B90746E3FB3F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_57AD8F5C6456AC94(::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_57AD8F5C6456AC94_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_03D483885D7ECD47()
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_03D483885D7ECD47_OFFSET))(this);
	}

	::System::Boolean Method_2_9F30F370AA7FFDB0(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_9F30F370AA7FFDB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__36_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___ONBINDHANDLERS_B__36_1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

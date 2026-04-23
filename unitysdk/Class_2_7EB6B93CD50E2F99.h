#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_A7EFF121F1A9ACBF.h"

class Class_0_16E4307DCC419505_934;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_37D655FAABC4D43A;
class Class_2_4BD56C05450EB359;
class Class_2_A12205C602394C2F;
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

#define CLASS_2_7EB6B93CD50E2F99_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x96F98C0)
#define CLASS_2_7EB6B93CD50E2F99_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x96F9980)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_06C0B66EEDBE72A8_OFFSET UNITYSDK_OFFSET(0x96F6730)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_0837352686C2ECEC_OFFSET UNITYSDK_OFFSET(0x96F74F0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_137119B83AB96A00_OFFSET UNITYSDK_OFFSET(0x96F9510)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_14F3D539C275A6D3_OFFSET UNITYSDK_OFFSET(0x96F9680)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_213F1233DC2106C8_OFFSET UNITYSDK_OFFSET(0x96F8AA0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x96F8050)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3B9C56AB1AF0D588_OFFSET UNITYSDK_OFFSET(0x96F7D00)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3D38B90746E3FB3F_OFFSET UNITYSDK_OFFSET(0x96F9370)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3EDD7416F9416F69_OFFSET UNITYSDK_OFFSET(0x96F7A10)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_42A121C686C73935_OFFSET UNITYSDK_OFFSET(0x96F8390)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_43EA95365AF8ADDE_OFFSET UNITYSDK_OFFSET(0x96F8B80)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_44CE4196FD08AB6A_OFFSET UNITYSDK_OFFSET(0x96F73D0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_478C9D82AA77A23C_OFFSET UNITYSDK_OFFSET(0x96F85C0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_50A46C2E1D594B5E_OFFSET UNITYSDK_OFFSET(0x96F7970)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_548835A4BE337BAE_OFFSET UNITYSDK_OFFSET(0x96F8440)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x96F9B20)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7485CCD7E60F1CBC_OFFSET UNITYSDK_OFFSET(0x96F8510)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7AFA6337C157B435_OFFSET UNITYSDK_OFFSET(0x96F92A0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7DFA4D0453DAD789_OFFSET UNITYSDK_OFFSET(0x96F8820)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x96F7FC0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_8C77CC5EC838CD07_OFFSET UNITYSDK_OFFSET(0x96F6CA0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_9C1042B30380AA62_OFFSET UNITYSDK_OFFSET(0x96F8980)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_9F30F370AA7FFDB0_OFFSET UNITYSDK_OFFSET(0x96F9770)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A2140754BB277C2F_OFFSET UNITYSDK_OFFSET(0x96F82C0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x96F9820)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x96F68D0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A4DBB07F1ECFF71E_OFFSET UNITYSDK_OFFSET(0x96F8690)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A727EDC5A74B3CE3_OFFSET UNITYSDK_OFFSET(0x96F6970)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x96F6C40)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_AE30D8621FD9E0AB_OFFSET UNITYSDK_OFFSET(0x96F91F0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_C37EE151D005EDA7_OFFSET UNITYSDK_OFFSET(0x96F8C40)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x96F8A10)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_CCC6A3002C391211_OFFSET UNITYSDK_OFFSET(0x96F6570)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_D1367138CEC8E0AD_OFFSET UNITYSDK_OFFSET(0x96F6F60)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_D4684D4E31B8D8A0_OFFSET UNITYSDK_OFFSET(0x96F77A0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_E4D422DD274C36BD_OFFSET UNITYSDK_OFFSET(0x96F69F0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x96F80E0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_FEF062A2DC4257FF_OFFSET UNITYSDK_OFFSET(0x96F6340)
#define CLASS_2_7EB6B93CD50E2F99__CTOR_OFFSET UNITYSDK_OFFSET(0x96F9A20)
#define CLASS_2_7EB6B93CD50E2F99__ONBIND_OFFSET UNITYSDK_OFFSET(0x96F5B40)
#define CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x96F9B80)
#define CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x96F9BE0)
#define CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x96F9AC0)
#define CLASS_2_7EB6B93CD50E2F99___ONBINDHANDLERS_B__36_1_OFFSET UNITYSDK_OFFSET(0x96F9A50)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99_TypeDefinitionIndex = 65729;

class Class_2_7EB6B93CD50E2F99 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::UInt32 Field_2_33 = 0x21; // 0x0
	// static const ::System::UInt32 Field_2_34 = 0x1; // 0x0
	// static const ::System::String* Field_2_37; // 0x0
	::UnityEngine::UI::Button* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_30; // 0x68
	::UnityEngine::UI::ScrollRect* Field_2_20; // 0x70
	::UnityEngine::Transform* Field_2_25; // 0x78
	::UnityEngine::RectTransform* Field_2_19; // 0x80
	::UnityEngine::Transform* Field_2_2; // 0x88
	::RPG::Client::NodeListViewPanel_1<::Class_2_37D655FAABC4D43A*>* Field_2_24; // 0x90
	::Class_2_4BD56C05450EB359* Field_2_21; // 0x98
	::UnityEngine::UI::Text* Field_2_17; // 0xA0
	::UnityEngine::UI::Text* Field_2_16; // 0xA8
	::UnityEngine::Transform* Field_2_9; // 0xB0
	::Class_1_DDDB57AA67C3A9EA* Field_2_31; // 0xB8
	::UnityEngine::Transform* Field_2_1; // 0xC0
	::UnityEngine::Transform* Field_2_12; // 0xC8
	::RPG::Client::NodeListViewPanel_1<::Class_2_A12205C602394C2F*>* Field_2_27; // 0xD0
	::UnityEngine::Transform* Field_2_18; // 0xD8
	::UnityEngine::UI::Text* Field_2_13; // 0xE0
	::UnityEngine::Animation* Field_2_28; // 0xE8
	::UnityEngine::Transform* Field_2_22; // 0xF0
	::RPG::Client::LocalizedText* Field_2_23; // 0xF8
	::RPG::GameCore::LevelUIComponent* Field_2_35; // 0x100
	::UnityEngine::UI::Text* Field_2_15; // 0x108
	::UnityEngine::UI::Button* Field_2_26; // 0x110
	::UnityEngine::Transform* Field_2_3; // 0x118
	::UnityEngine::UI::Text* Field_2_14; // 0x120
	::UnityEngine::UI::Image* Field_2_4; // 0x128
	::UnityEngine::Transform* Field_2_7; // 0x130
	::UnityEngine::Transform* Field_2_10; // 0x138
	::UnityEngine::UI::Image* Field_2_5; // 0x140
	::UnityEngine::Transform* Field_2_11; // 0x148
	::UnityEngine::Transform* Field_2_6; // 0x150
	::UnityEngine::Transform* Field_2_8; // 0x158
	::UnityEngine::UI::Button* Field_2_29; // 0x160
	::System::Boolean Field_2_36; // 0x168
	::System::Boolean Field_2_32; // 0x169

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_FEF062A2DC4257FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_FEF062A2DC4257FF_OFFSET))(this);
	}

	::System::Void Method_2_CCC6A3002C391211(::Struct_2_A7EFF121F1A9ACBF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A7EFF121F1A9ACBF))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_CCC6A3002C391211_OFFSET))(this, a1);
	}

	::System::Void Method_2_06C0B66EEDBE72A8(::Struct_2_A7EFF121F1A9ACBF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A7EFF121F1A9ACBF))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_06C0B66EEDBE72A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_A727EDC5A74B3CE3(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A727EDC5A74B3CE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_E4D422DD274C36BD(::Class_0_16E4307DCC419505_934* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_934*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_E4D422DD274C36BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
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

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_44CE4196FD08AB6A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_44CE4196FD08AB6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2140754BB277C2F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A2140754BB277C2F_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::AvatarBaseTypeRow* Method_2_548835A4BE337BAE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AvatarBaseTypeRow*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_548835A4BE337BAE_OFFSET))(a1);
	}

	::System::Void Method_2_42A121C686C73935(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_42A121C686C73935_OFFSET))(this, a1);
	}

	::System::Void Method_2_0837352686C2ECEC(::RPG::GameCore::CharacterDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_0837352686C2ECEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D4684D4E31B8D8A0(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_D4684D4E31B8D8A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_50A46C2E1D594B5E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_50A46C2E1D594B5E_OFFSET))(this);
	}

	::System::Boolean Method_2_478C9D82AA77A23C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_478C9D82AA77A23C_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_3EDD7416F9416F69(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::BattleEventDataComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_3EDD7416F9416F69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3B9C56AB1AF0D588(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::ElationCharacterUIConfig* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_3B9C56AB1AF0D588_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_A4DBB07F1ECFF71E(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A4DBB07F1ECFF71E_OFFSET))(a1);
	}

	::System::Void Method_2_8C77CC5EC838CD07(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_8C77CC5EC838CD07_OFFSET))(this, a1);
	}

	::System::String* Method_2_9C1042B30380AA62(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_9C1042B30380AA62_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_7DFA4D0453DAD789(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_7DFA4D0453DAD789_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_213F1233DC2106C8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_213F1233DC2106C8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_43EA95365AF8ADDE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_43EA95365AF8ADDE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AE30D8621FD9E0AB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_AE30D8621FD9E0AB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::LevelUIComponent* Method_2_137119B83AB96A00()
	{
		return ((::RPG::GameCore::LevelUIComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_137119B83AB96A00_OFFSET))(this);
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

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_2_C37EE151D005EDA7(::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_C37EE151D005EDA7_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_2_7485CCD7E60F1CBC()
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_7485CCD7E60F1CBC_OFFSET))(this);
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

	::System::Void __OnBindHandlers_b__36_1(::System::Object* o)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___ONBINDHANDLERS_B__36_1_OFFSET))(this, o);
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

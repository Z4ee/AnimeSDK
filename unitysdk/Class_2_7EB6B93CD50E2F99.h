#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_827;
class Class_1_02D30900317D93FD;
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
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7EB6B93CD50E2F99_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x118312F0)
#define CLASS_2_7EB6B93CD50E2F99_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11831430)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_03D483885D7ECD47_OFFSET UNITYSDK_OFFSET(0x1182FD90)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_0837352686C2ECEC_OFFSET UNITYSDK_OFFSET(0x1182EDA0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_137119B83AB96A00_OFFSET UNITYSDK_OFFSET(0x11830D90)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_14F3D539C275A6D3_OFFSET UNITYSDK_OFFSET(0x11830F00)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_213F1233DC2106C8_OFFSET UNITYSDK_OFFSET(0x11830320)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x1182F8D0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3B9C56AB1AF0D588_OFFSET UNITYSDK_OFFSET(0x1182F590)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3D38B90746E3FB3F_OFFSET UNITYSDK_OFFSET(0x11830BF0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_3EDD7416F9416F69_OFFSET UNITYSDK_OFFSET(0x1182F2A0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_42A121C686C73935_OFFSET UNITYSDK_OFFSET(0x1182FC20)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_43EA95365AF8ADDE_OFFSET UNITYSDK_OFFSET(0x11830400)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_44CE4196FD08AB6A_OFFSET UNITYSDK_OFFSET(0x1182EC80)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_478C9D82AA77A23C_OFFSET UNITYSDK_OFFSET(0x1182FE40)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_50A46C2E1D594B5E_OFFSET UNITYSDK_OFFSET(0x1182F210)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_548835A4BE337BAE_OFFSET UNITYSDK_OFFSET(0x1182FCC0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11831650)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7AFA6337C157B435_OFFSET UNITYSDK_OFFSET(0x11830B20)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0x1182E060)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7DF01EF28AED084D_OFFSET UNITYSDK_OFFSET(0x1182E300)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7DFA4D0453DAD789_OFFSET UNITYSDK_OFFSET(0x118300A0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x1182F840)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_8C77CC5EC838CD07_OFFSET UNITYSDK_OFFSET(0x1182E5B0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_9C1042B30380AA62_OFFSET UNITYSDK_OFFSET(0x11830200)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_9F30F370AA7FFDB0_OFFSET UNITYSDK_OFFSET(0x11830FF0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A2140754BB277C2F_OFFSET UNITYSDK_OFFSET(0x1182FB50)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11831180)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x11831250)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x118310A0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_A4DBB07F1ECFF71E_OFFSET UNITYSDK_OFFSET(0x1182FF10)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x1182E550)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_AE30D8621FD9E0AB_OFFSET UNITYSDK_OFFSET(0x11830A70)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_C37EE151D005EDA7_OFFSET UNITYSDK_OFFSET(0x118304C0)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x11830290)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_CA6F6BE86A71AD17_OFFSET UNITYSDK_OFFSET(0x1182E380)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_CF5EE32C3CB25356_OFFSET UNITYSDK_OFFSET(0x1182E100)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_D4684D4E31B8D8A0_OFFSET UNITYSDK_OFFSET(0x1182F050)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1182F970)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0x1182E870)
#define CLASS_2_7EB6B93CD50E2F99_METHOD_2_FEF062A2DC4257FF_OFFSET UNITYSDK_OFFSET(0x1182DE30)
#define CLASS_2_7EB6B93CD50E2F99__CTOR_OFFSET UNITYSDK_OFFSET(0x11831550)
#define CLASS_2_7EB6B93CD50E2F99__ONBIND_OFFSET UNITYSDK_OFFSET(0x1182D190)
#define CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x118316B0)
#define CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11831710)
#define CLASS_2_7EB6B93CD50E2F99___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x118315F0)
#define CLASS_2_7EB6B93CD50E2F99___ONBINDHANDLERS_B__35_1_OFFSET UNITYSDK_OFFSET(0x11831580)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99_TypeDefinitionIndex = 58435;

class Class_2_7EB6B93CD50E2F99 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::UInt32 Field_2_32 = 0x21; // 0x0
	// static const ::System::UInt32 Field_2_33 = 0x1; // 0x0
	// static const ::System::String* Field_2_36; // 0x0
	::UnityEngine::Transform* Field_2_24; // 0x60
	::UnityEngine::Transform* Field_2_12; // 0x68
	::UnityEngine::Transform* Field_2_6; // 0x70
	::UnityEngine::UI::Text* Field_2_15; // 0x78
	::UnityEngine::UI::Text* Field_2_14; // 0x80
	::RPG::Client::NodeListViewPanel_1<::Class_2_A12205C602394C2F*>* Field_2_26; // 0x88
	::RPG::Client::LocalizedText* Field_2_22; // 0x90
	::UnityEngine::Transform* Field_2_11; // 0x98
	::UnityEngine::UI::Image* Field_2_5; // 0xA0
	::UnityEngine::UI::Text* Field_2_13; // 0xA8
	::UnityEngine::UI::Text* Field_2_17; // 0xB0
	::UnityEngine::UI::Button* Field_2_0; // 0xB8
	::UnityEngine::UI::Image* Field_2_4; // 0xC0
	::UnityEngine::UI::Button* Field_2_25; // 0xC8
	::UnityEngine::Transform* Field_2_21; // 0xD0
	::UnityEngine::Animation* Field_2_27; // 0xD8
	::UnityEngine::Transform* Field_2_2; // 0xE0
	::UnityEngine::Transform* Field_2_9; // 0xE8
	::UnityEngine::Transform* Field_2_29; // 0xF0
	::Class_1_02D30900317D93FD* Field_2_30; // 0xF8
	::UnityEngine::Transform* Field_2_8; // 0x100
	::UnityEngine::UI::ScrollRect* Field_2_19; // 0x108
	::UnityEngine::Transform* Field_2_7; // 0x110
	::UnityEngine::Transform* Field_2_18; // 0x118
	::UnityEngine::Transform* Field_2_1; // 0x120
	::RPG::Client::NodeListViewPanel_1<::Class_2_37D655FAABC4D43A*>* Field_2_23; // 0x128
	::UnityEngine::Transform* Field_2_10; // 0x130
	::UnityEngine::Transform* Field_2_3; // 0x138
	::Class_2_4BD56C05450EB359* Field_2_20; // 0x140
	::UnityEngine::UI::Text* Field_2_16; // 0x148
	::UnityEngine::UI::Button* Field_2_28; // 0x150
	::RPG::GameCore::LevelUIComponent* Field_2_34; // 0x158
	::System::Boolean Field_2_35; // 0x160
	::System::Boolean Field_2_31; // 0x161

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

	::System::Void Method_2_7D21D8548943D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_7D21D8548943D577_OFFSET))(this);
	}

	::System::Void Method_2_7DF01EF28AED084D(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_7DF01EF28AED084D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF5EE32C3CB25356(::Class_0_16E4307DCC419505_827* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_827*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_CF5EE32C3CB25356_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6F6BE86A71AD17(::Class_0_16E4307DCC419505_827* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_827*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_CA6F6BE86A71AD17_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_F8D1399F1CCCBB77(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_F8D1399F1CCCBB77_OFFSET))(this, a1);
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

	::System::Void Method_2_D4684D4E31B8D8A0(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_D4684D4E31B8D8A0_OFFSET))(this, a1);
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

	::System::String* Method_2_9C1042B30380AA62(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_9C1042B30380AA62_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* Method_2_7DFA4D0453DAD789(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_7DFA4D0453DAD789_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* Method_2_213F1233DC2106C8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_213F1233DC2106C8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* Method_2_43EA95365AF8ADDE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_43EA95365AF8ADDE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AE30D8621FD9E0AB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_AE30D8621FD9E0AB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::LevelUIComponent* Method_2_137119B83AB96A00()
	{
		return ((::RPG::GameCore::LevelUIComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_137119B83AB96A00_OFFSET))(this);
	}

	::Class_1_02D30900317D93FD* Method_2_7AFA6337C157B435(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_7AFA6337C157B435_OFFSET))(this, a1);
	}

	::Class_1_02D30900317D93FD* Method_2_14F3D539C275A6D3(::System::Func_2<::Class_1_02D30900317D93FD*, ::System::Boolean>* a1)
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID, ::System::Func_2<::Class_1_02D30900317D93FD*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_14F3D539C275A6D3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* Method_2_3D38B90746E3FB3F(::System::Func_2<::Class_1_02D30900317D93FD*, ::System::Boolean>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>*(*)(::PVOID, ::System::Func_2<::Class_1_02D30900317D93FD*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_3D38B90746E3FB3F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* Method_2_C37EE151D005EDA7(::System::Collections::Generic::IEnumerable_1<::Class_1_02D30900317D93FD*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_02D30900317D93FD*>*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_C37EE151D005EDA7_OFFSET))(this, a1);
	}

	::Class_1_02D30900317D93FD* Method_2_03D483885D7ECD47()
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_03D483885D7ECD47_OFFSET))(this);
	}

	::System::Boolean Method_2_9F30F370AA7FFDB0(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_9F30F370AA7FFDB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__35_1(::System::Object* o)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___ONBINDHANDLERS_B__35_1_OFFSET))(this, o);
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

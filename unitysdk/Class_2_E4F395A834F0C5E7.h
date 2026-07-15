#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8FD88AEFE1E689CC;
class Class_2_0F19373B970769FA;
class Class_2_25EEB3E1B4EE5C49;
class Class_2_2B07AF5D18F465DC;
class Class_2_4798B05B1DD74BF3;
class Class_2_5DB0E2DA4A5EB1AA;
namespace RPG::GameCore { class AbilityBeingLimbo; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterReviveFromRevivable; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E4F395A834F0C5E7_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17A73120)
#define CLASS_2_E4F395A834F0C5E7_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17A73700)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_04EFE50A175DDDC2_OFFSET UNITYSDK_OFFSET(0x17A71D00)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x17A70450)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_0767CE059CCD42DA_OFFSET UNITYSDK_OFFSET(0x17A70640)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_1AD3069986C9EC47_OFFSET UNITYSDK_OFFSET(0x17A6FBA0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_1C9965AEF050F471_OFFSET UNITYSDK_OFFSET(0x17A708C0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_1F47CAD86E555F5A_OFFSET UNITYSDK_OFFSET(0x17A6EE00)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_1FBE67C108B5895B_OFFSET UNITYSDK_OFFSET(0x17A703A0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_24DE058D43CE26B3_OFFSET UNITYSDK_OFFSET(0x17A71DE0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17A6F360)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_2B5349F257BE292A_1_OFFSET UNITYSDK_OFFSET(0x17A71AE0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_2B5349F257BE292A_OFFSET UNITYSDK_OFFSET(0x17A712E0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_2D69DEA94F4D6D5B_OFFSET UNITYSDK_OFFSET(0x17A701E0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_3ED777C3FDC6F21F_OFFSET UNITYSDK_OFFSET(0x17A71180)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x17A70280)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_45DAAAB95B685671_OFFSET UNITYSDK_OFFSET(0x17A71980)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0x17A70DD0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_4B5DFB9ABEB1BD88_OFFSET UNITYSDK_OFFSET(0x17A6FA00)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x17A6E810)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x17A71FA0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_5ECF98B85414E700_OFFSET UNITYSDK_OFFSET(0x17A71B80)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_657B3A247C551E8D_OFFSET UNITYSDK_OFFSET(0x17A72070)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0x17A70A30)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_6AEE51845DFA6D71_OFFSET UNITYSDK_OFFSET(0x17A70D80)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x17A72000)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_845FB0A263BF2C18_OFFSET UNITYSDK_OFFSET(0x17A71380)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_861F915F210620FC_OFFSET UNITYSDK_OFFSET(0x17A6F580)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_1_OFFSET UNITYSDK_OFFSET(0x17A710E0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_2_OFFSET UNITYSDK_OFFSET(0x17A71130)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_OFFSET UNITYSDK_OFFSET(0x17A71090)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x17A6E740)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x17A71F50)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17A705A0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x17A6F3C0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x17A6FF30)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x17A72AF0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x17A72940)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_C72B925A491E9859_OFFSET UNITYSDK_OFFSET(0x17A6F8C0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_CF0D4B58606967D2_OFFSET UNITYSDK_OFFSET(0x17A71EF0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_CF86D3C680F922E7_OFFSET UNITYSDK_OFFSET(0x17A70810)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_D23B6B01A6C528A1_OFFSET UNITYSDK_OFFSET(0x17A71830)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_D5C07CA59BC5F063_OFFSET UNITYSDK_OFFSET(0x17A707B0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x17A6E560)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_E2A8ED7D0EB25DEC_OFFSET UNITYSDK_OFFSET(0x17A70090)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x17A6EC90)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x17A6F7C0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_10_OFFSET UNITYSDK_OFFSET(0x17A72E20)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_11_OFFSET UNITYSDK_OFFSET(0x17A72EE0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_12_OFFSET UNITYSDK_OFFSET(0x17A72FA0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_13_OFFSET UNITYSDK_OFFSET(0x17A73060)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x17A72530)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x17A725F0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x17A726B0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x17A72770)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x17A72830)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x17A72A30)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_7_OFFSET UNITYSDK_OFFSET(0x17A72BE0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_8_OFFSET UNITYSDK_OFFSET(0x17A72CA0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_9_OFFSET UNITYSDK_OFFSET(0x17A72D60)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17A72470)
#define CLASS_2_E4F395A834F0C5E7_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x17A6E7A0)
#define CLASS_2_E4F395A834F0C5E7_ONRETURN_OFFSET UNITYSDK_OFFSET(0x17A6EDB0)
#define CLASS_2_E4F395A834F0C5E7__CTOR_OFFSET UNITYSDK_OFFSET(0x17A73CA0)
#define CLASS_2_E4F395A834F0C5E7__ONBIND_OFFSET UNITYSDK_OFFSET(0x17A6F010)
#define CLASS_2_E4F395A834F0C5E7__ONTICK_OFFSET UNITYSDK_OFFSET(0x17A72120)

inline static constexpr unsigned int Class_2_E4F395A834F0C5E7_TypeDefinitionIndex = 68261;

class Class_2_E4F395A834F0C5E7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::GameEntity* Field_2_2; // 0x60
	::Class_2_4798B05B1DD74BF3* Field_2_3; // 0x68
	::UnityEngine::Transform* Field_2_4; // 0x70
	::Class_2_0F19373B970769FA* Field_2_5; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_2B07AF5D18F465DC*>* Field_2_6; // 0x80
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_7; // 0x88
	::UnityEngine::Transform* Field_2_8; // 0x90
	::UnityEngine::UI::Text* Field_2_9; // 0x98
	::UnityEngine::UI::Text* Field_2_10; // 0xA0
	::Class_2_5DB0E2DA4A5EB1AA* Field_2_11; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_12; // 0xB0
	::UnityEngine::Animation* Field_2_13; // 0xB8
	::UnityEngine::UI::Text* Field_2_14; // 0xC0
	::Class_2_25EEB3E1B4EE5C49* Field_2_15; // 0xC8
	::System::Single Field_2_16; // 0xD0
	::System::Single Field_2_17; // 0xD4
	::UnityEngine::Color Field_2_18; // 0xD8
	::UnityEngine::Color Field_2_19; // 0xE8
	::RPG::GameCore::FixPoint Field_2_20; // 0xF8
	::UnityEngine::Color Field_2_21; // 0x100
	::System::Single Field_2_22; // 0x110
	::System::Single Field_2_23; // 0x114
	::UnityEngine::Color Field_2_24; // 0x118
	::UnityEngine::Color Field_2_25; // 0x128
	::RPG::GameCore::FixPoint Field_2_26; // 0x138
	::System::Boolean Field_2_27; // 0x140
	::System::Boolean Field_2_28; // 0x141
	::System::Boolean Field_2_29; // 0x142
	::UnityEngine::Color Field_2_30; // 0x144

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_ONRETURN_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_2_861F915F210620FC(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_861F915F210620FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B5DFB9ABEB1BD88(::RPG::GameCore::AbilityRallyHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityRallyHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_4B5DFB9ABEB1BD88_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AD3069986C9EC47(::RPG::GameCore::AbilityMaxHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_1AD3069986C9EC47_OFFSET))(this, a1);
	}

	::System::Void Method_2_1FBE67C108B5895B(::RPG::GameCore::AbilityDirtyHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityDirtyHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_1FBE67C108B5895B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_0767CE059CCD42DA(::RPG::GameCore::EntityRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_0767CE059CCD42DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF86D3C680F922E7(::RPG::GameCore::LevelCharacterReviveFromRevivable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterReviveFromRevivable*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_CF86D3C680F922E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C9965AEF050F471(::RPG::GameCore::AbilityBeingLimbo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityBeingLimbo*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_1C9965AEF050F471_OFFSET))(this, a1);
	}

	::System::Void Method_2_676E4EF2BBA9B1C2(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_676E4EF2BBA9B1C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_878A273A20E73D43()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_OFFSET))(this);
	}

	::System::Void Method_2_878A273A20E73D43_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_1_OFFSET))(this);
	}

	::System::Void Method_2_878A273A20E73D43_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_2_OFFSET))(this);
	}

	::System::Void Method_2_3ED777C3FDC6F21F(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_3ED777C3FDC6F21F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D23B6B01A6C528A1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_D23B6B01A6C528A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_45DAAAB95B685671(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_45DAAAB95B685671_OFFSET))(this, a1);
	}

	::System::Void Method_2_04EFE50A175DDDC2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_04EFE50A175DDDC2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_845FB0A263BF2C18(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_845FB0A263BF2C18_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F47CAD86E555F5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_1F47CAD86E555F5A_OFFSET))(this);
	}

	::System::Void Method_2_5ECF98B85414E700(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_5ECF98B85414E700_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_24DE058D43CE26B3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_24DE058D43CE26B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B5349F257BE292A(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_2B5349F257BE292A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B5349F257BE292A_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_2B5349F257BE292A_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CF0D4B58606967D2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_CF0D4B58606967D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_46E030E6F5465A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_46E030E6F5465A66_OFFSET))(this);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_2D69DEA94F4D6D5B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_2D69DEA94F4D6D5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}

	::System::Boolean Method_2_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_2_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E2A8ED7D0EB25DEC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_E2A8ED7D0EB25DEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_C72B925A491E9859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_C72B925A491E9859_OFFSET))(this);
	}

	::System::Void Method_2_657B3A247C551E8D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_657B3A247C551E8D_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_D5C07CA59BC5F063(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_D5C07CA59BC5F063_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7__ONTICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_6AEE51845DFA6D71()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_6AEE51845DFA6D71_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_10(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_10_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_11(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_11_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_12(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_12_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_13(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_13_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

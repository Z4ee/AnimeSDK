#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_8FD88AEFE1E689CC;
class Class_2_0F19373B970769FA;
class Class_2_9C972AC88E9A3A3E_Class_1_66BD53981B36E251;
class Class_2_9C972AC88E9A3A3E_Class_1_A956623F6B00A1D9;
class Class_2_B71FA21BC121C2FA;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_9C972AC88E9A3A3E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15F505C0)
#define CLASS_2_9C972AC88E9A3A3E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15F50820)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x173F9F00)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_0E8E1D9BB2F4AED1_OFFSET UNITYSDK_OFFSET(0x15F4E630)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_163F1B0F956098E9_OFFSET UNITYSDK_OFFSET(0x15F4EC30)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15F4DC50)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x173F9B30)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_25A8155BC65C7723_OFFSET UNITYSDK_OFFSET(0x15F4F330)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x173F97F0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x173F9F50)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x173F9680)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x173F9380)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x15F4DCD0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x173F9A70)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x15F4DD50)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x173F95A0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x15F4DC00)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_58B838BFF50F6A4F_OFFSET UNITYSDK_OFFSET(0x15F4FA70)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_5B2CAD1A0582F9BB_OFFSET UNITYSDK_OFFSET(0x15F4E240)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x173F9E00)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_697CEBDDAD44641A_OFFSET UNITYSDK_OFFSET(0x15F4ECA0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_6AEE51845DFA6D71_OFFSET UNITYSDK_OFFSET(0x173F9400)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x173F9450)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x173F9330)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x173F9EA0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_AD52E5051C13C465_OFFSET UNITYSDK_OFFSET(0x173F9540)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0x15F4E7E0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x15F4E480)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x173F94A0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x15F501A0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_C450A961450309C9_2_OFFSET UNITYSDK_OFFSET(0x15F504D0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15F50080)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_C7A57161349A7590_OFFSET UNITYSDK_OFFSET(0x15F4E730)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_D2087648EDBA67E2_OFFSET UNITYSDK_OFFSET(0x173F9D10)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_D437D090E63BE8A7_1_OFFSET UNITYSDK_OFFSET(0x15F4E090)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x15F4E190)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x15F4F9D0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_DDF8C42FD64982D9_OFFSET UNITYSDK_OFFSET(0x15F4FDF0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x173F9C90)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x15F50290)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x15F50350)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x15F50410)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15F4FFC0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_F5EE5DF9DB6DF16B_1_OFFSET UNITYSDK_OFFSET(0x15F4F930)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_F5EE5DF9DB6DF16B_2_OFFSET UNITYSDK_OFFSET(0x15F4F980)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_F5EE5DF9DB6DF16B_OFFSET UNITYSDK_OFFSET(0x15F4F8E0)
#define CLASS_2_9C972AC88E9A3A3E_METHOD_2_F70E46693DF2E6A3_OFFSET UNITYSDK_OFFSET(0x15F4FE90)
#define CLASS_2_9C972AC88E9A3A3E__CTOR_OFFSET UNITYSDK_OFFSET(0x15F50A50)
#define CLASS_2_9C972AC88E9A3A3E__ONBIND_OFFSET UNITYSDK_OFFSET(0x173F9020)
#define CLASS_2_9C972AC88E9A3A3E__ONTICK_OFFSET UNITYSDK_OFFSET(0x173F9600)

inline static constexpr unsigned int Class_2_9C972AC88E9A3A3E_TypeDefinitionIndex = 68647;

class Class_2_9C972AC88E9A3A3E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::UInt32 Field_2_2 = 0x2C8F; // 0x0
	::UnityEngine::Transform* Field_2_3; // 0x60
	::UnityEngine::UI::Text* Field_2_4; // 0x68
	::RPG::GameCore::GameEntity* Field_2_5; // 0x70
	::Class_2_0F19373B970769FA* Field_2_6; // 0x78
	::Class_2_B71FA21BC121C2FA* Field_2_7; // 0x80
	::Class_2_0F19373B970769FA* Field_2_8; // 0x88
	::UnityEngine::UI::Text* Field_2_9; // 0x90
	::UnityEngine::Animation* Field_2_10; // 0x98
	::UnityEngine::UI::SmoothMask* Field_2_11; // 0xA0
	::UnityEngine::Animator* Field_2_12; // 0xA8
	::UnityEngine::Animation* Field_2_13; // 0xB0
	::Struct_2_96F8F0A04B900A9E Field_2_14; // 0xB8
	::UnityEngine::Animation* Field_2_15; // 0xC0
	::UnityEngine::Animation* Field_2_16; // 0xC8
	::UnityEngine::RectTransform* Field_2_17; // 0xD0
	::UnityEngine::Transform* Field_2_18; // 0xD8
	::UnityEngine::Animation* Field_2_19; // 0xE0
	::Il2CppArray<::System::Int32>* Field_2_20; // 0xE8
	::System::Single Field_2_21; // 0xF0
	::RPG::GameCore::BoolEx Field_2_22; // 0xF4
	::RPG::GameCore::FixPoint Field_2_23; // 0xF8
	::System::Single Field_2_24; // 0x100
	::RPG::GameCore::TurnState Field_2_25; // 0x104
	::RPG::GameCore::FixPoint Field_2_26; // 0x108
	::System::Single Field_2_27; // 0x110
	::System::Int32 Field_2_28; // 0x114
	::System::Single Field_2_29; // 0x118
	::System::Int32 Field_2_30; // 0x11C
	::System::Int32 Field_2_31; // 0x120
	::System::Single Field_2_32; // 0x124
	::System::Boolean Field_2_33; // 0x128
	::System::Boolean Field_2_34; // 0x129
	::System::Boolean Field_2_35; // 0x12A
	::System::Single Field_2_36; // 0x12C
	::System::Single Field_2_37; // 0x130
	::System::Int32 Field_2_38; // 0x134

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E__ONBIND_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_6AEE51845DFA6D71()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_6AEE51845DFA6D71_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_BF9C25E762BD53B3_OFFSET))(this);
	}

	::System::Void Method_2_AD52E5051C13C465(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_AD52E5051C13C465_OFFSET))(this, a1);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2087648EDBA67E2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_D2087648EDBA67E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void Method_2_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B2CAD1A0582F9BB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_5B2CAD1A0582F9BB_OFFSET))(this, a1);
	}

	::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Single Method_2_D437D090E63BE8A7_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_D437D090E63BE8A7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_0E8E1D9BB2F4AED1(::RPG::GameCore::BoolEx a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_0E8E1D9BB2F4AED1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7A57161349A7590(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_C7A57161349A7590_OFFSET))(this, a1);
	}

	::System::Void Method_2_163F1B0F956098E9(::Class_2_9C972AC88E9A3A3E_Class_1_A956623F6B00A1D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C972AC88E9A3A3E_Class_1_A956623F6B00A1D9*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_163F1B0F956098E9_OFFSET))(this, a1);
	}

	::System::Void Method_2_697CEBDDAD44641A(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_697CEBDDAD44641A_OFFSET))(this, a1);
	}

	::System::Void Method_2_25A8155BC65C7723(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_25A8155BC65C7723_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BADDA70ED68283AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_BADDA70ED68283AE_OFFSET))(this);
	}

	::System::Void Method_2_F5EE5DF9DB6DF16B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_F5EE5DF9DB6DF16B_OFFSET))(this);
	}

	::System::Void Method_2_F5EE5DF9DB6DF16B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_F5EE5DF9DB6DF16B_1_OFFSET))(this);
	}

	::System::Void Method_2_F5EE5DF9DB6DF16B_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_F5EE5DF9DB6DF16B_2_OFFSET))(this);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_58B838BFF50F6A4F(::Class_2_9C972AC88E9A3A3E_Class_1_66BD53981B36E251* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C972AC88E9A3A3E_Class_1_66BD53981B36E251*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_58B838BFF50F6A4F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F70E46693DF2E6A3(::UnityEngine::Animation* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_F70E46693DF2E6A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_2_DDF8C42FD64982D9(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_DDF8C42FD64982D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_METHOD_2_C450A961450309C9_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_D650D0F10A391A4C_ButtonState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"

class Class_1_05BD9C87E93CA0F8;
class Class_1_274386B6ECA5E606;
class Class_2_1A0F91E4CE01E769;
class Class_2_2BFABA9860D1A08B;
class Class_2_40491F513F4A6F01;
class Class_2_D650D0F10A391A4C;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_CD958893D2F7EAE2_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA452DC0)
#define CLASS_2_CD958893D2F7EAE2_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA452FD0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xA44F670)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_134017AC3A2C19AD_OFFSET UNITYSDK_OFFSET(0xA451D20)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA44EFC0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0xA451870)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xA44F2C0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_2AED1A1868B40387_OFFSET UNITYSDK_OFFSET(0xA44F800)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_2E07D057E72DE76A_OFFSET UNITYSDK_OFFSET(0xA451650)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_3A1D2B4F74743724_OFFSET UNITYSDK_OFFSET(0xA452670)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_3AF1A3002090D320_OFFSET UNITYSDK_OFFSET(0xA44FAB0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_40E64ED64652D825_OFFSET UNITYSDK_OFFSET(0xA452900)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA44F2D0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xA451120)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0xA450070)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA4532B0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA453370)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA453250)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_676CD2ECA00B10AF_OFFSET UNITYSDK_OFFSET(0xA450B10)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xA452610)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA4525B0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_9D6C586EC30ADBDA_OFFSET UNITYSDK_OFFSET(0xA4524C0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xA451A60)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xA451410)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xA452B40)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xA452BE0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0xA452C80)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0xA452D20)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA452AA0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0xA44F180)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA4519B0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0xA44F760)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_C9F59B9D8CCA4DFF_OFFSET UNITYSDK_OFFSET(0xA450CB0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA44F400)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_D3E970D78BB8886D_OFFSET UNITYSDK_OFFSET(0xA4511F0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0xA44F090)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_E5D1955A389D1F9C_OFFSET UNITYSDK_OFFSET(0xA4527E0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_EEEA24B88E52471C_OFFSET UNITYSDK_OFFSET(0xA44FDD0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0xA44F4A0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F25D2DE7181D2805_1_OFFSET UNITYSDK_OFFSET(0xA452440)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0xA451CA0)
#define CLASS_2_CD958893D2F7EAE2_METHOD_2_FD45AB35B857FF73_OFFSET UNITYSDK_OFFSET(0xA452030)
#define CLASS_2_CD958893D2F7EAE2__CTOR_OFFSET UNITYSDK_OFFSET(0xA4531B0)
#define CLASS_2_CD958893D2F7EAE2__ONBIND_OFFSET UNITYSDK_OFFSET(0xA44ECE0)
#define CLASS_2_CD958893D2F7EAE2__ONTICK_OFFSET UNITYSDK_OFFSET(0xA44F440)
#define CLASS_2_CD958893D2F7EAE2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4533D0)
#define CLASS_2_CD958893D2F7EAE2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA453430)
#define CLASS_2_CD958893D2F7EAE2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA4531F0)
#define CLASS_2_CD958893D2F7EAE2___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA453310)

inline static constexpr unsigned int Class_2_CD958893D2F7EAE2_TypeDefinitionIndex = 67554;

class Class_2_CD958893D2F7EAE2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x2; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::UnityEngine::Animation* Field_2_5; // 0x60
	::RPG::Client::PrefabLoadMeta* Field_2_6; // 0x68
	::Class_2_D650D0F10A391A4C* Field_2_7; // 0x70
	::UnityEngine::ParticleSystem* Field_2_8; // 0x78
	::UnityEngine::ParticleSystem* Field_2_9; // 0x80
	::Class_2_2BFABA9860D1A08B* Field_2_10; // 0x88
	::UnityEngine::Transform* Field_2_11; // 0x90
	::RPG::GameCore::BattleInstance* Field_2_12; // 0x98
	::UnityEngine::Transform* Field_2_13; // 0xA0
	::UnityEngine::UI::Image* Field_2_14; // 0xA8
	::RPG::GameCore::SkillData* Field_2_15; // 0xB0
	::UnityEngine::UI::Text* Field_2_16; // 0xB8
	::UnityEngine::Transform* Field_2_17; // 0xC0
	::RPG::GameCore::CharacterDataComponent* Field_2_18; // 0xC8
	::RPG::Client::LongPressEvent* Field_2_19; // 0xD0
	::RPG::GameCore::GameEntity* Field_2_20; // 0xD8
	::Class_2_1A0F91E4CE01E769* Field_2_21; // 0xE0
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_22; // 0xE8
	::UnityEngine::Transform* Field_2_23; // 0xF0
	::UnityEngine::UI::Text* Field_2_24; // 0xF8
	::UnityEngine::Animation* Field_2_25; // 0x100
	::Class_1_274386B6ECA5E606* Field_2_26; // 0x108
	::UnityEngine::Transform* Field_2_27; // 0x110
	::RPG::GameCore::SkillData* Field_2_28; // 0x118
	::UnityEngine::Transform* Field_2_29; // 0x120
	::UnityEngine::UI::Image* Field_2_30; // 0x128
	::RPG::GameCore::SkillCharacterComponent* Field_2_31; // 0x130
	::Class_2_40491F513F4A6F01* Field_2_32; // 0x138
	::RPG::Client::SPProgress* Field_2_33; // 0x140
	::System::UInt32 Field_2_34; // 0x148
	::System::UInt32 Field_2_35; // 0x14C
	::RPG::GameCore::SkillSPProgressType Field_2_36; // 0x150
	::RPG::GameCore::FixPoint Field_2_37; // 0x158

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_24748FC20F375725()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_B37C805F1A4DBCFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_B37C805F1A4DBCFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AED1A1868B40387(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_2AED1A1868B40387_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EEEA24B88E52471C(::Class_1_05BD9C87E93CA0F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05BD9C87E93CA0F8*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_EEEA24B88E52471C_OFFSET))(this, a1);
	}

	::System::Void Method_2_676CD2ECA00B10AF(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_676CD2ECA00B10AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3E970D78BB8886D(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_D3E970D78BB8886D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E07D057E72DE76A(::RPG::GameCore::AbilityMaxSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_2E07D057E72DE76A_OFFSET))(this, a1);
	}

	::System::Void Method_2_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3AF1A3002090D320(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_3AF1A3002090D320_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_2_134017AC3A2C19AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_134017AC3A2C19AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_FD45AB35B857FF73(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_FD45AB35B857FF73_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F25D2DE7181D2805_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_9D6C586EC30ADBDA()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_9D6C586EC30ADBDA_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Boolean Method_2_3A1D2B4F74743724(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_3A1D2B4F74743724_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_E5D1955A389D1F9C(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_E5D1955A389D1F9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C9F59B9D8CCA4DFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_C9F59B9D8CCA4DFF_OFFSET))(this);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_2_40E64ED64652D825(::Class_2_D650D0F10A391A4C_ButtonState a1, ::Class_2_D650D0F10A391A4C_ButtonState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D650D0F10A391A4C_ButtonState, ::Class_2_D650D0F10A391A4C_ButtonState))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_40E64ED64652D825_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD958893D2F7EAE2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

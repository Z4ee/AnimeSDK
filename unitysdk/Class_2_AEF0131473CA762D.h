#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_D650D0F10A391A4C_ButtonState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"

class Class_1_274386B6ECA5E606;
class Class_2_1A0F91E4CE01E769;
class Class_2_2BFABA9860D1A08B;
class Class_2_40491F513F4A6F01;
class Class_2_D650D0F10A391A4C;
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

#define CLASS_2_AEF0131473CA762D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1385A1C0)
#define CLASS_2_AEF0131473CA762D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1385A360)
#define CLASS_2_AEF0131473CA762D_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x13856F60)
#define CLASS_2_AEF0131473CA762D_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x13856300)
#define CLASS_2_AEF0131473CA762D_METHOD_2_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0x13857C80)
#define CLASS_2_AEF0131473CA762D_METHOD_2_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x13859100)
#define CLASS_2_AEF0131473CA762D_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x13856600)
#define CLASS_2_AEF0131473CA762D_METHOD_2_2E07D057E72DE76A_OFFSET UNITYSDK_OFFSET(0x13857A60)
#define CLASS_2_AEF0131473CA762D_METHOD_2_3A1D2B4F74743724_OFFSET UNITYSDK_OFFSET(0x13859A30)
#define CLASS_2_AEF0131473CA762D_METHOD_2_40F611DC88170B85_OFFSET UNITYSDK_OFFSET(0x13859CC0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x13856610)
#define CLASS_2_AEF0131473CA762D_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x13857E70)
#define CLASS_2_AEF0131473CA762D_METHOD_2_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x13858E80)
#define CLASS_2_AEF0131473CA762D_METHOD_2_50CCDD1FE0CC143C_OFFSET UNITYSDK_OFFSET(0x138595A0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1385A5D0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x1385A690)
#define CLASS_2_AEF0131473CA762D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1385A570)
#define CLASS_2_AEF0131473CA762D_METHOD_2_59E2538CF2D1A0AC_OFFSET UNITYSDK_OFFSET(0x13858C10)
#define CLASS_2_AEF0131473CA762D_METHOD_2_676CD2ECA00B10AF_OFFSET UNITYSDK_OFFSET(0x13856DC0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_6D1E3DAE95724F8C_OFFSET UNITYSDK_OFFSET(0x13856950)
#define CLASS_2_AEF0131473CA762D_METHOD_2_74C7A1CF0262D7CE_OFFSET UNITYSDK_OFFSET(0x13859170)
#define CLASS_2_AEF0131473CA762D_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x138567E0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x138574E0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_814B2B0F621DA493_1_OFFSET UNITYSDK_OFFSET(0x13859960)
#define CLASS_2_AEF0131473CA762D_METHOD_2_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x13859890)
#define CLASS_2_AEF0131473CA762D_METHOD_2_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0x13858050)
#define CLASS_2_AEF0131473CA762D_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x13857790)
#define CLASS_2_AEF0131473CA762D_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x13859FE0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x1385A080)
#define CLASS_2_AEF0131473CA762D_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x1385A120)
#define CLASS_2_AEF0131473CA762D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x13859F40)
#define CLASS_2_AEF0131473CA762D_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x138564C0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13857DC0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x138568B0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13856740)
#define CLASS_2_AEF0131473CA762D_METHOD_2_D3E970D78BB8886D_OFFSET UNITYSDK_OFFSET(0x13857570)
#define CLASS_2_AEF0131473CA762D_METHOD_2_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x138563D0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_E55E4AD995D596D8_OFFSET UNITYSDK_OFFSET(0x13858F90)
#define CLASS_2_AEF0131473CA762D_METHOD_2_E5D1955A389D1F9C_OFFSET UNITYSDK_OFFSET(0x13859BA0)
#define CLASS_2_AEF0131473CA762D_METHOD_2_F25D2DE7181D2805_1_OFFSET UNITYSDK_OFFSET(0x13859810)
#define CLASS_2_AEF0131473CA762D_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0x13858B90)
#define CLASS_2_AEF0131473CA762D_METHOD_2_F4290E501C05C6D4_OFFSET UNITYSDK_OFFSET(0x13856A90)
#define CLASS_2_AEF0131473CA762D__CTOR_OFFSET UNITYSDK_OFFSET(0x1385A4D0)
#define CLASS_2_AEF0131473CA762D__ONBIND_OFFSET UNITYSDK_OFFSET(0x13856030)
#define CLASS_2_AEF0131473CA762D__ONTICK_OFFSET UNITYSDK_OFFSET(0x13856780)
#define CLASS_2_AEF0131473CA762D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1385A6F0)
#define CLASS_2_AEF0131473CA762D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1385A750)
#define CLASS_2_AEF0131473CA762D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1385A510)
#define CLASS_2_AEF0131473CA762D___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x1385A630)

inline static constexpr unsigned int Class_2_AEF0131473CA762D_TypeDefinitionIndex = 66960;

class Class_2_AEF0131473CA762D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x2; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::UnityEngine::Transform* Field_2_5; // 0x60
	::Class_2_D650D0F10A391A4C* Field_2_6; // 0x68
	::UnityEngine::ParticleSystem* Field_2_7; // 0x70
	::UnityEngine::UI::Text* Field_2_8; // 0x78
	::UnityEngine::ParticleSystem* Field_2_9; // 0x80
	::UnityEngine::Transform* Field_2_10; // 0x88
	::UnityEngine::UI::Image* Field_2_11; // 0x90
	::RPG::Client::PrefabLoadMeta* Field_2_12; // 0x98
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_13; // 0xA0
	::RPG::GameCore::GameEntity* Field_2_14; // 0xA8
	::UnityEngine::Animation* Field_2_15; // 0xB0
	::UnityEngine::Transform* Field_2_16; // 0xB8
	::UnityEngine::Animation* Field_2_17; // 0xC0
	::Class_2_2BFABA9860D1A08B* Field_2_18; // 0xC8
	::RPG::GameCore::SkillCharacterComponent* Field_2_19; // 0xD0
	::UnityEngine::Transform* Field_2_20; // 0xD8
	::RPG::GameCore::CharacterDataComponent* Field_2_21; // 0xE0
	::Class_2_1A0F91E4CE01E769* Field_2_22; // 0xE8
	::UnityEngine::Transform* Field_2_23; // 0xF0
	::RPG::Client::SPProgress* Field_2_24; // 0xF8
	::UnityEngine::UI::Text* Field_2_25; // 0x100
	::RPG::GameCore::SkillData* Field_2_26; // 0x108
	::Class_1_274386B6ECA5E606* Field_2_27; // 0x110
	::RPG::GameCore::BattleInstance* Field_2_28; // 0x118
	::Class_2_40491F513F4A6F01* Field_2_29; // 0x120
	::UnityEngine::UI::Image* Field_2_30; // 0x128
	::UnityEngine::Transform* Field_2_31; // 0x130
	::System::UInt32 Field_2_32; // 0x138
	::System::UInt32 Field_2_33; // 0x13C
	::RPG::GameCore::FixPoint Field_2_34; // 0x140
	::System::Boolean Field_2_35; // 0x148
	::RPG::GameCore::SkillSPProgressType Field_2_36; // 0x14C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_24748FC20F375725()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_B37C805F1A4DBCFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_B37C805F1A4DBCFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D1E3DAE95724F8C(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_6D1E3DAE95724F8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_676CD2ECA00B10AF(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_676CD2ECA00B10AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3E970D78BB8886D(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_D3E970D78BB8886D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E07D057E72DE76A(::RPG::GameCore::AbilityMaxSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_2E07D057E72DE76A_OFFSET))(this, a1);
	}

	::System::Void Method_2_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4290E501C05C6D4(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_F4290E501C05C6D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_2_59E2538CF2D1A0AC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_59E2538CF2D1A0AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Boolean Method_2_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_507A5122CD01412B_OFFSET))(this);
	}

	::System::Void Method_2_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::Void Method_2_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Boolean Method_2_50CCDD1FE0CC143C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_50CCDD1FE0CC143C_OFFSET))(this);
	}

	::System::Void Method_2_74C7A1CF0262D7CE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_74C7A1CF0262D7CE_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_F25D2DE7181D2805_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_E55E4AD995D596D8()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_E55E4AD995D596D8_OFFSET))(this);
	}

	::System::Int32 Method_2_814B2B0F621DA493()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_814B2B0F621DA493_OFFSET))(this);
	}

	::System::Int32 Method_2_814B2B0F621DA493_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_814B2B0F621DA493_1_OFFSET))(this);
	}

	::System::Boolean Method_2_3A1D2B4F74743724(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_3A1D2B4F74743724_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_E5D1955A389D1F9C(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_E5D1955A389D1F9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_40F611DC88170B85(::Class_2_D650D0F10A391A4C_ButtonState a1, ::Class_2_D650D0F10A391A4C_ButtonState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D650D0F10A391A4C_ButtonState, ::Class_2_D650D0F10A391A4C_ButtonState))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_40F611DC88170B85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEF0131473CA762D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

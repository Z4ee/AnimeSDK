#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_D650D0F10A391A4C_ButtonState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"

class Class_1_23621931BDBFAF77;
class Class_2_1A0F91E4CE01E769;
class Class_2_40491F513F4A6F01;
class Class_2_CBEE615EA05066BF;
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

#define CLASS_2_FAFCAF125BD3F336_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x129B0230)
#define CLASS_2_FAFCAF125BD3F336_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x129B0380)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x129AE0A0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x129AD120)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0x129AE660)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x129AF510)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x129AD420)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_3B4774276E3D469F_OFFSET UNITYSDK_OFFSET(0x129AFC10)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x129AE980)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x129AE2B0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_40F611DC88170B85_OFFSET UNITYSDK_OFFSET(0x129AFCB0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x129AD430)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x129AE840)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x129B05A0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x129B0670)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x129B0540)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_59E2538CF2D1A0AC_OFFSET UNITYSDK_OFFSET(0x129AF0D0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_676CD2ECA00B10AF_OFFSET UNITYSDK_OFFSET(0x129ADB60)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_6FAB972CB6DE2314_OFFSET UNITYSDK_OFFSET(0x129AE4E0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x129AD600)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x129AF350)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x129AFFF0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x129B00B0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x129B0170)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x129AFF30)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x129AD2E0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x129ADCF0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x129AE7A0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x129AD6B0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_BF59FE15D48422D3_OFFSET UNITYSDK_OFFSET(0x129AFB50)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_C17F8458C707ED64_OFFSET UNITYSDK_OFFSET(0x129AF580)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x129AD560)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_D0E6AF36E1722F65_OFFSET UNITYSDK_OFFSET(0x129AD890)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x129AF880)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x129AD1F0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_E0DD29C1867559DF_OFFSET UNITYSDK_OFFSET(0x129AD750)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_F026F9F94BAA5E1F_1_OFFSET UNITYSDK_OFFSET(0x129AFAE0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x129AFA70)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_F25D2DE7181D2805_1_OFFSET UNITYSDK_OFFSET(0x129AF9F0)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0x129AF050)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_F968DCE1B5106D1F_OFFSET UNITYSDK_OFFSET(0x129AF400)
#define CLASS_2_FAFCAF125BD3F336_METHOD_2_FB3259368AD56B95_OFFSET UNITYSDK_OFFSET(0x129AE130)
#define CLASS_2_FAFCAF125BD3F336__CTOR_OFFSET UNITYSDK_OFFSET(0x129B04A0)
#define CLASS_2_FAFCAF125BD3F336__ONBIND_OFFSET UNITYSDK_OFFSET(0x129ACE50)
#define CLASS_2_FAFCAF125BD3F336__ONTICK_OFFSET UNITYSDK_OFFSET(0x129AD5A0)
#define CLASS_2_FAFCAF125BD3F336___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x129B06D0)
#define CLASS_2_FAFCAF125BD3F336___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x129B0730)
#define CLASS_2_FAFCAF125BD3F336___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x129B04E0)
#define CLASS_2_FAFCAF125BD3F336___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x129B0600)

inline static constexpr unsigned int Class_2_FAFCAF125BD3F336_TypeDefinitionIndex = 66027;

class Class_2_FAFCAF125BD3F336 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_20; // 0x0
	// static const ::System::Int32 Field_2_32 = 0x2; // 0x0
	// static const ::System::String* Field_2_34; // 0x0
	// static const ::System::String* Field_2_35; // 0x0
	// static const ::System::String* Field_2_36; // 0x0
	::UnityEngine::Transform* Field_2_10; // 0x60
	::RPG::GameCore::GameEntity* Field_2_21; // 0x68
	::Class_2_D650D0F10A391A4C* Field_2_0; // 0x70
	::UnityEngine::ParticleSystem* Field_2_8; // 0x78
	::RPG::GameCore::SkillCharacterComponent* Field_2_29; // 0x80
	::Class_2_CBEE615EA05066BF* Field_2_33; // 0x88
	::RPG::GameCore::CharacterDataComponent* Field_2_27; // 0x90
	::RPG::GameCore::BattleInstance* Field_2_22; // 0x98
	::UnityEngine::UI::Text* Field_2_17; // 0xA0
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_28; // 0xA8
	::RPG::Client::SPProgress* Field_2_6; // 0xB0
	::UnityEngine::UI::Text* Field_2_18; // 0xB8
	::UnityEngine::Transform* Field_2_12; // 0xC0
	::UnityEngine::Transform* Field_2_1; // 0xC8
	::UnityEngine::UI::Image* Field_2_11; // 0xD0
	::Class_2_40491F513F4A6F01* Field_2_19; // 0xD8
	::UnityEngine::Animation* Field_2_16; // 0xE0
	::UnityEngine::Transform* Field_2_15; // 0xE8
	::Class_2_1A0F91E4CE01E769* Field_2_4; // 0xF0
	::Class_1_23621931BDBFAF77* Field_2_5; // 0xF8
	::UnityEngine::Transform* Field_2_13; // 0x100
	::RPG::Client::PrefabLoadMeta* Field_2_14; // 0x108
	::UnityEngine::Animation* Field_2_2; // 0x110
	::UnityEngine::UI::Image* Field_2_7; // 0x118
	::RPG::GameCore::SkillData* Field_2_23; // 0x120
	::UnityEngine::Transform* Field_2_3; // 0x128
	::UnityEngine::ParticleSystem* Field_2_9; // 0x130
	::System::UInt32 Field_2_31; // 0x138
	::System::UInt32 Field_2_30; // 0x13C
	::System::Boolean Field_2_24; // 0x140
	::RPG::GameCore::SkillSPProgressType Field_2_26; // 0x144
	::RPG::GameCore::FixPoint Field_2_25; // 0x148

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_24748FC20F375725()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_B37C805F1A4DBCFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_B37C805F1A4DBCFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0DD29C1867559DF(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_E0DD29C1867559DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_676CD2ECA00B10AF(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_676CD2ECA00B10AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB3259368AD56B95(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_FB3259368AD56B95_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FAB972CB6DE2314(::RPG::GameCore::AbilityMaxSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_6FAB972CB6DE2314_OFFSET))(this, a1);
	}

	::System::Void Method_2_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0E6AF36E1722F65(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_D0E6AF36E1722F65_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_59E2538CF2D1A0AC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_59E2538CF2D1A0AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Boolean Method_2_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_D58849E1895DD394_OFFSET))(this);
	}

	::System::Void Method_2_C17F8458C707ED64(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_C17F8458C707ED64_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_F25D2DE7181D2805_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F968DCE1B5106D1F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_F968DCE1B5106D1F_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_F026F9F94BAA5E1F_1_OFFSET))(this);
	}

	::System::Boolean Method_2_BF59FE15D48422D3(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_BF59FE15D48422D3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_3B4774276E3D469F(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_3B4774276E3D469F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_40F611DC88170B85(::Class_2_D650D0F10A391A4C_ButtonState a1, ::Class_2_D650D0F10A391A4C_ButtonState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D650D0F10A391A4C_ButtonState, ::Class_2_D650D0F10A391A4C_ButtonState))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_40F611DC88170B85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAFCAF125BD3F336___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

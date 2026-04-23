#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_8FD88AEFE1E689CC;
class Class_2_78EAF529ECE49C03;
class Class_2_F9C8A78DE56484C3;
namespace RPG::GameCore { class AbilityBeingLimbo; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilitySkillPropertyChange; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelTurnUltraSkillCancel; }
namespace RPG::GameCore { class LevelTurnUltraSkillExecutingBegin; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_D36C5AC24693DA07_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x96C1A90)
#define CLASS_2_D36C5AC24693DA07_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x96C1F80)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x96BF960)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x96BFD30)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_12FAD651285CBCA5_OFFSET UNITYSDK_OFFSET(0x96C0A30)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x96C07A0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x96C05F0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x96BFF30)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x96BF160)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_1EDDF6D2F22116E8_OFFSET UNITYSDK_OFFSET(0x96BEA50)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_1FCE1769FD44AD9B_OFFSET UNITYSDK_OFFSET(0x96C0110)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_2386C7BBF94ECF92_OFFSET UNITYSDK_OFFSET(0x96BF380)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x96BF580)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x96BF220)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x96C0F80)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x96BE830)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_37B9CAEB4EAE67B7_OFFSET UNITYSDK_OFFSET(0x96C0040)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x96BEC10)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_3FB764C41DAA28F0_OFFSET UNITYSDK_OFFSET(0x96BFBF0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x96C2730)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x96C26D0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_5A087A5D69501C87_OFFSET UNITYSDK_OFFSET(0x96C0540)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_6809545EE0D44167_OFFSET UNITYSDK_OFFSET(0x96C06B0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_6C282C312B6A0234_OFFSET UNITYSDK_OFFSET(0x96BF630)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x96C0E00)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x96C0BC0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x96C0940)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x96BEE80)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x96C11E0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x96C12A0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x96C1330)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0x96C13F0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_5_OFFSET UNITYSDK_OFFSET(0x96C14B0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_6_OFFSET UNITYSDK_OFFSET(0x96C1570)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_7_OFFSET UNITYSDK_OFFSET(0x96C1630)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_8_OFFSET UNITYSDK_OFFSET(0x96C16F0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x96C1110)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x96C08D0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x96C04C0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x96BEAD0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x96BE730)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_BE20866642E2D6E8_OFFSET UNITYSDK_OFFSET(0x96BF000)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x96C2660)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x96BED60)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_CEE2550285AA5985_1_OFFSET UNITYSDK_OFFSET(0x96C1990)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x96C1010)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x96BE780)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_DE430401EFA69276_OFFSET UNITYSDK_OFFSET(0x96C0460)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x96BF1D0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_EB1549E9C6E3B4E9_OFFSET UNITYSDK_OFFSET(0x96BEDC0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F25D2DE7181D2805_1_OFFSET UNITYSDK_OFFSET(0x96C09B0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0x96C03E0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x96C18A0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x96C17B0)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_F7F6577205F73BF4_OFFSET UNITYSDK_OFFSET(0x96C0860)
#define CLASS_2_D36C5AC24693DA07_METHOD_2_FB3259368AD56B95_OFFSET UNITYSDK_OFFSET(0x96BF7E0)
#define CLASS_2_D36C5AC24693DA07_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x96BEB70)
#define CLASS_2_D36C5AC24693DA07_ONRETURN_OFFSET UNITYSDK_OFFSET(0x96BECD0)
#define CLASS_2_D36C5AC24693DA07__CCTOR_OFFSET UNITYSDK_OFFSET(0x96C2460)
#define CLASS_2_D36C5AC24693DA07__CTOR_OFFSET UNITYSDK_OFFSET(0x96C2430)
#define CLASS_2_D36C5AC24693DA07__ONBIND_OFFSET UNITYSDK_OFFSET(0x96BE520)
#define CLASS_2_D36C5AC24693DA07__ONTICK_OFFSET UNITYSDK_OFFSET(0x96BEE10)
#define CLASS_2_D36C5AC24693DA07___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x96C2800)
#define CLASS_2_D36C5AC24693DA07___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x96C2860)
#define CLASS_2_D36C5AC24693DA07___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x96C2600)
#define CLASS_2_D36C5AC24693DA07___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x96C2790)

inline static constexpr unsigned int Class_2_D36C5AC24693DA07_TypeDefinitionIndex = 65797;

class Class_2_D36C5AC24693DA07 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AetherSpiritType, ::System::String*>** StaticGet_Field_2_17()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AetherSpiritType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D36C5AC24693DA07_TypeDefinitionIndex)->GetStaticField(0x67630);
	}
	// static const ::System::String* Field_2_18; // 0x0
	// static const ::System::String* Field_2_19; // 0x0
	// static const ::System::String* Field_2_20; // 0x0
	// static const ::System::String* Field_2_21; // 0x0
	// static const ::System::String* Field_2_22; // 0x0
	// static const ::System::String* Field_2_23; // 0x0
	// static const ::System::String* Field_2_24; // 0x0
	// static const ::System::String* Field_2_25; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	::UnityEngine::Animation* Field_2_0; // 0x60
	::UnityEngine::ParticleSystem* Field_2_7; // 0x68
	::UnityEngine::UI::Image* Field_2_3; // 0x70
	::RPG::GameCore::GameEntity* Field_2_9; // 0x78
	::UnityEngine::Transform* Field_2_2; // 0x80
	::UnityEngine::Transform* Field_2_4; // 0x88
	::RPG::GameCore::SkillCharacterComponent* Field_2_12; // 0x90
	::Class_2_78EAF529ECE49C03* Field_2_8; // 0x98
	::UnityEngine::Transform* Field_2_5; // 0xA0
	::UnityEngine::UI::Image* Field_2_1; // 0xA8
	::Class_2_F9C8A78DE56484C3* Field_2_6; // 0xB0
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_11; // 0xB8
	::RPG::GameCore::CharacterDataComponent* Field_2_10; // 0xC0
	::RPG::GameCore::FixPoint Field_2_13; // 0xC8
	::System::Boolean Field_2_15; // 0xD0
	::System::Boolean Field_2_14; // 0xD1
	::System::Boolean Field_2_16; // 0xD2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_1EDDF6D2F22116E8(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_1EDDF6D2F22116E8_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_EB1549E9C6E3B4E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_EB1549E9C6E3B4E9_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_BE20866642E2D6E8(::RPG::GameCore::AbilityBeingLimbo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityBeingLimbo*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_BE20866642E2D6E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_2386C7BBF94ECF92(::RPG::GameCore::LevelTurnUltraSkillExecutingBegin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillExecutingBegin*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_2386C7BBF94ECF92_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C282C312B6A0234(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_6C282C312B6A0234_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB3259368AD56B95(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_FB3259368AD56B95_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FB764C41DAA28F0(::RPG::GameCore::AbilitySkillPropertyChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilitySkillPropertyChange*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_3FB764C41DAA28F0_OFFSET))(this, a1);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_2_37B9CAEB4EAE67B7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_37B9CAEB4EAE67B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1FCE1769FD44AD9B(::RPG::GameCore::LevelTurnUltraSkillCancel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillCancel*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_1FCE1769FD44AD9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A087A5D69501C87(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_5A087A5D69501C87_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_2_F7F6577205F73BF4(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F7F6577205F73BF4_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_2_6809545EE0D44167()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_6809545EE0D44167_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F25D2DE7181D2805_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_12FAD651285CBCA5()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_12FAD651285CBCA5_OFFSET))(this);
	}

	::System::Boolean Method_2_DE430401EFA69276(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_DE430401EFA69276_OFFSET))(this, a1);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_2_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_B06F516E4459C742_OFFSET))(this);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_A27D06F9481FAFDB_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_CEE2550285AA5985_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D36C5AC24693DA07___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

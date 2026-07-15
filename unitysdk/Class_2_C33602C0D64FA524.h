#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"

class Class_1_503F91D5A9A9E6E5_1;
class Class_1_83665B095F1535B5_19;
class Class_2_01E36AFA5FDDCBCA;
class Class_2_38CD28B3D11A00DD;
class Class_2_6E096A5FCBA7A3BD;
class Class_2_A7947638CBFEF9CF;
class Class_2_B26B9A6AA507E78F;
class Class_2_BEBFA6F35799FF11;
class Class_2_D3061860904844A0;
class Class_2_E0065B933D71D9A9;
class Class_2_F9B8FAD13AB85B32_1;
class Class_3_AC01FCB2512C56A9;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class AbilityCurrentStanceChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterBreakStateChange; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SwitchBossHeadEffType; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_C33602C0D64FA524_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x164325C0)
#define CLASS_2_C33602C0D64FA524_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16432AD0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0x16431C60)
#define CLASS_2_C33602C0D64FA524_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x164311B0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_266E1F1B4DF2F723_OFFSET UNITYSDK_OFFSET(0x1642FA50)
#define CLASS_2_C33602C0D64FA524_METHOD_2_33ABFC364E341C89_OFFSET UNITYSDK_OFFSET(0x16430D90)
#define CLASS_2_C33602C0D64FA524_METHOD_2_3B7F6352EF818AEA_OFFSET UNITYSDK_OFFSET(0x164302E0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1642FBA0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1642FFF0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x164307E0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x16431760)
#define CLASS_2_C33602C0D64FA524_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1642FD20)
#define CLASS_2_C33602C0D64FA524_METHOD_2_6E3EE215C182DE98_OFFSET UNITYSDK_OFFSET(0x1642F950)
#define CLASS_2_C33602C0D64FA524_METHOD_2_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x16430C70)
#define CLASS_2_C33602C0D64FA524_METHOD_2_8A3D91A38AD395C0_OFFSET UNITYSDK_OFFSET(0x164301C0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16430F90)
#define CLASS_2_C33602C0D64FA524_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0x16431000)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27B39323ED04C8E_OFFSET UNITYSDK_OFFSET(0x16431800)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A6B0F2C779192279_OFFSET UNITYSDK_OFFSET(0x16430080)
#define CLASS_2_C33602C0D64FA524_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x16430D00)
#define CLASS_2_C33602C0D64FA524_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16430490)
#define CLASS_2_C33602C0D64FA524_METHOD_2_B888BDD107E26FEC_OFFSET UNITYSDK_OFFSET(0x164306E0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x164324C0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x16431500)
#define CLASS_2_C33602C0D64FA524_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x16430520)
#define CLASS_2_C33602C0D64FA524_METHOD_2_D53F77FB0786250F_OFFSET UNITYSDK_OFFSET(0x16430E20)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x16431D00)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0x16431D50)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x16431CB0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_EF249BECB59278D9_OFFSET UNITYSDK_OFFSET(0x164305D0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x16431E60)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x16431F20)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x16431FE0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x164320A0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x16432160)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x164321F0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_7_OFFSET UNITYSDK_OFFSET(0x16432280)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_8_OFFSET UNITYSDK_OFFSET(0x16432340)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_9_OFFSET UNITYSDK_OFFSET(0x16432400)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16431DA0)
#define CLASS_2_C33602C0D64FA524_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1642F8F0)
#define CLASS_2_C33602C0D64FA524_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1642FB40)
#define CLASS_2_C33602C0D64FA524__CTOR_OFFSET UNITYSDK_OFFSET(0x16432FB0)
#define CLASS_2_C33602C0D64FA524__ONBIND_OFFSET UNITYSDK_OFFSET(0x1642EFB0)
#define CLASS_2_C33602C0D64FA524__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1642FE50)
#define CLASS_2_C33602C0D64FA524__ONTICK_OFFSET UNITYSDK_OFFSET(0x1642FEB0)

inline static constexpr unsigned int Class_2_C33602C0D64FA524_TypeDefinitionIndex = 68834;

class Class_2_C33602C0D64FA524 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::Class_3_AC01FCB2512C56A9* Field_2_8; // 0x60
	::RPG::Client::PrefabLoadMeta* Field_2_9; // 0x68
	::RPG::GameCore::CharacterDataComponent* Field_2_10; // 0x70
	::Class_2_D3061860904844A0* Field_2_11; // 0x78
	::UnityEngine::GameObject* Field_2_12; // 0x80
	::UnityEngine::UI::Image* Field_2_13; // 0x88
	::RPG::Client::MonoInControlTip* Field_2_14; // 0x90
	::Class_2_6E096A5FCBA7A3BD* Field_2_15; // 0x98
	::Class_2_38CD28B3D11A00DD* Field_2_16; // 0xA0
	::UnityEngine::Animation* Field_2_17; // 0xA8
	::Class_2_F9B8FAD13AB85B32_1* Field_2_18; // 0xB0
	::RPG::GameCore::BattleInstance* Field_2_19; // 0xB8
	::UnityEngine::Transform* Field_2_20; // 0xC0
	::UnityEngine::Animation* Field_2_21; // 0xC8
	::Class_2_01E36AFA5FDDCBCA* Field_2_22; // 0xD0
	::Class_2_E0065B933D71D9A9* Field_2_23; // 0xD8
	::Class_2_B26B9A6AA507E78F* Field_2_24; // 0xE0
	::UnityEngine::Animation* Field_2_25; // 0xE8
	::RPG::GameCore::GameEntity* Field_2_26; // 0xF0
	::UnityEngine::Transform* Field_2_27; // 0xF8
	::UnityEngine::Transform* Field_2_28; // 0x100
	::UnityEngine::Transform* Field_2_29; // 0x108
	::UnityEngine::Transform* Field_2_30; // 0x110
	::Class_2_A7947638CBFEF9CF* Field_2_31; // 0x118
	::Class_2_BEBFA6F35799FF11* Field_2_32; // 0x120
	::RPG::GameCore::LevelUIComponent* Field_2_33; // 0x128
	::UnityEngine::Transform* Field_2_34; // 0x130
	::System::Single Field_2_35; // 0x138
	::RPG::GameCore::BossHeadEffType Field_2_36; // 0x13C
	::RPG::GameCore::MonsterEnergyBarType Field_2_37; // 0x140
	::System::Boolean Field_2_38; // 0x144
	::System::Boolean Field_2_39; // 0x145
	::System::Boolean Field_2_40; // 0x146
	::System::Boolean Field_2_41; // 0x147

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A6B0F2C779192279(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A6B0F2C779192279_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A3D91A38AD395C0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_8A3D91A38AD395C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E3EE215C182DE98(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_6E3EE215C182DE98_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B7F6352EF818AEA(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_3B7F6352EF818AEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF249BECB59278D9(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_EF249BECB59278D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B888BDD107E26FEC(::RPG::GameCore::AbilityCurrentStanceChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_B888BDD107E26FEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_33ABFC364E341C89(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_33ABFC364E341C89_OFFSET))(this, a1);
	}

	::System::Void Method_2_D53F77FB0786250F(::RPG::GameCore::LevelCharacterBreakStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBreakStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_D53F77FB0786250F_OFFSET))(this, a1);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_2_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Void Method_2_266E1F1B4DF2F723(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_266E1F1B4DF2F723_OFFSET))(this, a1);
	}

	::System::Void Method_2_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27B39323ED04C8E(::RPG::GameCore::SwitchBossHeadEffType* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27B39323ED04C8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_00A4B38C951C5BD5(::Class_1_83665B095F1535B5_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_19*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_CB8E229BDF290D41_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_2_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

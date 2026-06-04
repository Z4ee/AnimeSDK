#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"

class Class_1_503F91D5A9A9E6E5_1;
class Class_1_83665B095F1535B5_18;
class Class_2_01E36AFA5FDDCBCA;
class Class_2_42E244F0BC6ED6DB;
class Class_2_6E096A5FCBA7A3BD;
class Class_2_A7947638CBFEF9CF;
class Class_2_B26B9A6AA507E78F;
class Class_2_BEBFA6F35799FF11;
class Class_2_D3061860904844A0;
class Class_2_E0065B933D71D9A9;
class Class_2_F9B8FAD13AB85B32_1;
class Class_3_06E3452A211FC6E5;
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

#define CLASS_2_C33602C0D64FA524_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xABB2F20)
#define CLASS_2_C33602C0D64FA524_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xABB3440)
#define CLASS_2_C33602C0D64FA524_METHOD_2_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0xABB2730)
#define CLASS_2_C33602C0D64FA524_METHOD_2_0E90C422C1085C42_OFFSET UNITYSDK_OFFSET(0xABB1990)
#define CLASS_2_C33602C0D64FA524_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0xABB1CE0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0xABB1E20)
#define CLASS_2_C33602C0D64FA524_METHOD_2_266E1F1B4DF2F723_OFFSET UNITYSDK_OFFSET(0xABB04B0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_29B5C83CF6627961_OFFSET UNITYSDK_OFFSET(0xABB1200)
#define CLASS_2_C33602C0D64FA524_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xABB0600)
#define CLASS_2_C33602C0D64FA524_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xABB0B50)
#define CLASS_2_C33602C0D64FA524_METHOD_2_489E3BF8986E4AAB_OFFSET UNITYSDK_OFFSET(0xABB0BE0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xABB3A10)
#define CLASS_2_C33602C0D64FA524_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xABB39B0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0xABB1870)
#define CLASS_2_C33602C0D64FA524_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xABB1C70)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27B39323ED04C8E_OFFSET UNITYSDK_OFFSET(0xABB23F0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xABB2910)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xABB29B0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0xABB2A50)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0xABB2AF0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_5_OFFSET UNITYSDK_OFFSET(0xABB2B90)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_6_OFFSET UNITYSDK_OFFSET(0xABB2BF0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_7_OFFSET UNITYSDK_OFFSET(0xABB2C50)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_8_OFFSET UNITYSDK_OFFSET(0xABB2DB0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xABB2870)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0xABB1380)
#define CLASS_2_C33602C0D64FA524_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xABB1900)
#define CLASS_2_C33602C0D64FA524_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xABB0F40)
#define CLASS_2_C33602C0D64FA524_METHOD_2_BA446D4D3EBC6EEF_OFFSET UNITYSDK_OFFSET(0xABB0360)
#define CLASS_2_C33602C0D64FA524_METHOD_2_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0xABB20B0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xABB2320)
#define CLASS_2_C33602C0D64FA524_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xABB0FD0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_D53F77FB0786250F_OFFSET UNITYSDK_OFFSET(0xABB1B00)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0xABB27D0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0xABB2820)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xABB2780)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA5F8F0272C5C192_OFFSET UNITYSDK_OFFSET(0xABB0D10)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xABB2E50)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xABB2CF0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xABB0780)
#define CLASS_2_C33602C0D64FA524_METHOD_2_FB9C56D85A195632_OFFSET UNITYSDK_OFFSET(0xABB0C80)
#define CLASS_2_C33602C0D64FA524_METHOD_2_FC62D9B72750F5A4_OFFSET UNITYSDK_OFFSET(0xABB1080)
#define CLASS_2_C33602C0D64FA524_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xABB0300)
#define CLASS_2_C33602C0D64FA524_ONRETURN_OFFSET UNITYSDK_OFFSET(0xABB05A0)
#define CLASS_2_C33602C0D64FA524__CTOR_OFFSET UNITYSDK_OFFSET(0xABB3920)
#define CLASS_2_C33602C0D64FA524__ONBIND_OFFSET UNITYSDK_OFFSET(0xABAF9C0)
#define CLASS_2_C33602C0D64FA524__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xABB09B0)
#define CLASS_2_C33602C0D64FA524__ONTICK_OFFSET UNITYSDK_OFFSET(0xABB0A10)
#define CLASS_2_C33602C0D64FA524___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xABB3B30)
#define CLASS_2_C33602C0D64FA524___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xABB3B90)
#define CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xABB3950)
#define CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xABB3A70)
#define CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xABB3AD0)

inline static constexpr unsigned int Class_2_C33602C0D64FA524_TypeDefinitionIndex = 67365;

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
	::UnityEngine::UI::Image* Field_2_8; // 0x60
	::UnityEngine::Animation* Field_2_9; // 0x68
	::Class_2_42E244F0BC6ED6DB* Field_2_10; // 0x70
	::Class_2_A7947638CBFEF9CF* Field_2_11; // 0x78
	::UnityEngine::Animation* Field_2_12; // 0x80
	::RPG::GameCore::GameEntity* Field_2_13; // 0x88
	::RPG::Client::PrefabLoadMeta* Field_2_14; // 0x90
	::UnityEngine::Transform* Field_2_15; // 0x98
	::RPG::Client::MonoInControlTip* Field_2_16; // 0xA0
	::UnityEngine::Transform* Field_2_17; // 0xA8
	::UnityEngine::Animation* Field_2_18; // 0xB0
	::UnityEngine::Transform* Field_2_19; // 0xB8
	::UnityEngine::Transform* Field_2_20; // 0xC0
	::Class_2_F9B8FAD13AB85B32_1* Field_2_21; // 0xC8
	::Class_3_06E3452A211FC6E5* Field_2_22; // 0xD0
	::RPG::GameCore::BattleInstance* Field_2_23; // 0xD8
	::RPG::GameCore::CharacterDataComponent* Field_2_24; // 0xE0
	::UnityEngine::GameObject* Field_2_25; // 0xE8
	::Class_2_B26B9A6AA507E78F* Field_2_26; // 0xF0
	::UnityEngine::Transform* Field_2_27; // 0xF8
	::Class_2_E0065B933D71D9A9* Field_2_28; // 0x100
	::Class_2_6E096A5FCBA7A3BD* Field_2_29; // 0x108
	::Class_2_D3061860904844A0* Field_2_30; // 0x110
	::UnityEngine::Transform* Field_2_31; // 0x118
	::Class_2_01E36AFA5FDDCBCA* Field_2_32; // 0x120
	::Class_2_BEBFA6F35799FF11* Field_2_33; // 0x128
	::RPG::GameCore::LevelUIComponent* Field_2_34; // 0x130
	::RPG::GameCore::BossHeadEffType Field_2_35; // 0x138
	::RPG::GameCore::MonsterEnergyBarType Field_2_36; // 0x13C
	::System::Boolean Field_2_37; // 0x140
	::System::Boolean Field_2_38; // 0x141
	::System::Boolean Field_2_39; // 0x142
	::System::Boolean Field_2_40; // 0x143
	::System::Single Field_2_41; // 0x144

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

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_489E3BF8986E4AAB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_489E3BF8986E4AAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB9C56D85A195632(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_FB9C56D85A195632_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA446D4D3EBC6EEF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_BA446D4D3EBC6EEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA5F8F0272C5C192(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_DA5F8F0272C5C192_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC62D9B72750F5A4(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_FC62D9B72750F5A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_29B5C83CF6627961(::RPG::GameCore::AbilityCurrentStanceChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_29B5C83CF6627961_OFFSET))(this, a1);
	}

	::System::Void Method_2_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_0E90C422C1085C42(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_0E90C422C1085C42_OFFSET))(this, a1);
	}

	::System::Void Method_2_D53F77FB0786250F(::RPG::GameCore::LevelCharacterBreakStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBreakStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_D53F77FB0786250F_OFFSET))(this, a1);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
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

	::System::Void Method_2_CFC95121222309BD(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27B39323ED04C8E(::RPG::GameCore::SwitchBossHeadEffType* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27B39323ED04C8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_00A4B38C951C5BD5(::Class_1_83665B095F1535B5_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_18*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_00A4B38C951C5BD5_OFFSET))(this, a1);
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

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

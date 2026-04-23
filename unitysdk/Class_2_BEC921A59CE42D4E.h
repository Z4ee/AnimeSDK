#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"

class Class_1_503F91D5A9A9E6E5_1;
class Class_1_83665B095F1535B5_18;
class Class_2_1DBA4BCA19BD1EB4;
class Class_2_5909B42D62F4BAE7;
class Class_2_6E096A5FCBA7A3BD;
class Class_2_78405B03A0233CB3;
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

#define CLASS_2_BEC921A59CE42D4E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9638790)
#define CLASS_2_BEC921A59CE42D4E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x9638BF0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_0E90C422C1085C42_OFFSET UNITYSDK_OFFSET(0x9637240)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x96375A0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x96376E0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x9635CC0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_33B23A505F8C30B9_OFFSET UNITYSDK_OFFSET(0x9635E10)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x96360D0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x9635F50)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x9636420)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_47F50B259C23D1F5_OFFSET UNITYSDK_OFFSET(0x9637E10)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_489E3BF8986E4AAB_OFFSET UNITYSDK_OFFSET(0x96364B0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_4CCC147696938352_OFFSET UNITYSDK_OFFSET(0x9637C00)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x9637B60)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9639100)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x96390A0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_668B9BDA71E41E56_OFFSET UNITYSDK_OFFSET(0x9636AB0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x9637120)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9637530)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_973AD2983CC3B48D_OFFSET UNITYSDK_OFFSET(0x96365F0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x9638010)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x96380D0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x9638190)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0x9638250)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_5_OFFSET UNITYSDK_OFFSET(0x9638310)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_6_OFFSET UNITYSDK_OFFSET(0x9638370)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_7_OFFSET UNITYSDK_OFFSET(0x96383D0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_8_OFFSET UNITYSDK_OFFSET(0x9638490)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_9_OFFSET UNITYSDK_OFFSET(0x96385D0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x9637F50)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0x9636C20)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x96371B0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9636800)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9636890)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_D53F77FB0786250F_OFFSET UNITYSDK_OFFSET(0x96373C0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x9637EB0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0x9637F00)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x9637E60)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_E8007A2462D4E38D_OFFSET UNITYSDK_OFFSET(0x9636940)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x96386C0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x9637970)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_FB9C56D85A195632_OFFSET UNITYSDK_OFFSET(0x9636550)
#define CLASS_2_BEC921A59CE42D4E_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x9635C60)
#define CLASS_2_BEC921A59CE42D4E_ONRETURN_OFFSET UNITYSDK_OFFSET(0x9635EF0)
#define CLASS_2_BEC921A59CE42D4E__CTOR_OFFSET UNITYSDK_OFFSET(0x9639010)
#define CLASS_2_BEC921A59CE42D4E__ONBIND_OFFSET UNITYSDK_OFFSET(0x96353B0)
#define CLASS_2_BEC921A59CE42D4E__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x9636280)
#define CLASS_2_BEC921A59CE42D4E__ONTICK_OFFSET UNITYSDK_OFFSET(0x96362E0)
#define CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9639230)
#define CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x9639290)
#define CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9639040)
#define CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x9639160)
#define CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x96391C0)

inline static constexpr unsigned int Class_2_BEC921A59CE42D4E_TypeDefinitionIndex = 66428;

class Class_2_BEC921A59CE42D4E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_30; // 0x0
	// static const ::System::Single Field_2_31; // 0x0
	// static const ::System::String* Field_2_32; // 0x0
	// static const ::System::String* Field_2_33; // 0x0
	// static const ::System::String* Field_2_34; // 0x0
	// static const ::System::String* Field_2_35; // 0x0
	// static const ::System::String* Field_2_36; // 0x0
	// static const ::System::String* Field_2_37; // 0x0
	::RPG::Client::MonoInControlTip* Field_2_16; // 0x60
	::Class_2_D3061860904844A0* Field_2_15; // 0x68
	::Class_2_BEBFA6F35799FF11* Field_2_0; // 0x70
	::UnityEngine::Transform* Field_2_11; // 0x78
	::RPG::GameCore::GameEntity* Field_2_22; // 0x80
	::Class_2_F9B8FAD13AB85B32_1* Field_2_40; // 0x88
	::UnityEngine::Animation* Field_2_12; // 0x90
	::RPG::GameCore::BattleInstance* Field_2_21; // 0x98
	::UnityEngine::Transform* Field_2_5; // 0xA0
	::UnityEngine::Transform* Field_2_7; // 0xA8
	::Class_2_E0065B933D71D9A9* Field_2_19; // 0xB0
	::UnityEngine::Transform* Field_2_9; // 0xB8
	::RPG::GameCore::LevelUIComponent* Field_2_20; // 0xC0
	::Class_2_1DBA4BCA19BD1EB4* Field_2_2; // 0xC8
	::UnityEngine::GameObject* Field_2_18; // 0xD0
	::Class_3_06E3452A211FC6E5* Field_2_38; // 0xD8
	::UnityEngine::Transform* Field_2_8; // 0xE0
	::UnityEngine::Animation* Field_2_13; // 0xE8
	::Class_2_6E096A5FCBA7A3BD* Field_2_1; // 0xF0
	::RPG::Client::PrefabLoadMeta* Field_2_17; // 0xF8
	::Class_2_78405B03A0233CB3* Field_2_24; // 0x100
	::UnityEngine::UI::Image* Field_2_6; // 0x108
	::Class_2_5909B42D62F4BAE7* Field_2_4; // 0x110
	::Class_2_B26B9A6AA507E78F* Field_2_3; // 0x118
	::RPG::GameCore::CharacterDataComponent* Field_2_23; // 0x120
	::UnityEngine::Animation* Field_2_14; // 0x128
	::UnityEngine::Transform* Field_2_10; // 0x130
	::RPG::GameCore::MonsterEnergyBarType Field_2_39; // 0x138
	::System::Boolean Field_2_27; // 0x13C
	::System::Boolean Field_2_26; // 0x13D
	::System::Boolean Field_2_28; // 0x13E
	::System::Boolean Field_2_25; // 0x13F
	::System::Single Field_2_29; // 0x140
	::RPG::GameCore::BossHeadEffType Field_2_41; // 0x144

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_489E3BF8986E4AAB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_489E3BF8986E4AAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB9C56D85A195632(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_FB9C56D85A195632_OFFSET))(this, a1);
	}

	::System::Void Method_2_26E509975F92479C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_26E509975F92479C_OFFSET))(this, a1);
	}

	::System::Void Method_2_973AD2983CC3B48D(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_973AD2983CC3B48D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8007A2462D4E38D(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_E8007A2462D4E38D_OFFSET))(this, a1);
	}

	::System::Void Method_2_668B9BDA71E41E56(::RPG::GameCore::AbilityCurrentStanceChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_668B9BDA71E41E56_OFFSET))(this, a1);
	}

	::System::Void Method_2_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_0E90C422C1085C42(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_0E90C422C1085C42_OFFSET))(this, a1);
	}

	::System::Void Method_2_D53F77FB0786250F(::RPG::GameCore::LevelCharacterBreakStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBreakStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_D53F77FB0786250F_OFFSET))(this, a1);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_2_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Void Method_2_33B23A505F8C30B9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_33B23A505F8C30B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_4CCC147696938352(::RPG::GameCore::SwitchBossHeadEffType* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_4CCC147696938352_OFFSET))(this, a1);
	}

	::System::Void Method_2_47F50B259C23D1F5(::Class_1_83665B095F1535B5_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_18*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_47F50B259C23D1F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_DA1BF2C227DC3D86_2_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_503F91D5A9A9E6E5_1;
class Class_2_611012CBC7559F01;
class Class_2_7FD0A88267681658;
class Class_2_A7947638CBFEF9CF;
class Class_2_BEBFA6F35799FF11;
class Class_2_F9B8FAD13AB85B32_1;
class Class_3_C922191B32E5C6F1;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class ShowBossInfoParam; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class SwitchBossHeadEffType; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_BEC921A59CE42D4E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13D0DF40)
#define CLASS_2_BEC921A59CE42D4E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13D0E310)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_0E90C422C1085C42_OFFSET UNITYSDK_OFFSET(0x13D0CFC0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x13D0D140)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x13D0C630)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x13D0C590)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x13D0CA10)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_489E3BF8986E4AAB_OFFSET UNITYSDK_OFFSET(0x13D0CAA0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0x13D0D330)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13D0E7F0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13D0E790)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x13D0E730)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_62C7224EE5981F41_OFFSET UNITYSDK_OFFSET(0x13D0C410)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x13D0C780)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x13D0D4A0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27B39323ED04C8E_OFFSET UNITYSDK_OFFSET(0x13D0D6D0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x13D0DB90)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x13D0DC30)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x13D0DC90)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0x13D0DD30)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_5_OFFSET UNITYSDK_OFFSET(0x13D0DEA0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x13D0DAF0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x13D0CF30)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_AB379526BCF8122B_OFFSET UNITYSDK_OFFSET(0x13D0C490)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13D0CDF0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D0C740)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_CC95FA0CD2CB9EB2_OFFSET UNITYSDK_OFFSET(0x13D0D280)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x13D0D600)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x13D0CE80)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x13D0DA50)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0x13D0DAA0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x13D0DA00)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_DA5F8F0272C5C192_OFFSET UNITYSDK_OFFSET(0x13D0CBD0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x13D0DDE0)
#define CLASS_2_BEC921A59CE42D4E_METHOD_2_FB9C56D85A195632_OFFSET UNITYSDK_OFFSET(0x13D0CB40)
#define CLASS_2_BEC921A59CE42D4E_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x13D0C5A0)
#define CLASS_2_BEC921A59CE42D4E_ONRETURN_OFFSET UNITYSDK_OFFSET(0x13D0C6E0)
#define CLASS_2_BEC921A59CE42D4E__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0E6A0)
#define CLASS_2_BEC921A59CE42D4E__ONBIND_OFFSET UNITYSDK_OFFSET(0x13D0BEE0)
#define CLASS_2_BEC921A59CE42D4E__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13D0C880)
#define CLASS_2_BEC921A59CE42D4E__ONTICK_OFFSET UNITYSDK_OFFSET(0x13D0C8D0)
#define CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13D0E910)
#define CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13D0E970)
#define CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13D0E6D0)
#define CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13D0E850)
#define CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x13D0E8B0)

inline static constexpr unsigned int Class_2_BEC921A59CE42D4E_TypeDefinitionIndex = 67027;

class Class_2_BEC921A59CE42D4E : public ::Class_1_CA217ABF4E3B4F3F
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
	::UnityEngine::Transform* Field_2_8; // 0x60
	::Class_2_BEBFA6F35799FF11* Field_2_9; // 0x68
	::UnityEngine::UI::Image* Field_2_10; // 0x70
	::RPG::GameCore::GameEntity* Field_2_11; // 0x78
	::Class_2_F9B8FAD13AB85B32_1* Field_2_12; // 0x80
	::UnityEngine::Transform* Field_2_13; // 0x88
	::UnityEngine::Animation* Field_2_14; // 0x90
	::UnityEngine::Transform* Field_2_15; // 0x98
	::UnityEngine::Animation* Field_2_16; // 0xA0
	::RPG::Client::MonoInControlTip* Field_2_17; // 0xA8
	::UnityEngine::Animation* Field_2_18; // 0xB0
	::Class_2_611012CBC7559F01* Field_2_19; // 0xB8
	::Class_3_C922191B32E5C6F1* Field_2_20; // 0xC0
	::RPG::Client::PrefabLoadMeta* Field_2_21; // 0xC8
	::UnityEngine::Transform* Field_2_22; // 0xD0
	::Class_2_7FD0A88267681658* Field_2_23; // 0xD8
	::UnityEngine::Transform* Field_2_24; // 0xE0
	::Class_2_A7947638CBFEF9CF* Field_2_25; // 0xE8
	::UnityEngine::Transform* Field_2_26; // 0xF0
	::System::Boolean Field_2_27; // 0xF8
	::System::Boolean Field_2_28; // 0xF9
	::System::Boolean Field_2_29; // 0xFA
	::System::Boolean Field_2_30; // 0xFB
	::RPG::GameCore::BossHeadEffType Field_2_31; // 0xFC
	::System::Single Field_2_32; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_62C7224EE5981F41(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_62C7224EE5981F41_OFFSET))(this, a1);
	}

	::Class_2_7FD0A88267681658* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_7FD0A88267681658*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
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

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA5F8F0272C5C192(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_DA5F8F0272C5C192_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_0E90C422C1085C42(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_0E90C422C1085C42_OFFSET))(this, a1);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC95FA0CD2CB9EB2(::RPG::Client::ShowBossInfoParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowBossInfoParam*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_CC95FA0CD2CB9EB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB379526BCF8122B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_AB379526BCF8122B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BE99DDCF7F1FD88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_4BE99DDCF7F1FD88_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27B39323ED04C8E(::RPG::GameCore::SwitchBossHeadEffType* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27B39323ED04C8E_OFFSET))(this, a1);
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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_A27D06F9481FAFDB_5_OFFSET))(this, a1);
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

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
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

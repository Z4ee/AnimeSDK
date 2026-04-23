#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_503F91D5A9A9E6E5_1;
class Class_2_5909B42D62F4BAE7;
class Class_2_611012CBC7559F01;
class Class_2_7FD0A88267681658;
class Class_2_BEBFA6F35799FF11;
class Class_2_F9B8FAD13AB85B32_1;
class Class_3_58DBA4631799AA15;
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

#define CLASS_2_BEC921A59CE42D4E_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10ABF270)
#define CLASS_2_BEC921A59CE42D4E_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10ABF5B0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_0E90C422C1085C42_OFFSET UNITYSDK_OFFSET(0x10ABE370)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x10ABE840)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x10ABE4F0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x10ABDA60)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_390011D48AC07E18_OFFSET UNITYSDK_OFFSET(0x10ABD840)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_39F0DE2A1348DBFF_OFFSET UNITYSDK_OFFSET(0x10ABD8C0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x10ABD9C0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x10ABDDC0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_489E3BF8986E4AAB_OFFSET UNITYSDK_OFFSET(0x10ABDE50)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_4CCC147696938352_OFFSET UNITYSDK_OFFSET(0x10ABE9F0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x10ABE950)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10ABFA20)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10ABF9C0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x10ABE6E0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_973AD2983CC3B48D_OFFSET UNITYSDK_OFFSET(0x10ABDF90)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x10ABEDB0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x10ABEE70)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x10ABEED0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0x10ABEF90)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_5_OFFSET UNITYSDK_OFFSET(0x10ABF040)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_6_OFFSET UNITYSDK_OFFSET(0x10ABF180)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x10ABECF0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x10ABE2E0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10ABE1A0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0x10ABDBB0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x10ABF950)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10ABDB70)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_CC95FA0CD2CB9EB2_OFFSET UNITYSDK_OFFSET(0x10ABE630)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10ABE230)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x10ABEC50)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0x10ABECA0)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x10ABEC00)
#define CLASS_2_BEC921A59CE42D4E_1_METHOD_2_FB9C56D85A195632_OFFSET UNITYSDK_OFFSET(0x10ABDEF0)
#define CLASS_2_BEC921A59CE42D4E_1_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x10ABD9D0)
#define CLASS_2_BEC921A59CE42D4E_1_ONRETURN_OFFSET UNITYSDK_OFFSET(0x10ABDB10)
#define CLASS_2_BEC921A59CE42D4E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10ABF8C0)
#define CLASS_2_BEC921A59CE42D4E_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x10ABD390)
#define CLASS_2_BEC921A59CE42D4E_1__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x10ABDC30)
#define CLASS_2_BEC921A59CE42D4E_1__ONTICK_OFFSET UNITYSDK_OFFSET(0x10ABDC80)
#define CLASS_2_BEC921A59CE42D4E_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10ABFB50)
#define CLASS_2_BEC921A59CE42D4E_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10ABFBB0)
#define CLASS_2_BEC921A59CE42D4E_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10ABF8F0)
#define CLASS_2_BEC921A59CE42D4E_1___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x10ABFA80)
#define CLASS_2_BEC921A59CE42D4E_1___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x10ABFAE0)

inline static constexpr unsigned int Class_2_BEC921A59CE42D4E_1_TypeDefinitionIndex = 66089;

class Class_2_BEC921A59CE42D4E_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_23; // 0x0
	// static const ::System::Single Field_2_24; // 0x0
	// static const ::System::String* Field_2_25; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	// static const ::System::String* Field_2_28; // 0x0
	// static const ::System::String* Field_2_29; // 0x0
	// static const ::System::String* Field_2_30; // 0x0
	::Class_2_611012CBC7559F01* Field_2_10; // 0x60
	::UnityEngine::Transform* Field_2_5; // 0x68
	::UnityEngine::Transform* Field_2_8; // 0x70
	::RPG::Client::PrefabLoadMeta* Field_2_15; // 0x78
	::UnityEngine::Animation* Field_2_13; // 0x80
	::UnityEngine::Animation* Field_2_12; // 0x88
	::RPG::GameCore::GameEntity* Field_2_16; // 0x90
	::UnityEngine::Transform* Field_2_4; // 0x98
	::UnityEngine::Transform* Field_2_6; // 0xA0
	::Class_3_58DBA4631799AA15* Field_2_17; // 0xA8
	::UnityEngine::Animation* Field_2_11; // 0xB0
	::Class_2_F9B8FAD13AB85B32_1* Field_2_31; // 0xB8
	::Class_2_BEBFA6F35799FF11* Field_2_0; // 0xC0
	::Class_2_7FD0A88267681658* Field_2_1; // 0xC8
	::UnityEngine::Transform* Field_2_7; // 0xD0
	::Class_2_5909B42D62F4BAE7* Field_2_2; // 0xD8
	::UnityEngine::UI::Image* Field_2_3; // 0xE0
	::UnityEngine::Transform* Field_2_9; // 0xE8
	::RPG::Client::MonoInControlTip* Field_2_14; // 0xF0
	::System::Boolean Field_2_19; // 0xF8
	::System::Boolean Field_2_18; // 0xF9
	::System::Boolean Field_2_21; // 0xFA
	::System::Boolean Field_2_20; // 0xFB
	::RPG::GameCore::BossHeadEffType Field_2_32; // 0xFC
	::System::Single Field_2_22; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_390011D48AC07E18(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_390011D48AC07E18_OFFSET))(this, a1);
	}

	::Class_2_7FD0A88267681658* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_7FD0A88267681658*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BADDA70ED68283AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_BADDA70ED68283AE_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_489E3BF8986E4AAB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_489E3BF8986E4AAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB9C56D85A195632(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_FB9C56D85A195632_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_973AD2983CC3B48D(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_973AD2983CC3B48D_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_0E90C422C1085C42(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_0E90C422C1085C42_OFFSET))(this, a1);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC95FA0CD2CB9EB2(::RPG::Client::ShowBossInfoParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowBossInfoParam*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_CC95FA0CD2CB9EB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_39F0DE2A1348DBFF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_39F0DE2A1348DBFF_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_4CCC147696938352(::RPG::GameCore::SwitchBossHeadEffType* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_4CCC147696938352_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_DA1BF2C227DC3D86_2_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_A27D06F9481FAFDB_6_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEC921A59CE42D4E_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

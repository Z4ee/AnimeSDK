#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_503F91D5A9A9E6E5_1;
class Class_2_7FD0A88267681658;
class Class_2_A7947638CBFEF9CF;
class Class_2_BEBFA6F35799FF11;
class Class_2_F253BDBB0669BC76;
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

#define CLASS_2_DF912921EB86ACC5_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x186AF780)
#define CLASS_2_DF912921EB86ACC5_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x186AFB40)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x186ADAA0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_33ABFC364E341C89_OFFSET UNITYSDK_OFFSET(0x186AE650)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_3B7F6352EF818AEA_OFFSET UNITYSDK_OFFSET(0x186AE2D0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x186AD9C0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x186ADE80)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0x186AE980)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x186AEC60)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x186ADBF0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_8A3D91A38AD395C0_OFFSET UNITYSDK_OFFSET(0x186AE1B0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0x186AE6E0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x186AEAF0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_A27B39323ED04C8E_OFFSET UNITYSDK_OFFSET(0x186AED00)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_A6B0F2C779192279_OFFSET UNITYSDK_OFFSET(0x186ADF10)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x186AE5C0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_AB379526BCF8122B_OFFSET UNITYSDK_OFFSET(0x186AD8C0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x186AE480)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x186ADBB0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_CC95FA0CD2CB9EB2_OFFSET UNITYSDK_OFFSET(0x186AE890)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x186AE510)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x186AF1B0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0x186AF200)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x186AF160)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_DCE709D1A4B35861_OFFSET UNITYSDK_OFFSET(0x186AD820)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x186AF310)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x186AF3D0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x186AF460)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x186AF520)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x186AF600)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x186AF6C0)
#define CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x186AF250)
#define CLASS_2_DF912921EB86ACC5_1_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x186ADA10)
#define CLASS_2_DF912921EB86ACC5_1_ONRETURN_OFFSET UNITYSDK_OFFSET(0x186ADB50)
#define CLASS_2_DF912921EB86ACC5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x186AFED0)
#define CLASS_2_DF912921EB86ACC5_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x186AD2F0)
#define CLASS_2_DF912921EB86ACC5_1__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x186ADCF0)
#define CLASS_2_DF912921EB86ACC5_1__ONTICK_OFFSET UNITYSDK_OFFSET(0x186ADD40)

inline static constexpr unsigned int Class_2_DF912921EB86ACC5_1_TypeDefinitionIndex = 68471;

class Class_2_DF912921EB86ACC5_1 : public ::Class_1_CA217ABF4E3B4F3F
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
	::UnityEngine::Animation* Field_2_8; // 0x60
	::UnityEngine::Transform* Field_2_9; // 0x68
	::UnityEngine::Transform* Field_2_10; // 0x70
	::RPG::Client::MonoInControlTip* Field_2_11; // 0x78
	::UnityEngine::Animation* Field_2_12; // 0x80
	::UnityEngine::Animation* Field_2_13; // 0x88
	::UnityEngine::Transform* Field_2_14; // 0x90
	::Class_3_C922191B32E5C6F1* Field_2_15; // 0x98
	::Class_2_F9B8FAD13AB85B32_1* Field_2_16; // 0xA0
	::UnityEngine::Transform* Field_2_17; // 0xA8
	::UnityEngine::UI::Image* Field_2_18; // 0xB0
	::RPG::GameCore::GameEntity* Field_2_19; // 0xB8
	::Class_2_F253BDBB0669BC76* Field_2_20; // 0xC0
	::UnityEngine::Transform* Field_2_21; // 0xC8
	::RPG::Client::PrefabLoadMeta* Field_2_22; // 0xD0
	::Class_2_BEBFA6F35799FF11* Field_2_23; // 0xD8
	::UnityEngine::Transform* Field_2_24; // 0xE0
	::Class_2_A7947638CBFEF9CF* Field_2_25; // 0xE8
	::Class_2_7FD0A88267681658* Field_2_26; // 0xF0
	::RPG::GameCore::BossHeadEffType Field_2_27; // 0xF8
	::System::Boolean Field_2_28; // 0xFC
	::System::Boolean Field_2_29; // 0xFD
	::System::Boolean Field_2_30; // 0xFE
	::System::Boolean Field_2_31; // 0xFF
	::System::Single Field_2_32; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_DCE709D1A4B35861(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_DCE709D1A4B35861_OFFSET))(this, a1);
	}

	::Class_2_7FD0A88267681658* Method_2_457717A0CF438A7C()
	{
		return ((::Class_2_7FD0A88267681658*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A6B0F2C779192279(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_A6B0F2C779192279_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A3D91A38AD395C0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_8A3D91A38AD395C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B7F6352EF818AEA(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_3B7F6352EF818AEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_33ABFC364E341C89(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_33ABFC364E341C89_OFFSET))(this, a1);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC95FA0CD2CB9EB2(::RPG::Client::ShowBossInfoParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowBossInfoParam*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_CC95FA0CD2CB9EB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB379526BCF8122B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_AB379526BCF8122B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BE99DDCF7F1FD88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_4BE99DDCF7F1FD88_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27B39323ED04C8E(::RPG::GameCore::SwitchBossHeadEffType* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_A27B39323ED04C8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_DA1BF2C227DC3D86_2_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF912921EB86ACC5_1_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

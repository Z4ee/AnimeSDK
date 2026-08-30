#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"

class Class_1_503F91D5A9A9E6E5_1;
class Class_1_83665B095F1535B5_20;
class Class_2_00B2FB63C06BFB5B;
class Class_2_01E36AFA5FDDCBCA;
class Class_2_33FE1515775ACE7E;
class Class_2_38CD28B3D11A00DD;
class Class_2_6E096A5FCBA7A3BD;
class Class_2_A7947638CBFEF9CF;
class Class_2_B26B9A6AA507E78F;
class Class_2_BEBFA6F35799FF11;
class Class_2_D3061860904844A0;
class Class_2_E0065B933D71D9A9;
class Class_2_E543FD1529E01E97;
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
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_C33602C0D64FA524_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF93280)
#define CLASS_2_C33602C0D64FA524_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBF93760)
#define CLASS_2_C33602C0D64FA524_METHOD_2_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0xBF929E0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_018BA1AE137EB2E2_OFFSET UNITYSDK_OFFSET(0xBF90BB0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0xBF92360)
#define CLASS_2_C33602C0D64FA524_METHOD_2_33ABFC364E341C89_OFFSET UNITYSDK_OFFSET(0xBF91F40)
#define CLASS_2_C33602C0D64FA524_METHOD_2_3B7F6352EF818AEA_OFFSET UNITYSDK_OFFSET(0xBF91490)
#define CLASS_2_C33602C0D64FA524_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBF90D50)
#define CLASS_2_C33602C0D64FA524_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xBF911A0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xBF91990)
#define CLASS_2_C33602C0D64FA524_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xBF90ED0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_6E3EE215C182DE98_OFFSET UNITYSDK_OFFSET(0xBF90AB0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0xBF91E20)
#define CLASS_2_C33602C0D64FA524_METHOD_2_8A3D91A38AD395C0_OFFSET UNITYSDK_OFFSET(0xBF91370)
#define CLASS_2_C33602C0D64FA524_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBF92140)
#define CLASS_2_C33602C0D64FA524_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0xBF921B0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A6B0F2C779192279_OFFSET UNITYSDK_OFFSET(0xBF91230)
#define CLASS_2_C33602C0D64FA524_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xBF91EB0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xBF91640)
#define CLASS_2_C33602C0D64FA524_METHOD_2_B888BDD107E26FEC_OFFSET UNITYSDK_OFFSET(0xBF91890)
#define CLASS_2_C33602C0D64FA524_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xBF93180)
#define CLASS_2_C33602C0D64FA524_METHOD_2_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0xBF926B0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xBF92910)
#define CLASS_2_C33602C0D64FA524_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xBF916D0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_D53F77FB0786250F_OFFSET UNITYSDK_OFFSET(0xBF91FD0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0xBF92A80)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0xBF92AD0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBF92A30)
#define CLASS_2_C33602C0D64FA524_METHOD_2_EF249BECB59278D9_OFFSET UNITYSDK_OFFSET(0xBF91780)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xBF92BE0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xBF92CA0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0xBF92D60)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0xBF92E20)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0xBF92EE0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0xBF92F70)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_7_OFFSET UNITYSDK_OFFSET(0xBF93000)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_8_OFFSET UNITYSDK_OFFSET(0xBF930C0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xBF92B20)
#define CLASS_2_C33602C0D64FA524_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBF90A50)
#define CLASS_2_C33602C0D64FA524_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBF90CF0)
#define CLASS_2_C33602C0D64FA524__CTOR_OFFSET UNITYSDK_OFFSET(0xBF93C00)
#define CLASS_2_C33602C0D64FA524__ONBIND_OFFSET UNITYSDK_OFFSET(0xBF8FFA0)
#define CLASS_2_C33602C0D64FA524__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBF91000)
#define CLASS_2_C33602C0D64FA524__ONTICK_OFFSET UNITYSDK_OFFSET(0xBF91060)

inline static constexpr unsigned int Class_2_C33602C0D64FA524_TypeDefinitionIndex = 72033;

class Class_2_C33602C0D64FA524 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* FOHFALFBMAP; // 0x0
	// static const ::System::Single PCKKCHDMGEF; // 0x0
	// static const ::System::String* FNLMCKOJPCN; // 0x0
	// static const ::System::String* HEHGGNJFJDA; // 0x0
	// static const ::System::String* AJCHIPEPEIP; // 0x0
	// static const ::System::String* KDODNCFEJFD; // 0x0
	// static const ::System::String* NMHICHPNEHN; // 0x0
	// static const ::System::String* ENEOKEBLEEN; // 0x0
	::UnityEngine::UI::Image* ANIHJHGMMDP; // 0x60
	::RPG::Client::PrefabLoadMeta* CKGIPACADAL; // 0x68
	::UnityEngine::Transform* KMPHCBLIPAN; // 0x70
	::UnityEngine::GameObject* HLMEGCINGKG; // 0x78
	::Class_2_E543FD1529E01E97* JFHMHENBIPB; // 0x80
	::Class_2_A7947638CBFEF9CF* KFILGHMECDL; // 0x88
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x90
	::Class_2_38CD28B3D11A00DD* EGHOLHLEHDC; // 0x98
	::Class_2_BEBFA6F35799FF11* LEFDOCOCCBH; // 0xA0
	::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0xA8
	::UnityEngine::Animation* IGCIKMHNLLC; // 0xB0
	::Class_2_01E36AFA5FDDCBCA* LFFBIIPBPJJ; // 0xB8
	::UnityEngine::Transform* FGHFLHBEGHJ; // 0xC0
	::Class_2_B26B9A6AA507E78F* HOLOEFEIBDC; // 0xC8
	::Class_3_AC01FCB2512C56A9* HEBFHCBPMFI; // 0xD0
	::UnityEngine::Transform* ENIOLPBCHLK; // 0xD8
	::Class_2_00B2FB63C06BFB5B* OENDKKCKOEG; // 0xE0
	::UnityEngine::Animation* NJDJFFENGOJ; // 0xE8
	::UnityEngine::Animation* JPHOOFFIAAH; // 0xF0
	::Class_2_E0065B933D71D9A9* BNFFILALODN; // 0xF8
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x100
	::Class_2_6E096A5FCBA7A3BD* COLBKPIKJOO; // 0x108
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x110
	::UnityEngine::Transform* GDGDNANJFKI; // 0x118
	::Class_2_D3061860904844A0* PIMKIKPMAPO; // 0x120
	::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x128
	::UnityEngine::Transform* HIGKIILCPEP; // 0x130
	::Class_2_33FE1515775ACE7E* GFGMECNGHIG; // 0x138
	::RPG::GameCore::MonsterEnergyBarType MBCDGGEGPFA; // 0x140
	::System::Single CMKOAALCKAO; // 0x144
	::System::Boolean FHBNNGCEPFD; // 0x148
	::System::Boolean ACAPCHBDIBF; // 0x149
	::System::Boolean FMBKOCPMBDF; // 0x14A
	::System::Boolean FFIAGGGEAEG; // 0x14B

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

	::System::Void Method_2_018BA1AE137EB2E2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_018BA1AE137EB2E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_00A4B38C951C5BD5(::Class_1_83665B095F1535B5_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_20*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_00A4B38C951C5BD5_OFFSET))(this, a1);
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

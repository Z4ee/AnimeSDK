#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvNavigationState.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/NavigationTestResult.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_6B303821F3B24153.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkData.h"
#include "unitysdk/UnityEngine/AI/ObstacleAvoidanceType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_21;
class Class_1_43BD383C98B4C0C5_107;
class Class_1_4ADE0B0F695A887A;
class Class_1_DE10E55D67735639;
class Class_2_6A3F10CE86B200DD;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshChanged; }

#define CLASS_2_A0580152EB393340_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C055A0)
#define CLASS_2_A0580152EB393340_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10C05850)
#define CLASS_2_A0580152EB393340_METHOD_2_054B8F7AF60506D5_OFFSET UNITYSDK_OFFSET(0x10C0A9D0)
#define CLASS_2_A0580152EB393340_METHOD_2_05E5A5B5975D0E15_OFFSET UNITYSDK_OFFSET(0x10C09D80)
#define CLASS_2_A0580152EB393340_METHOD_2_0882BA2CA10E8E8E_OFFSET UNITYSDK_OFFSET(0x10C08D80)
#define CLASS_2_A0580152EB393340_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x10C07020)
#define CLASS_2_A0580152EB393340_METHOD_2_0DAA228ACF31C21A_OFFSET UNITYSDK_OFFSET(0x10C08130)
#define CLASS_2_A0580152EB393340_METHOD_2_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x10C0B2A0)
#define CLASS_2_A0580152EB393340_METHOD_2_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x10C083E0)
#define CLASS_2_A0580152EB393340_METHOD_2_1838890736712B14_OFFSET UNITYSDK_OFFSET(0x10C09A40)
#define CLASS_2_A0580152EB393340_METHOD_2_193E00E83BC3E6E8_OFFSET UNITYSDK_OFFSET(0x10C0A5E0)
#define CLASS_2_A0580152EB393340_METHOD_2_1BCD32ABF860604C_OFFSET UNITYSDK_OFFSET(0x10C07D80)
#define CLASS_2_A0580152EB393340_METHOD_2_1C4B1503939035D7_OFFSET UNITYSDK_OFFSET(0x10C0A030)
#define CLASS_2_A0580152EB393340_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x10C050D0)
#define CLASS_2_A0580152EB393340_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x10C0B3C0)
#define CLASS_2_A0580152EB393340_METHOD_2_2FACBD27130A98A0_OFFSET UNITYSDK_OFFSET(0x10C05D00)
#define CLASS_2_A0580152EB393340_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10C097E0)
#define CLASS_2_A0580152EB393340_METHOD_2_340C5261EF0A9C00_OFFSET UNITYSDK_OFFSET(0x10C092F0)
#define CLASS_2_A0580152EB393340_METHOD_2_34659C288538AEDA_OFFSET UNITYSDK_OFFSET(0x10C07920)
#define CLASS_2_A0580152EB393340_METHOD_2_38FB80E56E6C4C8C_OFFSET UNITYSDK_OFFSET(0x10C08E30)
#define CLASS_2_A0580152EB393340_METHOD_2_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x10C06520)
#define CLASS_2_A0580152EB393340_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x10C069B0)
#define CLASS_2_A0580152EB393340_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x10C0A900)
#define CLASS_2_A0580152EB393340_METHOD_2_3D56955897842181_OFFSET UNITYSDK_OFFSET(0x10C0B3E0)
#define CLASS_2_A0580152EB393340_METHOD_2_3D702B262944084D_OFFSET UNITYSDK_OFFSET(0x10C08C50)
#define CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x10C09730)
#define CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10C06F00)
#define CLASS_2_A0580152EB393340_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x10C07E50)
#define CLASS_2_A0580152EB393340_METHOD_2_51D0465D3FC7789C_OFFSET UNITYSDK_OFFSET(0x10C098F0)
#define CLASS_2_A0580152EB393340_METHOD_2_5410606B52C81899_OFFSET UNITYSDK_OFFSET(0x10C0B3D0)
#define CLASS_2_A0580152EB393340_METHOD_2_58116D77CFBAD3E0_OFFSET UNITYSDK_OFFSET(0x10C08F90)
#define CLASS_2_A0580152EB393340_METHOD_2_644E761D95D5A9BC_OFFSET UNITYSDK_OFFSET(0x10C0AA80)
#define CLASS_2_A0580152EB393340_METHOD_2_6516DD2B8C441001_OFFSET UNITYSDK_OFFSET(0x10C05A10)
#define CLASS_2_A0580152EB393340_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x10C09890)
#define CLASS_2_A0580152EB393340_METHOD_2_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x10C0A720)
#define CLASS_2_A0580152EB393340_METHOD_2_6DA6DD51F7F491D4_OFFSET UNITYSDK_OFFSET(0x10C0A1C0)
#define CLASS_2_A0580152EB393340_METHOD_2_73B9E33832504B16_OFFSET UNITYSDK_OFFSET(0x10C07F80)
#define CLASS_2_A0580152EB393340_METHOD_2_747947A491B7AA93_OFFSET UNITYSDK_OFFSET(0x10C04D10)
#define CLASS_2_A0580152EB393340_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x10C07520)
#define CLASS_2_A0580152EB393340_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x10C05970)
#define CLASS_2_A0580152EB393340_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10C05520)
#define CLASS_2_A0580152EB393340_METHOD_2_A02319FB48AA7F29_OFFSET UNITYSDK_OFFSET(0x10C08A70)
#define CLASS_2_A0580152EB393340_METHOD_2_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0x10C05C00)
#define CLASS_2_A0580152EB393340_METHOD_2_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x10C0B380)
#define CLASS_2_A0580152EB393340_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x10C08CA0)
#define CLASS_2_A0580152EB393340_METHOD_2_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x10C08D30)
#define CLASS_2_A0580152EB393340_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x10C08CE0)
#define CLASS_2_A0580152EB393340_METHOD_2_AA7A762739BFD11E_OFFSET UNITYSDK_OFFSET(0x10C0A350)
#define CLASS_2_A0580152EB393340_METHOD_2_AC007E8E6E26A525_OFFSET UNITYSDK_OFFSET(0x10C052D0)
#define CLASS_2_A0580152EB393340_METHOD_2_AD2945A54DE3574A_OFFSET UNITYSDK_OFFSET(0x10C058B0)
#define CLASS_2_A0580152EB393340_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x10C060A0)
#define CLASS_2_A0580152EB393340_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10C07490)
#define CLASS_2_A0580152EB393340_METHOD_2_B1978A17BDE3E154_OFFSET UNITYSDK_OFFSET(0x10C091D0)
#define CLASS_2_A0580152EB393340_METHOD_2_BD29A1CD2DE6386A_OFFSET UNITYSDK_OFFSET(0x10C0A500)
#define CLASS_2_A0580152EB393340_METHOD_2_C0D135BE64A6B4FC_OFFSET UNITYSDK_OFFSET(0x10C0ADB0)
#define CLASS_2_A0580152EB393340_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10C06FA0)
#define CLASS_2_A0580152EB393340_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10C06050)
#define CLASS_2_A0580152EB393340_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x10C08370)
#define CLASS_2_A0580152EB393340_METHOD_2_D676C42F88074189_OFFSET UNITYSDK_OFFSET(0x10C06C90)
#define CLASS_2_A0580152EB393340_METHOD_2_D68A3F49DE6AD22B_OFFSET UNITYSDK_OFFSET(0x10C08490)
#define CLASS_2_A0580152EB393340_METHOD_2_D8015F7FB1A275D9_OFFSET UNITYSDK_OFFSET(0x10C0AE40)
#define CLASS_2_A0580152EB393340_METHOD_2_DA48CBA6A38018C2_OFFSET UNITYSDK_OFFSET(0x10C04F20)
#define CLASS_2_A0580152EB393340_METHOD_2_E507EE4A464914B8_OFFSET UNITYSDK_OFFSET(0x10C07300)
#define CLASS_2_A0580152EB393340_METHOD_2_E62B151462A0F3AE_OFFSET UNITYSDK_OFFSET(0x10C09EC0)
#define CLASS_2_A0580152EB393340_METHOD_2_EAD10B3E55E2C4C5_1_OFFSET UNITYSDK_OFFSET(0x10C092A0)
#define CLASS_2_A0580152EB393340_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x10C05CB0)
#define CLASS_2_A0580152EB393340_METHOD_2_F5D8EDE5D8CB59C1_OFFSET UNITYSDK_OFFSET(0x10C07EC0)
#define CLASS_2_A0580152EB393340_METHOD_2_F87E03904BAC5F4C_OFFSET UNITYSDK_OFFSET(0x10C08BF0)
#define CLASS_2_A0580152EB393340_METHOD_2_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x10C06BB0)
#define CLASS_2_A0580152EB393340_METHOD_2_FD5C896A8885425D_OFFSET UNITYSDK_OFFSET(0x10C07700)
#define CLASS_2_A0580152EB393340_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x10C05430)
#define CLASS_2_A0580152EB393340_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x10C05480)
#define CLASS_2_A0580152EB393340_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x10C053B0)
#define CLASS_2_A0580152EB393340_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x10C053F0)
#define CLASS_2_A0580152EB393340_TICK_OFFSET UNITYSDK_OFFSET(0x10C07600)
#define CLASS_2_A0580152EB393340__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C0B520)
#define CLASS_2_A0580152EB393340__CTOR_OFFSET UNITYSDK_OFFSET(0x10C04F90)
#define CLASS_2_A0580152EB393340___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10C0B570)
#define CLASS_2_A0580152EB393340___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10C0B580)

inline static constexpr unsigned int Class_2_A0580152EB393340_TypeDefinitionIndex = 45989;

class Class_2_A0580152EB393340 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_A0580152EB393340*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_A0580152EB393340*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0580152EB393340_TypeDefinitionIndex)->GetStaticField(0x2C910);
	}
	static ::System::Int32* StaticGet_Field_2_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0580152EB393340_TypeDefinitionIndex)->GetStaticField(0xED20);
	}
	// static const ::UnityEngine::AI::ObstacleAvoidanceType Field_2_8; // 0x0
	// static const ::System::Single Field_2_15; // 0x0
	// static const ::System::Single Field_2_16; // 0x0
	// static const ::System::Single Field_2_17; // 0x0
	// static const ::System::Single Field_2_18; // 0x0
	// static const ::System::Single Field_2_19; // 0x0
	::UnityEngine::AI::NavMesh_OnNavMeshChanged* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_32; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_2_6; // 0x28
	::Class_1_43BD383C98B4C0C5_107* Field_2_9; // 0x30
	::RPG::GameCore::TransformComponent* Field_2_5; // 0x38
	::Class_1_DE10E55D67735639* Field_2_25; // 0x40
	::Class_0_16E4307DCC419505_21* Field_2_3; // 0x48
	::Class_1_4ADE0B0F695A887A* Field_2_12; // 0x50
	::Class_1_4ADE0B0F695A887A* Field_2_11; // 0x58
	::Class_2_6A3F10CE86B200DD* Field_2_7; // 0x60
	::System::Int32 Field_2_30; // 0x68
	::RPG::GameCore::AdvNavigationState Field_2_14; // 0x6C
	::Struct_2_6B303821F3B24153 Field_2_4; // 0x70
	::RPG::GameCore::ECharacterNavSteerMode Field_2_10; // 0x84
	::System::Single Field_2_27; // 0x88
	::System::Single Field_2_29; // 0x8C
	::System::Single Field_2_23; // 0x90
	::System::Single Field_2_28; // 0x94
	::System::Int32 Field_2_31; // 0x98
	::UnityEngine::Vector3 Field_2_21; // 0x9C
	::System::Single Field_2_22; // 0xA8
	::System::Boolean Field_2_2; // 0xAC
	::System::Boolean Field_2_13; // 0xAD
	::System::Boolean Field_2_26; // 0xAE
	::RPG::GameCore::CharacterMotionFlag Field_2_24; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340__CCTOR_OFFSET))();
	}

	static ::System::Void Method_2_747947A491B7AA93(::Il2CppArray<::RPG::GameCore::EntityType>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_747947A491B7AA93_OFFSET))(a1);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_AC007E8E6E26A525(::RPG::GameCore::TransformComponent* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_2_6A3F10CE86B200DD* a3, ::Class_0_16E4307DCC419505_21* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*, ::Class_2_6A3F10CE86B200DD*, ::Class_0_16E4307DCC419505_21*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_AC007E8E6E26A525_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_DISPOSE_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_LATEUPDATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ECharacterNavSteerMode Method_2_AD2945A54DE3574A()
	{
		return ((::RPG::GameCore::ECharacterNavSteerMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_AD2945A54DE3574A_OFFSET))(this);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Boolean Method_2_6516DD2B8C441001()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_6516DD2B8C441001_OFFSET))(this);
	}

	::System::Boolean Method_2_A0433AB55CC45192()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_A0433AB55CC45192_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_2_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_E507EE4A464914B8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_E507EE4A464914B8_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Void Method_2_1BCD32ABF860604C(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_1BCD32ABF860604C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5D8EDE5D8CB59C1(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_F5D8EDE5D8CB59C1_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_2_D676C42F88074189()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_D676C42F88074189_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_73B9E33832504B16()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_73B9E33832504B16_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_0DAA228ACF31C21A()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_0DAA228ACF31C21A_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_2_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_0F30679B05E70FC1_OFFSET))(this);
	}

	::System::Boolean Method_2_D68A3F49DE6AD22B(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_D68A3F49DE6AD22B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F87E03904BAC5F4C(::RPG::GameCore::CharacterMotionFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_F87E03904BAC5F4C_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterAdventureSomatoType Method_2_3D702B262944084D()
	{
		return ((::RPG::GameCore::CharacterAdventureSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_3D702B262944084D_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Single Method_2_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_FC5102551AF3CB1A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_0882BA2CA10E8E8E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_0882BA2CA10E8E8E_OFFSET))(this);
	}

	::System::Void Method_2_38FB80E56E6C4C8C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_38FB80E56E6C4C8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_DA48CBA6A38018C2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_DA48CBA6A38018C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Single Method_2_51D0465D3FC7789C(::UnityEngine::AI::NavMeshPath* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_51D0465D3FC7789C_OFFSET))(this, a1);
	}

	::RPG::GameCore::NavigationTestResult Method_2_1838890736712B14(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::AI::NavMeshPath*& a6, ::UnityEngine::AI::NavMeshHit& a7)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::AI::NavMeshPath*&, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_1838890736712B14_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::GameCore::NavigationTestResult Method_2_05E5A5B5975D0E15(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_05E5A5B5975D0E15_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::NavigationTestResult Method_2_E62B151462A0F3AE(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_E62B151462A0F3AE_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::NavigationTestResult Method_2_1C4B1503939035D7(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_1C4B1503939035D7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::NavigationTestResult Method_2_6DA6DD51F7F491D4(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Single& a5)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_6DA6DD51F7F491D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::NavigationTestResult Method_2_AA7A762739BFD11E(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Vector3>*& a5)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_AA7A762739BFD11E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_BD29A1CD2DE6386A(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_BD29A1CD2DE6386A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_193E00E83BC3E6E8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_193E00E83BC3E6E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FACBD27130A98A0(::RPG::GameCore::AdvNavigationFailReason a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_2FACBD27130A98A0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_2_054B8F7AF60506D5(::Class_1_43BD383C98B4C0C5_107* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_107*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_054B8F7AF60506D5_OFFSET))(this, a1);
	}

	::RPG::GameCore::NavigationTestResult Method_2_340C5261EF0A9C00()
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_340C5261EF0A9C00_OFFSET))(this);
	}

	::RPG::GameCore::NavigationTestResult Method_2_58116D77CFBAD3E0()
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_58116D77CFBAD3E0_OFFSET))(this);
	}

	::System::Boolean Method_2_644E761D95D5A9BC(::UnityEngine::AI::NavMeshLinkData a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshLinkData))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_644E761D95D5A9BC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_EAD10B3E55E2C4C5_1_OFFSET))(this);
	}

	::System::Void Method_2_6D44C03F490A953F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_6D44C03F490A953F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1978A17BDE3E154(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_B1978A17BDE3E154_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C0D135BE64A6B4FC(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_C0D135BE64A6B4FC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D8015F7FB1A275D9(::Class_1_43BD383C98B4C0C5_107* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_107*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_D8015F7FB1A275D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Boolean Method_2_FD5C896A8885425D(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_FD5C896A8885425D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_34659C288538AEDA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_34659C288538AEDA_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::Class_1_4ADE0B0F695A887A* Method_2_24748FC20F375725()
	{
		return ((::Class_1_4ADE0B0F695A887A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::RPG::GameCore::AdvNavigationState Method_2_5410606B52C81899()
	{
		return ((::RPG::GameCore::AdvNavigationState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_5410606B52C81899_OFFSET))(this);
	}

	::System::Single Method_2_A02319FB48AA7F29()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_A02319FB48AA7F29_OFFSET))(this);
	}

	::System::Single Method_2_3D56955897842181()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_3D56955897842181_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};

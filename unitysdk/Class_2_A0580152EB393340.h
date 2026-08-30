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
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkData.h"
#include "unitysdk/UnityEngine/AI/ObstacleAvoidanceType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_19;
class Class_1_43BD383C98B4C0C5_134;
class Class_1_4ADE0B0F695A887A;
class Class_1_DE10E55D67735639;
class Class_2_F400FB9D2D9DA921;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshChanged; }

#define CLASS_2_A0580152EB393340_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16ED8240)
#define CLASS_2_A0580152EB393340_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16ED8500)
#define CLASS_2_A0580152EB393340_METHOD_2_05E5A5B5975D0E15_OFFSET UNITYSDK_OFFSET(0x190F5FD0)
#define CLASS_2_A0580152EB393340_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x190F2BF0)
#define CLASS_2_A0580152EB393340_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x190F5AE0)
#define CLASS_2_A0580152EB393340_METHOD_2_0DAA228ACF31C21A_OFFSET UNITYSDK_OFFSET(0x190F42A0)
#define CLASS_2_A0580152EB393340_METHOD_2_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x190F74B0)
#define CLASS_2_A0580152EB393340_METHOD_2_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x190F4540)
#define CLASS_2_A0580152EB393340_METHOD_2_142905DE112182FB_OFFSET UNITYSDK_OFFSET(0x190F3970)
#define CLASS_2_A0580152EB393340_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x190F3DD0)
#define CLASS_2_A0580152EB393340_METHOD_2_1838890736712B14_OFFSET UNITYSDK_OFFSET(0x190F5C80)
#define CLASS_2_A0580152EB393340_METHOD_2_185023602BC2722E_OFFSET UNITYSDK_OFFSET(0x190F45F0)
#define CLASS_2_A0580152EB393340_METHOD_2_1C4B1503939035D7_OFFSET UNITYSDK_OFFSET(0x190F6280)
#define CLASS_2_A0580152EB393340_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x16ED7D30)
#define CLASS_2_A0580152EB393340_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x190F75D0)
#define CLASS_2_A0580152EB393340_METHOD_2_340C5261EF0A9C00_OFFSET UNITYSDK_OFFSET(0x190F5560)
#define CLASS_2_A0580152EB393340_METHOD_2_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0x16ED8E80)
#define CLASS_2_A0580152EB393340_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x190F28F0)
#define CLASS_2_A0580152EB393340_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x190F6D10)
#define CLASS_2_A0580152EB393340_METHOD_2_3D56955897842181_OFFSET UNITYSDK_OFFSET(0x190F75F0)
#define CLASS_2_A0580152EB393340_METHOD_2_3D702B262944084D_OFFSET UNITYSDK_OFFSET(0x190F4D60)
#define CLASS_2_A0580152EB393340_METHOD_2_42073E1316C51A78_OFFSET UNITYSDK_OFFSET(0x190F7250)
#define CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x190F5950)
#define CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x190F6AD0)
#define CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x190F2AE0)
#define CLASS_2_A0580152EB393340_METHOD_2_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x190F4F80)
#define CLASS_2_A0580152EB393340_METHOD_2_51D0465D3FC7789C_OFFSET UNITYSDK_OFFSET(0x190F5B40)
#define CLASS_2_A0580152EB393340_METHOD_2_5410606B52C81899_OFFSET UNITYSDK_OFFSET(0x190F75E0)
#define CLASS_2_A0580152EB393340_METHOD_2_58116D77CFBAD3E0_OFFSET UNITYSDK_OFFSET(0x190F5210)
#define CLASS_2_A0580152EB393340_METHOD_2_5E09064B833DA67A_OFFSET UNITYSDK_OFFSET(0x190F3340)
#define CLASS_2_A0580152EB393340_METHOD_2_63882E0318B95793_OFFSET UNITYSDK_OFFSET(0x190F6DE0)
#define CLASS_2_A0580152EB393340_METHOD_2_64483CCFC1FC1B2D_OFFSET UNITYSDK_OFFSET(0x190F3C80)
#define CLASS_2_A0580152EB393340_METHOD_2_644E761D95D5A9BC_OFFSET UNITYSDK_OFFSET(0x190F6E90)
#define CLASS_2_A0580152EB393340_METHOD_2_6516DD2B8C441001_OFFSET UNITYSDK_OFFSET(0x16ED86C0)
#define CLASS_2_A0580152EB393340_METHOD_2_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x190F6B30)
#define CLASS_2_A0580152EB393340_METHOD_2_6DA6DD51F7F491D4_OFFSET UNITYSDK_OFFSET(0x190F6410)
#define CLASS_2_A0580152EB393340_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x190F30F0)
#define CLASS_2_A0580152EB393340_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x16ED8620)
#define CLASS_2_A0580152EB393340_METHOD_2_8E88A87544A2E409_OFFSET UNITYSDK_OFFSET(0x190F5030)
#define CLASS_2_A0580152EB393340_METHOD_2_9D323B57C6199F8A_OFFSET UNITYSDK_OFFSET(0x16ED7950)
#define CLASS_2_A0580152EB393340_METHOD_2_9E380911998A73AF_OFFSET UNITYSDK_OFFSET(0x190F3580)
#define CLASS_2_A0580152EB393340_METHOD_2_A02319FB48AA7F29_OFFSET UNITYSDK_OFFSET(0x190F4B00)
#define CLASS_2_A0580152EB393340_METHOD_2_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0x16ED88B0)
#define CLASS_2_A0580152EB393340_METHOD_2_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x190F7580)
#define CLASS_2_A0580152EB393340_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x190F4DB0)
#define CLASS_2_A0580152EB393340_METHOD_2_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x190F4E50)
#define CLASS_2_A0580152EB393340_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x190F4E00)
#define CLASS_2_A0580152EB393340_METHOD_2_AA7A762739BFD11E_OFFSET UNITYSDK_OFFSET(0x190F65A0)
#define CLASS_2_A0580152EB393340_METHOD_2_AC007E8E6E26A525_OFFSET UNITYSDK_OFFSET(0x16ED8000)
#define CLASS_2_A0580152EB393340_METHOD_2_AD2945A54DE3574A_OFFSET UNITYSDK_OFFSET(0x16ED8560)
#define CLASS_2_A0580152EB393340_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x16ED8A00)
#define CLASS_2_A0580152EB393340_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x190F59E0)
#define CLASS_2_A0580152EB393340_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x190F3060)
#define CLASS_2_A0580152EB393340_METHOD_2_B1978A17BDE3E154_OFFSET UNITYSDK_OFFSET(0x190F5440)
#define CLASS_2_A0580152EB393340_METHOD_2_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0x190F5A70)
#define CLASS_2_A0580152EB393340_METHOD_2_BD29A1CD2DE6386A_OFFSET UNITYSDK_OFFSET(0x190F6750)
#define CLASS_2_A0580152EB393340_METHOD_2_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x190F6840)
#define CLASS_2_A0580152EB393340_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x190F2B70)
#define CLASS_2_A0580152EB393340_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16ED89B0)
#define CLASS_2_A0580152EB393340_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x190F44D0)
#define CLASS_2_A0580152EB393340_METHOD_2_D676C42F88074189_OFFSET UNITYSDK_OFFSET(0x190F3F50)
#define CLASS_2_A0580152EB393340_METHOD_2_DC5677DF2CB8DC3B_OFFSET UNITYSDK_OFFSET(0x190F71C0)
#define CLASS_2_A0580152EB393340_METHOD_2_E507EE4A464914B8_OFFSET UNITYSDK_OFFSET(0x190F2ED0)
#define CLASS_2_A0580152EB393340_METHOD_2_E62B151462A0F3AE_OFFSET UNITYSDK_OFFSET(0x190F6110)
#define CLASS_2_A0580152EB393340_METHOD_2_F0D9B6AAFF504D87_1_OFFSET UNITYSDK_OFFSET(0x190F5510)
#define CLASS_2_A0580152EB393340_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x16ED8960)
#define CLASS_2_A0580152EB393340_METHOD_2_F28D02EBE7FA63C3_OFFSET UNITYSDK_OFFSET(0x190F41B0)
#define CLASS_2_A0580152EB393340_METHOD_2_F5D8EDE5D8CB59C1_OFFSET UNITYSDK_OFFSET(0x190F3E90)
#define CLASS_2_A0580152EB393340_METHOD_2_F87E03904BAC5F4C_OFFSET UNITYSDK_OFFSET(0x190F4D00)
#define CLASS_2_A0580152EB393340_METHOD_2_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x190F4EA0)
#define CLASS_2_A0580152EB393340_METHOD_2_FF1646EECB7EE5A5_OFFSET UNITYSDK_OFFSET(0x190F68C0)
#define CLASS_2_A0580152EB393340_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x16ED8170)
#define CLASS_2_A0580152EB393340_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x16ED81C0)
#define CLASS_2_A0580152EB393340_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x16ED80F0)
#define CLASS_2_A0580152EB393340_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x16ED8130)
#define CLASS_2_A0580152EB393340_TICK_OFFSET UNITYSDK_OFFSET(0x190F31D0)
#define CLASS_2_A0580152EB393340__CCTOR_OFFSET UNITYSDK_OFFSET(0x190F7790)
#define CLASS_2_A0580152EB393340__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED7B80)

inline static constexpr unsigned int Class_2_A0580152EB393340_TypeDefinitionIndex = 57286;

class Class_2_A0580152EB393340 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_A0580152EB393340*>** StaticGet_HGJOJMFDHEF()
	{
		return (::System::Collections::Generic::List_1<::Class_2_A0580152EB393340*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0580152EB393340_TypeDefinitionIndex)->GetStaticField(0x12AA0);
	}
	static ::System::Int32* StaticGet_FJLJNDHGFCD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0580152EB393340_TypeDefinitionIndex)->GetStaticField(0x7A60);
	}
	// static const ::UnityEngine::AI::ObstacleAvoidanceType MMLFINFDHPH; // 0x0
	// static const ::System::Single OIGGCKCIPJB; // 0x0
	// static const ::System::Single FIBBGJJKBIG; // 0x0
	// static const ::System::Single PIDFNFEKIOL; // 0x0
	// static const ::System::Single HICMKEJEHIN; // 0x0
	// static const ::System::Single PLBPGJCFKIM; // 0x0
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
	::Class_1_4ADE0B0F695A887A* FBCJIDGPCIL; // 0x20
	::UnityEngine::AI::NavMesh_OnNavMeshChanged* KGJKGLMOANO; // 0x28
	::Class_2_F400FB9D2D9DA921* HNHCPOJKNCC; // 0x30
	::Class_0_16E4307DCC419505_19* PPANINAEOFD; // 0x38
	::Class_1_DE10E55D67735639* OHBPFHNHEBB; // 0x40
	::Class_1_43BD383C98B4C0C5_134* BFGMODICHLM; // 0x48
	::Class_1_4ADE0B0F695A887A* OFNGHACAOAD; // 0x50
	::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IPJLCGNLILH; // 0x60
	::RPG::GameCore::AdvNavigationState FPIHDGPCHPK; // 0x68
	::RPG::GameCore::CharacterMotionFlag ODBOHHKMIDP; // 0x6C
	::System::Single DFPEINKOAHA; // 0x70
	::RPG::GameCore::ECharacterNavSteerMode CCNJHMNCEMG; // 0x74
	::System::Int32 CJJBNKNPKCN; // 0x78
	::System::Single FMKEEOMABEM; // 0x7C
	::System::Single JLBJLGNBANG; // 0x80
	::System::Single AAADIJCNIIP; // 0x84
	::Struct_2_6B303821F3B24153 PHKFGKFFKGJ; // 0x88
	::UnityEngine::Vector3 EJLANOFJIHB; // 0x9C
	::System::Single ECEHEPMBAMA; // 0xA8
	::System::Int32 EOHMFNMADEJ; // 0xAC
	::System::Boolean NKCJFCIMKGF; // 0xB0
	::System::Boolean MPBNCDPBPOF; // 0xB1
	::System::Boolean KKGBJILEFGH; // 0xB2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340__CCTOR_OFFSET))();
	}

	static ::System::Void Method_2_9D323B57C6199F8A(::Il2CppArray<::RPG::GameCore::EntityType>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_9D323B57C6199F8A_OFFSET))(a1);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_AC007E8E6E26A525(::RPG::GameCore::TransformComponent* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_2_F400FB9D2D9DA921* a3, ::Class_0_16E4307DCC419505_19* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*, ::Class_2_F400FB9D2D9DA921*, ::Class_0_16E4307DCC419505_19*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_AC007E8E6E26A525_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_2_364E91940C737CC9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_364E91940C737CC9_OFFSET))(this);
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

	::System::Void Method_2_64483CCFC1FC1B2D(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_64483CCFC1FC1B2D_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5D8EDE5D8CB59C1(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_F5D8EDE5D8CB59C1_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_2_D676C42F88074189()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_D676C42F88074189_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_F28D02EBE7FA63C3()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_F28D02EBE7FA63C3_OFFSET))(this);
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

	::System::Boolean Method_2_185023602BC2722E(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_185023602BC2722E_OFFSET))(this, a1);
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

	::UnityEngine::Vector3 Method_2_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_4AB9012B5D01108B_OFFSET))(this);
	}

	::System::Void Method_2_8E88A87544A2E409(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_8E88A87544A2E409_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_2_B8A8F4F120B2F6D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_B8A8F4F120B2F6D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_092CD57850778EFC_OFFSET))(this);
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

	::System::Boolean Method_2_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FF1646EECB7EE5A5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Nullable_1<::System::Single> a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_FF1646EECB7EE5A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_142905DE112182FB(::RPG::GameCore::AdvNavigationFailReason a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_142905DE112182FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_2_63882E0318B95793(::Class_1_43BD383C98B4C0C5_134* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_134*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_63882E0318B95793_OFFSET))(this, a1);
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

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_F0D9B6AAFF504D87_1_OFFSET))(this);
	}

	::System::Void Method_2_6D44C03F490A953F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_6D44C03F490A953F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1978A17BDE3E154(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_B1978A17BDE3E154_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DC5677DF2CB8DC3B(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_DC5677DF2CB8DC3B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_42073E1316C51A78(::Class_1_43BD383C98B4C0C5_134* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_134*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_42073E1316C51A78_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Boolean Method_2_5E09064B833DA67A(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_5E09064B833DA67A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9E380911998A73AF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_9E380911998A73AF_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_2_OFFSET))(this);
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
};

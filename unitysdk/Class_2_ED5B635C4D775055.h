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
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_19;
class Class_1_43BD383C98B4C0C5_126;
class Class_1_4ADE0B0F695A887A;
class Class_1_DE10E55D67735639;
class Class_2_F400FB9D2D9DA921;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshChanged; }

#define CLASS_2_ED5B635C4D775055_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158F5B50)
#define CLASS_2_ED5B635C4D775055_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x158F5EB0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_036D08AA2A3A808E_OFFSET UNITYSDK_OFFSET(0x158F9D20)
#define CLASS_2_ED5B635C4D775055_METHOD_2_05E5A5B5975D0E15_OFFSET UNITYSDK_OFFSET(0x158FAC50)
#define CLASS_2_ED5B635C4D775055_METHOD_2_08342EB1D586AE2D_OFFSET UNITYSDK_OFFSET(0x158FBDE0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_0882BA2CA10E8E8E_OFFSET UNITYSDK_OFFSET(0x158F99C0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x158F79E0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_094ABB1C696FE6C4_OFFSET UNITYSDK_OFFSET(0x158FDB50)
#define CLASS_2_ED5B635C4D775055_METHOD_2_0DAA228ACF31C21A_OFFSET UNITYSDK_OFFSET(0x158F8BE0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x158FCB50)
#define CLASS_2_ED5B635C4D775055_METHOD_2_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x158F8E80)
#define CLASS_2_ED5B635C4D775055_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x158F9500)
#define CLASS_2_ED5B635C4D775055_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x158F88B0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_185023602BC2722E_OFFSET UNITYSDK_OFFSET(0x158F8F30)
#define CLASS_2_ED5B635C4D775055_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x158F7370)
#define CLASS_2_ED5B635C4D775055_METHOD_2_1C4B1503939035D7_OFFSET UNITYSDK_OFFSET(0x158FAF00)
#define CLASS_2_ED5B635C4D775055_METHOD_2_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x158FD280)
#define CLASS_2_ED5B635C4D775055_METHOD_2_2256BDD0D049C92E_OFFSET UNITYSDK_OFFSET(0x158D66B0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x158F55D0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x158FDB30)
#define CLASS_2_ED5B635C4D775055_METHOD_2_29D3471F269E3CC3_OFFSET UNITYSDK_OFFSET(0x158FBD20)
#define CLASS_2_ED5B635C4D775055_METHOD_2_303D3AEC876F84B2_OFFSET UNITYSDK_OFFSET(0x158F97C0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0x158F6D50)
#define CLASS_2_ED5B635C4D775055_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x158FBC50)
#define CLASS_2_ED5B635C4D775055_METHOD_2_3D702B262944084D_OFFSET UNITYSDK_OFFSET(0x158F9880)
#define CLASS_2_ED5B635C4D775055_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x158FBA20)
#define CLASS_2_ED5B635C4D775055_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x158F5AF0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x158FA530)
#define CLASS_2_ED5B635C4D775055_METHOD_2_440941AF69C61B1E_OFFSET UNITYSDK_OFFSET(0x158F9560)
#define CLASS_2_ED5B635C4D775055_METHOD_2_4D851AEC7175AA9E_OFFSET UNITYSDK_OFFSET(0x158FD120)
#define CLASS_2_ED5B635C4D775055_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x158F6A20)
#define CLASS_2_ED5B635C4D775055_METHOD_2_51D0465D3FC7789C_OFFSET UNITYSDK_OFFSET(0x158FA6B0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_53FE0834C358925A_OFFSET UNITYSDK_OFFSET(0x158FCC20)
#define CLASS_2_ED5B635C4D775055_METHOD_2_5410606B52C81899_OFFSET UNITYSDK_OFFSET(0x158FDB40)
#define CLASS_2_ED5B635C4D775055_METHOD_2_594E00A456993933_OFFSET UNITYSDK_OFFSET(0x158FC8D0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_5E09064B833DA67A_OFFSET UNITYSDK_OFFSET(0x158F8110)
#define CLASS_2_ED5B635C4D775055_METHOD_2_6238703CCE79C433_OFFSET UNITYSDK_OFFSET(0x158FD910)
#define CLASS_2_ED5B635C4D775055_METHOD_2_64483CCFC1FC1B2D_OFFSET UNITYSDK_OFFSET(0x158F8760)
#define CLASS_2_ED5B635C4D775055_METHOD_2_644E761D95D5A9BC_OFFSET UNITYSDK_OFFSET(0x158FC0D0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x158FBA70)
#define CLASS_2_ED5B635C4D775055_METHOD_2_6DA6DD51F7F491D4_OFFSET UNITYSDK_OFFSET(0x158FB090)
#define CLASS_2_ED5B635C4D775055_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x158F7EF0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_73B9E33832504B16_OFFSET UNITYSDK_OFFSET(0x158F8A30)
#define CLASS_2_ED5B635C4D775055_METHOD_2_796938E83AB64D1E_OFFSET UNITYSDK_OFFSET(0x158FC410)
#define CLASS_2_ED5B635C4D775055_METHOD_2_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x158FCEE0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x158F6CC0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_8542E37E74FDE1B5_1_OFFSET UNITYSDK_OFFSET(0x158FA4E0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x158F63D0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x158F5F80)
#define CLASS_2_ED5B635C4D775055_METHOD_2_864586BF0D74C75B_OFFSET UNITYSDK_OFFSET(0x158FB750)
#define CLASS_2_ED5B635C4D775055_METHOD_2_8E88A87544A2E409_OFFSET UNITYSDK_OFFSET(0x158F9A70)
#define CLASS_2_ED5B635C4D775055_METHOD_2_92B2251BA4FA1C2A_OFFSET UNITYSDK_OFFSET(0x158F5F10)
#define CLASS_2_ED5B635C4D775055_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x158F7890)
#define CLASS_2_ED5B635C4D775055_METHOD_2_9D323B57C6199F8A_OFFSET UNITYSDK_OFFSET(0x158F5110)
#define CLASS_2_ED5B635C4D775055_METHOD_2_9E380911998A73AF_OFFSET UNITYSDK_OFFSET(0x158F8370)
#define CLASS_2_ED5B635C4D775055_METHOD_2_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0x158F6320)
#define CLASS_2_ED5B635C4D775055_METHOD_2_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x158FDAE0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x158F98D0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x158F71F0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x158F9970)
#define CLASS_2_ED5B635C4D775055_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x158F9920)
#define CLASS_2_ED5B635C4D775055_METHOD_2_A3CD8010EE7E2C0B_OFFSET UNITYSDK_OFFSET(0x158FD0A0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_A829F3B362709F9B_OFFSET UNITYSDK_OFFSET(0x158FAA80)
#define CLASS_2_ED5B635C4D775055_METHOD_2_AA7A762739BFD11E_OFFSET UNITYSDK_OFFSET(0x158FB220)
#define CLASS_2_ED5B635C4D775055_METHOD_2_AC007E8E6E26A525_OFFSET UNITYSDK_OFFSET(0x158F58A0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_AF42CBA83D36B86A_OFFSET UNITYSDK_OFFSET(0x158FA240)
#define CLASS_2_ED5B635C4D775055_METHOD_2_B03F6D31318CC2B8_OFFSET UNITYSDK_OFFSET(0x158FCCB0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_B0DD3084278802DD_OFFSET UNITYSDK_OFFSET(0x158FD7B0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_B0EC8610C01D2511_OFFSET UNITYSDK_OFFSET(0x158FD600)
#define CLASS_2_ED5B635C4D775055_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x158FA5C0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x158F7E60)
#define CLASS_2_ED5B635C4D775055_METHOD_2_B1978A17BDE3E154_OFFSET UNITYSDK_OFFSET(0x158FA400)
#define CLASS_2_ED5B635C4D775055_METHOD_2_B5CA07811A0FF93E_OFFSET UNITYSDK_OFFSET(0x158F6020)
#define CLASS_2_ED5B635C4D775055_METHOD_2_BD29A1CD2DE6386A_OFFSET UNITYSDK_OFFSET(0x158FB3D0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x158FB4C0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x158F7960)
#define CLASS_2_ED5B635C4D775055_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x158F5E60)
#define CLASS_2_ED5B635C4D775055_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x158F69D0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x158F8E10)
#define CLASS_2_ED5B635C4D775055_METHOD_2_D676C42F88074189_OFFSET UNITYSDK_OFFSET(0x158F7620)
#define CLASS_2_ED5B635C4D775055_METHOD_2_E507EE4A464914B8_OFFSET UNITYSDK_OFFSET(0x158F7CC0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_E62B151462A0F3AE_OFFSET UNITYSDK_OFFSET(0x158FAD90)
#define CLASS_2_ED5B635C4D775055_METHOD_2_F5D8EDE5D8CB59C1_OFFSET UNITYSDK_OFFSET(0x158F8970)
#define CLASS_2_ED5B635C4D775055_METHOD_2_F7AB669F3AA36D06_OFFSET UNITYSDK_OFFSET(0x158FA7F0)
#define CLASS_2_ED5B635C4D775055_METHOD_2_F87E03904BAC5F4C_OFFSET UNITYSDK_OFFSET(0x158F9820)
#define CLASS_2_ED5B635C4D775055_METHOD_2_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x158F7540)
#define CLASS_2_ED5B635C4D775055_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x158FA650)
#define CLASS_2_ED5B635C4D775055_METHOD_2_FF1646EECB7EE5A5_OFFSET UNITYSDK_OFFSET(0x158FB540)
#define CLASS_2_ED5B635C4D775055_METHOD_2_FFBA947485BBAA25_OFFSET UNITYSDK_OFFSET(0x158F6420)
#define CLASS_2_ED5B635C4D775055_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x158F5A10)
#define CLASS_2_ED5B635C4D775055_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x158F5A60)
#define CLASS_2_ED5B635C4D775055_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x158F5990)
#define CLASS_2_ED5B635C4D775055_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x158F59D0)
#define CLASS_2_ED5B635C4D775055_TICK_OFFSET UNITYSDK_OFFSET(0x158F8010)
#define CLASS_2_ED5B635C4D775055__CCTOR_OFFSET UNITYSDK_OFFSET(0x158FDD60)
#define CLASS_2_ED5B635C4D775055__CTOR_OFFSET UNITYSDK_OFFSET(0x158F5340)

inline static constexpr unsigned int Class_2_ED5B635C4D775055_TypeDefinitionIndex = 57121;

class Class_2_ED5B635C4D775055 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_ED5B635C4D775055*>** StaticGet_HGJOJMFDHEF()
	{
		return (::System::Collections::Generic::List_1<::Class_2_ED5B635C4D775055*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED5B635C4D775055_TypeDefinitionIndex)->GetStaticField(0x46C20);
	}
	static ::System::Int32* StaticGet_FJLJNDHGFCD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED5B635C4D775055_TypeDefinitionIndex)->GetStaticField(0x10930);
	}
	// static const ::UnityEngine::AI::ObstacleAvoidanceType MMLFINFDHPH; // 0x0
	// static const ::System::Single OIGGCKCIPJB; // 0x0
	// static const ::System::Single FIBBGJJKBIG; // 0x0
	// static const ::System::Single PIDFNFEKIOL; // 0x0
	// static const ::System::Single HICMKEJEHIN; // 0x0
	// static const ::System::Single PLBPGJCFKIM; // 0x0
	::UnityEngine::AI::NavMesh_OnNavMeshChanged* KGJKGLMOANO; // 0x18
	::System::Action_1<::UnityEngine::AsyncOperation*>* JBJPANPDJMF; // 0x20
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28
	::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x30
	::Class_2_F400FB9D2D9DA921* HNHCPOJKNCC; // 0x38
	::Class_1_DE10E55D67735639* OHBPFHNHEBB; // 0x40
	::Class_1_43BD383C98B4C0C5_126* BFGMODICHLM; // 0x48
	::Class_1_4ADE0B0F695A887A* FBCJIDGPCIL; // 0x50
	::Class_0_16E4307DCC419505_19* PPANINAEOFD; // 0x58
	::Class_1_4ADE0B0F695A887A* OFNGHACAOAD; // 0x60
	::System::Collections::Generic::Dictionary_2<::UnityEngine::AsyncOperation*, ::UnityEngine::AI::NavMeshPath*>* FBNNEBOGJPO; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IPJLCGNLILH; // 0x70
	::UnityEngine::AsyncOperation* FFKAGEFOIIP; // 0x78
	::System::Single FMKEEOMABEM; // 0x80
	::System::Int32 CJJBNKNPKCN; // 0x84
	::System::Boolean MBPJDDKBDLP; // 0x88
	::System::Boolean MPBNCDPBPOF; // 0x89
	::System::Boolean PHKBEKACIJN; // 0x8A
	::System::Boolean NFJJMHEGHGO; // 0x8B
	::Struct_2_6B303821F3B24153 PHKFGKFFKGJ; // 0x8C
	::UnityEngine::Quaternion GFCOBGIDJKI; // 0xA0
	::System::Single AAADIJCNIIP; // 0xB0
	::UnityEngine::Vector3 AJHKAJHLJGA; // 0xB4
	::RPG::GameCore::CharacterMotionFlag ODBOHHKMIDP; // 0xC0
	::System::Single DFPEINKOAHA; // 0xC4
	::System::Single ECEHEPMBAMA; // 0xC8
	::UnityEngine::Vector3 GNHNBBJNNNN; // 0xCC
	::System::Int32 EOHMFNMADEJ; // 0xD8
	::RPG::GameCore::CharacterMotionFlag HIHLFJHKMIK; // 0xDC
	::System::Single JLBJLGNBANG; // 0xE0
	::RPG::GameCore::ECharacterNavSteerMode CCNJHMNCEMG; // 0xE4
	::UnityEngine::Vector3 EJLANOFJIHB; // 0xE8
	::RPG::GameCore::AdvNavigationState FPIHDGPCHPK; // 0xF4
	::System::Boolean KKGBJILEFGH; // 0xF8
	::System::Boolean MOLBEAACNKF; // 0xF9
	::System::Boolean NKCJFCIMKGF; // 0xFA
	::System::Boolean PHHDBCGAOBO; // 0xFB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055__CCTOR_OFFSET))();
	}

	static ::System::Void Method_2_9D323B57C6199F8A(::Il2CppArray<::RPG::GameCore::EntityType>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_9D323B57C6199F8A_OFFSET))(a1);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_AC007E8E6E26A525(::RPG::GameCore::TransformComponent* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_2_F400FB9D2D9DA921* a3, ::Class_0_16E4307DCC419505_19* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*, ::Class_2_F400FB9D2D9DA921*, ::Class_0_16E4307DCC419505_19*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_AC007E8E6E26A525_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_DISPOSE_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_LATEUPDATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ECharacterNavSteerMode Method_2_92B2251BA4FA1C2A()
	{
		return ((::RPG::GameCore::ECharacterNavSteerMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_92B2251BA4FA1C2A_OFFSET))(this);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Boolean Method_2_B5CA07811A0FF93E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_B5CA07811A0FF93E_OFFSET))(this);
	}

	::System::Boolean Method_2_A0433AB55CC45192()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_A0433AB55CC45192_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_2_364E91940C737CC9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_364E91940C737CC9_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_E507EE4A464914B8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_E507EE4A464914B8_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Void Method_2_64483CCFC1FC1B2D(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_64483CCFC1FC1B2D_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5D8EDE5D8CB59C1(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_F5D8EDE5D8CB59C1_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_2_D676C42F88074189()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_D676C42F88074189_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_73B9E33832504B16()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_73B9E33832504B16_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_0DAA228ACF31C21A()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_0DAA228ACF31C21A_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_2_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_0F30679B05E70FC1_OFFSET))(this);
	}

	::System::Boolean Method_2_185023602BC2722E(::RPG::GameCore::CharacterInputData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_185023602BC2722E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_303D3AEC876F84B2(::Class_1_43BD383C98B4C0C5_126* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_126*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_303D3AEC876F84B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F87E03904BAC5F4C(::RPG::GameCore::CharacterMotionFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_F87E03904BAC5F4C_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterAdventureSomatoType Method_2_3D702B262944084D()
	{
		return ((::RPG::GameCore::CharacterAdventureSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_3D702B262944084D_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Single Method_2_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_FC5102551AF3CB1A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_0882BA2CA10E8E8E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_0882BA2CA10E8E8E_OFFSET))(this);
	}

	::System::Void Method_2_8E88A87544A2E409(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_8E88A87544A2E409_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_2_2256BDD0D049C92E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_2256BDD0D049C92E_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Single Method_2_51D0465D3FC7789C(::UnityEngine::AI::NavMeshPath* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_51D0465D3FC7789C_OFFSET))(this, a1);
	}

	::RPG::GameCore::NavigationTestResult Method_2_F7AB669F3AA36D06(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::AI::NavMeshPath*& a6, ::UnityEngine::AI::NavMeshHit& a7)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::AI::NavMeshPath*&, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_F7AB669F3AA36D06_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::GameCore::NavigationTestResult Method_2_A829F3B362709F9B(::UnityEngine::AI::NavMeshPath* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_A829F3B362709F9B_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::NavigationTestResult Method_2_05E5A5B5975D0E15(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_05E5A5B5975D0E15_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::NavigationTestResult Method_2_E62B151462A0F3AE(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_E62B151462A0F3AE_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::NavigationTestResult Method_2_1C4B1503939035D7(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_1C4B1503939035D7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::NavigationTestResult Method_2_6DA6DD51F7F491D4(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Single& a5)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_6DA6DD51F7F491D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::NavigationTestResult Method_2_AA7A762739BFD11E(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Vector3>*& a5)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_AA7A762739BFD11E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_BD29A1CD2DE6386A(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_BD29A1CD2DE6386A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FF1646EECB7EE5A5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Nullable_1<::System::Single> a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_FF1646EECB7EE5A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_864586BF0D74C75B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_864586BF0D74C75B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FFBA947485BBAA25(::RPG::GameCore::AdvNavigationFailReason a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_FFBA947485BBAA25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Void Method_2_29D3471F269E3CC3(::Class_1_43BD383C98B4C0C5_126* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_126*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_29D3471F269E3CC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::RPG::GameCore::NavigationTestResult Method_2_AF42CBA83D36B86A(::System::Boolean a1)
	{
		return ((::RPG::GameCore::NavigationTestResult(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_AF42CBA83D36B86A_OFFSET))(this, a1);
	}

	::System::Void Method_2_08342EB1D586AE2D(::UnityEngine::AI::NavMeshPath* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_08342EB1D586AE2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_036D08AA2A3A808E(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_036D08AA2A3A808E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_796938E83AB64D1E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_796938E83AB64D1E_OFFSET))(this);
	}

	::System::Int32 Method_2_594E00A456993933(::Class_1_4ADE0B0F695A887A* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_4ADE0B0F695A887A*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_594E00A456993933_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_644E761D95D5A9BC(::UnityEngine::AI::NavMeshLinkData a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshLinkData))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_644E761D95D5A9BC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_8542E37E74FDE1B5_1_OFFSET))(this);
	}

	::System::Void Method_2_6D44C03F490A953F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_6D44C03F490A953F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1978A17BDE3E154(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_B1978A17BDE3E154_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_53FE0834C358925A(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_53FE0834C358925A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B03F6D31318CC2B8(::Class_1_43BD383C98B4C0C5_126* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_126*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_B03F6D31318CC2B8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8073A3C8BD4F2EE0(::Class_1_43BD383C98B4C0C5_126* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_126*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A3CD8010EE7E2C0B(::Class_1_43BD383C98B4C0C5_126* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_126*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_A3CD8010EE7E2C0B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4D851AEC7175AA9E(::Class_1_43BD383C98B4C0C5_126* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_126*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_4D851AEC7175AA9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B0EC8610C01D2511(::UnityEngine::Quaternion a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_B0EC8610C01D2511_OFFSET))(this, a1);
	}

	::System::Void Method_2_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_2_B0DD3084278802DD(::UnityEngine::AsyncOperation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_B0DD3084278802DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_6238703CCE79C433(::UnityEngine::AI::NavMeshPath* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_6238703CCE79C433_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean Method_2_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Boolean Method_2_5E09064B833DA67A(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_5E09064B833DA67A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9E380911998A73AF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_9E380911998A73AF_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::Class_1_4ADE0B0F695A887A* Method_2_24748FC20F375725()
	{
		return ((::Class_1_4ADE0B0F695A887A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::RPG::GameCore::AdvNavigationState Method_2_5410606B52C81899()
	{
		return ((::RPG::GameCore::AdvNavigationState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_5410606B52C81899_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Single Method_2_440941AF69C61B1E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_440941AF69C61B1E_OFFSET))(this);
	}

	::System::Single Method_2_094ABB1C696FE6C4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055_METHOD_2_094ABB1C696FE6C4_OFFSET))(this);
	}
};

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

class Class_0_16E4307DCC419505_17;
class Class_1_43BD383C98B4C0C5_121;
class Class_1_4ADE0B0F695A887A;
class Class_1_DE10E55D67735639;
class Class_2_6A3F10CE86B200DD;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshChanged; }

#define CLASS_2_A0580152EB393340_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138090E0)
#define CLASS_2_A0580152EB393340_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x138093A0)
#define CLASS_2_A0580152EB393340_METHOD_2_05E5A5B5975D0E15_OFFSET UNITYSDK_OFFSET(0x1380D8E0)
#define CLASS_2_A0580152EB393340_METHOD_2_0882BA2CA10E8E8E_OFFSET UNITYSDK_OFFSET(0x1380C900)
#define CLASS_2_A0580152EB393340_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x1380ABD0)
#define CLASS_2_A0580152EB393340_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x1380D3F0)
#define CLASS_2_A0580152EB393340_METHOD_2_0DAA228ACF31C21A_OFFSET UNITYSDK_OFFSET(0x1380BD50)
#define CLASS_2_A0580152EB393340_METHOD_2_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x1380ED60)
#define CLASS_2_A0580152EB393340_METHOD_2_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x1380BFF0)
#define CLASS_2_A0580152EB393340_METHOD_2_142905DE112182FB_OFFSET UNITYSDK_OFFSET(0x13809850)
#define CLASS_2_A0580152EB393340_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1380BA20)
#define CLASS_2_A0580152EB393340_METHOD_2_1838890736712B14_OFFSET UNITYSDK_OFFSET(0x1380D590)
#define CLASS_2_A0580152EB393340_METHOD_2_185023602BC2722E_OFFSET UNITYSDK_OFFSET(0x1380C0A0)
#define CLASS_2_A0580152EB393340_METHOD_2_1C4B1503939035D7_OFFSET UNITYSDK_OFFSET(0x1380DB90)
#define CLASS_2_A0580152EB393340_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x13808BF0)
#define CLASS_2_A0580152EB393340_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1380EE80)
#define CLASS_2_A0580152EB393340_METHOD_2_340C5261EF0A9C00_OFFSET UNITYSDK_OFFSET(0x1380CEE0)
#define CLASS_2_A0580152EB393340_METHOD_2_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0x1380A030)
#define CLASS_2_A0580152EB393340_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x1380A590)
#define CLASS_2_A0580152EB393340_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x1380E5C0)
#define CLASS_2_A0580152EB393340_METHOD_2_3D56955897842181_OFFSET UNITYSDK_OFFSET(0x1380EEA0)
#define CLASS_2_A0580152EB393340_METHOD_2_3D702B262944084D_OFFSET UNITYSDK_OFFSET(0x1380C7C0)
#define CLASS_2_A0580152EB393340_METHOD_2_42073E1316C51A78_OFFSET UNITYSDK_OFFSET(0x1380EB00)
#define CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1380D2D0)
#define CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x13809070)
#define CLASS_2_A0580152EB393340_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1380AAC0)
#define CLASS_2_A0580152EB393340_METHOD_2_51D0465D3FC7789C_OFFSET UNITYSDK_OFFSET(0x1380D450)
#define CLASS_2_A0580152EB393340_METHOD_2_5410606B52C81899_OFFSET UNITYSDK_OFFSET(0x1380EE90)
#define CLASS_2_A0580152EB393340_METHOD_2_58116D77CFBAD3E0_OFFSET UNITYSDK_OFFSET(0x1380CB90)
#define CLASS_2_A0580152EB393340_METHOD_2_5E09064B833DA67A_OFFSET UNITYSDK_OFFSET(0x1380B2B0)
#define CLASS_2_A0580152EB393340_METHOD_2_64483CCFC1FC1B2D_OFFSET UNITYSDK_OFFSET(0x1380B8D0)
#define CLASS_2_A0580152EB393340_METHOD_2_644E761D95D5A9BC_OFFSET UNITYSDK_OFFSET(0x1380E740)
#define CLASS_2_A0580152EB393340_METHOD_2_6516DD2B8C441001_OFFSET UNITYSDK_OFFSET(0x13809560)
#define CLASS_2_A0580152EB393340_METHOD_2_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x1380E3E0)
#define CLASS_2_A0580152EB393340_METHOD_2_6DA6DD51F7F491D4_OFFSET UNITYSDK_OFFSET(0x1380DD20)
#define CLASS_2_A0580152EB393340_METHOD_2_73B9E33832504B16_OFFSET UNITYSDK_OFFSET(0x1380BBA0)
#define CLASS_2_A0580152EB393340_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1380B0D0)
#define CLASS_2_A0580152EB393340_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x138094C0)
#define CLASS_2_A0580152EB393340_METHOD_2_8C4121B64D1B4C8A_OFFSET UNITYSDK_OFFSET(0x1380E690)
#define CLASS_2_A0580152EB393340_METHOD_2_8E88A87544A2E409_OFFSET UNITYSDK_OFFSET(0x1380C9B0)
#define CLASS_2_A0580152EB393340_METHOD_2_9D323B57C6199F8A_OFFSET UNITYSDK_OFFSET(0x138087B0)
#define CLASS_2_A0580152EB393340_METHOD_2_9E380911998A73AF_OFFSET UNITYSDK_OFFSET(0x1380B4F0)
#define CLASS_2_A0580152EB393340_METHOD_2_A02319FB48AA7F29_OFFSET UNITYSDK_OFFSET(0x1380C5B0)
#define CLASS_2_A0580152EB393340_METHOD_2_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0x13809750)
#define CLASS_2_A0580152EB393340_METHOD_2_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x1380EE30)
#define CLASS_2_A0580152EB393340_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1380C810)
#define CLASS_2_A0580152EB393340_METHOD_2_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x1380C8B0)
#define CLASS_2_A0580152EB393340_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1380C860)
#define CLASS_2_A0580152EB393340_METHOD_2_AA7A762739BFD11E_OFFSET UNITYSDK_OFFSET(0x1380DEB0)
#define CLASS_2_A0580152EB393340_METHOD_2_AC007E8E6E26A525_OFFSET UNITYSDK_OFFSET(0x13808E20)
#define CLASS_2_A0580152EB393340_METHOD_2_AD2945A54DE3574A_OFFSET UNITYSDK_OFFSET(0x13809400)
#define CLASS_2_A0580152EB393340_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x13809BB0)
#define CLASS_2_A0580152EB393340_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x1380D360)
#define CLASS_2_A0580152EB393340_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1380B040)
#define CLASS_2_A0580152EB393340_METHOD_2_B1978A17BDE3E154_OFFSET UNITYSDK_OFFSET(0x1380CDC0)
#define CLASS_2_A0580152EB393340_METHOD_2_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0x138089E0)
#define CLASS_2_A0580152EB393340_METHOD_2_BD29A1CD2DE6386A_OFFSET UNITYSDK_OFFSET(0x1380E060)
#define CLASS_2_A0580152EB393340_METHOD_2_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x1380E150)
#define CLASS_2_A0580152EB393340_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1380AB50)
#define CLASS_2_A0580152EB393340_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13809B60)
#define CLASS_2_A0580152EB393340_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1380BF80)
#define CLASS_2_A0580152EB393340_METHOD_2_D676C42F88074189_OFFSET UNITYSDK_OFFSET(0x1380A860)
#define CLASS_2_A0580152EB393340_METHOD_2_DC5677DF2CB8DC3B_OFFSET UNITYSDK_OFFSET(0x1380EA70)
#define CLASS_2_A0580152EB393340_METHOD_2_E507EE4A464914B8_OFFSET UNITYSDK_OFFSET(0x1380AEB0)
#define CLASS_2_A0580152EB393340_METHOD_2_E62B151462A0F3AE_OFFSET UNITYSDK_OFFSET(0x1380DA20)
#define CLASS_2_A0580152EB393340_METHOD_2_F0D9B6AAFF504D87_1_OFFSET UNITYSDK_OFFSET(0x1380CE90)
#define CLASS_2_A0580152EB393340_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x13809800)
#define CLASS_2_A0580152EB393340_METHOD_2_F5D8EDE5D8CB59C1_OFFSET UNITYSDK_OFFSET(0x1380BAE0)
#define CLASS_2_A0580152EB393340_METHOD_2_F87E03904BAC5F4C_OFFSET UNITYSDK_OFFSET(0x1380C760)
#define CLASS_2_A0580152EB393340_METHOD_2_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x1380A780)
#define CLASS_2_A0580152EB393340_METHOD_2_FF1646EECB7EE5A5_OFFSET UNITYSDK_OFFSET(0x1380E1D0)
#define CLASS_2_A0580152EB393340_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x13808F90)
#define CLASS_2_A0580152EB393340_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13808FE0)
#define CLASS_2_A0580152EB393340_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x13808F10)
#define CLASS_2_A0580152EB393340_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13808F50)
#define CLASS_2_A0580152EB393340_TICK_OFFSET UNITYSDK_OFFSET(0x1380B1B0)
#define CLASS_2_A0580152EB393340__CCTOR_OFFSET UNITYSDK_OFFSET(0x1380F010)
#define CLASS_2_A0580152EB393340__CTOR_OFFSET UNITYSDK_OFFSET(0x13808A50)
#define CLASS_2_A0580152EB393340___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1380F060)
#define CLASS_2_A0580152EB393340___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1380F070)

inline static constexpr unsigned int Class_2_A0580152EB393340_TypeDefinitionIndex = 53350;

class Class_2_A0580152EB393340 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_A0580152EB393340*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_A0580152EB393340*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0580152EB393340_TypeDefinitionIndex)->GetStaticField(0x5C4A0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A0580152EB393340_TypeDefinitionIndex)->GetStaticField(0x12170);
	}
	// static const ::UnityEngine::AI::ObstacleAvoidanceType Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::Single Field_2_5; // 0x0
	// static const ::System::Single Field_2_6; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	::RPG::GameCore::AdventureCharacterController* Field_2_8; // 0x18
	::Class_1_DE10E55D67735639* Field_2_9; // 0x20
	::Class_1_4ADE0B0F695A887A* Field_2_10; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_11; // 0x30
	::UnityEngine::AI::NavMesh_OnNavMeshChanged* Field_2_12; // 0x38
	::Class_2_6A3F10CE86B200DD* Field_2_13; // 0x40
	::Class_0_16E4307DCC419505_17* Field_2_14; // 0x48
	::Class_1_43BD383C98B4C0C5_121* Field_2_15; // 0x50
	::RPG::GameCore::TransformComponent* Field_2_16; // 0x58
	::Class_1_4ADE0B0F695A887A* Field_2_17; // 0x60
	::System::Single Field_2_18; // 0x68
	::System::Single Field_2_19; // 0x6C
	::System::Single Field_2_20; // 0x70
	::RPG::GameCore::AdvNavigationState Field_2_21; // 0x74
	::System::Int32 Field_2_22; // 0x78
	::RPG::GameCore::ECharacterNavSteerMode Field_2_23; // 0x7C
	::System::Single Field_2_24; // 0x80
	::RPG::GameCore::CharacterMotionFlag Field_2_25; // 0x84
	::Struct_2_6B303821F3B24153 Field_2_26; // 0x88
	::System::Single Field_2_27; // 0x9C
	::System::Int32 Field_2_28; // 0xA0
	::System::Boolean Field_2_29; // 0xA4
	::System::Boolean Field_2_30; // 0xA5
	::System::Boolean Field_2_31; // 0xA6
	::UnityEngine::Vector3 Field_2_32; // 0xA8

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

	::System::Void Method_2_AC007E8E6E26A525(::RPG::GameCore::TransformComponent* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_2_6A3F10CE86B200DD* a3, ::Class_0_16E4307DCC419505_17* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*, ::Class_2_6A3F10CE86B200DD*, ::Class_0_16E4307DCC419505_17*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_AC007E8E6E26A525_OFFSET))(this, a1, a2, a3, a4);
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

	::UnityEngine::Vector3 Method_2_0882BA2CA10E8E8E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_0882BA2CA10E8E8E_OFFSET))(this);
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

	::System::Void Method_2_8C4121B64D1B4C8A(::Class_1_43BD383C98B4C0C5_121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_121*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_8C4121B64D1B4C8A_OFFSET))(this, a1);
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

	::System::Boolean Method_2_42073E1316C51A78(::Class_1_43BD383C98B4C0C5_121* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_121*))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340_METHOD_2_42073E1316C51A78_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0580152EB393340___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};

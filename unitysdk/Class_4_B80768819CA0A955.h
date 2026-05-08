#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_2B006B25A7D108A2.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_F6579EDC26D1BFF1;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_4_FFDCB461A077D183;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigMonsterAlertDetection; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define CLASS_4_B80768819CA0A955_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x119544F0)
#define CLASS_4_B80768819CA0A955_METHOD_4_07260E158E16F5C8_OFFSET UNITYSDK_OFFSET(0x119589A0)
#define CLASS_4_B80768819CA0A955_METHOD_4_129B3AD46FA81160_OFFSET UNITYSDK_OFFSET(0x11955EC0)
#define CLASS_4_B80768819CA0A955_METHOD_4_1B69949CC96F3222_OFFSET UNITYSDK_OFFSET(0x11956180)
#define CLASS_4_B80768819CA0A955_METHOD_4_2E5577B45C3A6331_OFFSET UNITYSDK_OFFSET(0x11955570)
#define CLASS_4_B80768819CA0A955_METHOD_4_2FF3B28B819291CC_OFFSET UNITYSDK_OFFSET(0x11959290)
#define CLASS_4_B80768819CA0A955_METHOD_4_428C26F6CE7DEA86_OFFSET UNITYSDK_OFFSET(0x11959960)
#define CLASS_4_B80768819CA0A955_METHOD_4_42D59398E65EF6BC_OFFSET UNITYSDK_OFFSET(0x11955D90)
#define CLASS_4_B80768819CA0A955_METHOD_4_439D48CD85F60940_OFFSET UNITYSDK_OFFSET(0x11959840)
#define CLASS_4_B80768819CA0A955_METHOD_4_453C30DBA4890F13_OFFSET UNITYSDK_OFFSET(0x119576F0)
#define CLASS_4_B80768819CA0A955_METHOD_4_469418C6905C3EB6_OFFSET UNITYSDK_OFFSET(0x11957270)
#define CLASS_4_B80768819CA0A955_METHOD_4_4E7E61ED60588CD1_1_OFFSET UNITYSDK_OFFSET(0x11959C90)
#define CLASS_4_B80768819CA0A955_METHOD_4_4E7E61ED60588CD1_OFFSET UNITYSDK_OFFSET(0x11955200)
#define CLASS_4_B80768819CA0A955_METHOD_4_53BAC30DE7AC5608_1_OFFSET UNITYSDK_OFFSET(0x11959E80)
#define CLASS_4_B80768819CA0A955_METHOD_4_53BAC30DE7AC5608_OFFSET UNITYSDK_OFFSET(0x11959770)
#define CLASS_4_B80768819CA0A955_METHOD_4_5BC7A534F7CBA368_OFFSET UNITYSDK_OFFSET(0x119579A0)
#define CLASS_4_B80768819CA0A955_METHOD_4_64D6A528AE399C90_OFFSET UNITYSDK_OFFSET(0x11958860)
#define CLASS_4_B80768819CA0A955_METHOD_4_65C50CE6B76D8197_OFFSET UNITYSDK_OFFSET(0x11954C20)
#define CLASS_4_B80768819CA0A955_METHOD_4_7008438461B29FF7_OFFSET UNITYSDK_OFFSET(0x11955790)
#define CLASS_4_B80768819CA0A955_METHOD_4_8A295C6FC3A23A45_OFFSET UNITYSDK_OFFSET(0x1195A100)
#define CLASS_4_B80768819CA0A955_METHOD_4_985496D5F8D75979_OFFSET UNITYSDK_OFFSET(0x1195A4F0)
#define CLASS_4_B80768819CA0A955_METHOD_4_A832EF2AAF65C233_OFFSET UNITYSDK_OFFSET(0x11959B30)
#define CLASS_4_B80768819CA0A955_METHOD_4_AEFBC2A58B360B6C_OFFSET UNITYSDK_OFFSET(0x119597E0)
#define CLASS_4_B80768819CA0A955_METHOD_4_B08381E23A67004A_OFFSET UNITYSDK_OFFSET(0x11955A50)
#define CLASS_4_B80768819CA0A955_METHOD_4_B83F1E7CDFC3D4E4_OFFSET UNITYSDK_OFFSET(0x1195A410)
#define CLASS_4_B80768819CA0A955_METHOD_4_B8478F2533DF8175_OFFSET UNITYSDK_OFFSET(0x11959370)
#define CLASS_4_B80768819CA0A955_METHOD_4_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x11958CE0)
#define CLASS_4_B80768819CA0A955_METHOD_4_BB89B5B63C3D548B_OFFSET UNITYSDK_OFFSET(0x119554B0)
#define CLASS_4_B80768819CA0A955_METHOD_4_BC512A0BB61C3B7B_OFFSET UNITYSDK_OFFSET(0x11956F40)
#define CLASS_4_B80768819CA0A955_METHOD_4_C38D3AD2C8A4807D_OFFSET UNITYSDK_OFFSET(0x11959B90)
#define CLASS_4_B80768819CA0A955_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11959C00)
#define CLASS_4_B80768819CA0A955_METHOD_4_D0FA4C165E7E8D36_OFFSET UNITYSDK_OFFSET(0x119569D0)
#define CLASS_4_B80768819CA0A955_METHOD_4_D1C1A181C07AE800_OFFSET UNITYSDK_OFFSET(0x1195A570)
#define CLASS_4_B80768819CA0A955_METHOD_4_D801FF892512D929_OFFSET UNITYSDK_OFFSET(0x119585F0)
#define CLASS_4_B80768819CA0A955_METHOD_4_DD38D2554F3D0693_OFFSET UNITYSDK_OFFSET(0x11954E70)
#define CLASS_4_B80768819CA0A955_METHOD_4_DEE311D4B72C5B6A_OFFSET UNITYSDK_OFFSET(0x11954A60)
#define CLASS_4_B80768819CA0A955_METHOD_4_E2ABCE88E4210F30_OFFSET UNITYSDK_OFFSET(0x11955B80)
#define CLASS_4_B80768819CA0A955_METHOD_4_E4D104544ADAA888_OFFSET UNITYSDK_OFFSET(0x11959F00)
#define CLASS_4_B80768819CA0A955_METHOD_4_E5929A4045C7BEE2_OFFSET UNITYSDK_OFFSET(0x11958D70)
#define CLASS_4_B80768819CA0A955_METHOD_4_F0F3E91CEF16AAC1_OFFSET UNITYSDK_OFFSET(0x11956120)
#define CLASS_4_B80768819CA0A955_METHOD_4_FB195C9EE93F4E04_1_OFFSET UNITYSDK_OFFSET(0x11956D30)
#define CLASS_4_B80768819CA0A955_METHOD_4_FB195C9EE93F4E04_OFFSET UNITYSDK_OFFSET(0x11956A70)
#define CLASS_4_B80768819CA0A955_UPDATE_OFFSET UNITYSDK_OFFSET(0x119548B0)
#define CLASS_4_B80768819CA0A955__CTOR_OFFSET UNITYSDK_OFFSET(0x11954A10)

inline static constexpr unsigned int Class_4_B80768819CA0A955_TypeDefinitionIndex = 81571;

class Class_4_B80768819CA0A955 : public ::Class_3_2B006B25A7D108A2
{
public:
	::Nap::NapECS::EcsFilter* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_4_DEE311D4B72C5B6A(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_DEE311D4B72C5B6A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_4E7E61ED60588CD1(::System::Single a1, ::Class_4_FFDCB461A077D183* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_FFDCB461A077D183*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_4E7E61ED60588CD1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_7008438461B29FF7(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_7008438461B29FF7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_E2ABCE88E4210F30(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_E2ABCE88E4210F30_OFFSET))(a1, a2);
	}

	::System::Void Method_4_42D59398E65EF6BC(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_42D59398E65EF6BC_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_4_129B3AD46FA81160(::UnityEngine::Collider* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_129B3AD46FA81160_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F0F3E91CEF16AAC1(::Class_4_FFDCB461A077D183* a1)
	{
		return ((::System::Void(*)(::Class_4_FFDCB461A077D183*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_F0F3E91CEF16AAC1_OFFSET))(a1);
	}

	static ::System::Boolean Method_4_1B69949CC96F3222(::Class_4_FFDCB461A077D183* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Config::ConfigMonsterAlertDetection* a4)
	{
		return ((::System::Boolean(*)(::Class_4_FFDCB461A077D183*, ::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigMonsterAlertDetection*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_1B69949CC96F3222_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_4_453C30DBA4890F13(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_453C30DBA4890F13_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_4_5BC7A534F7CBA368(::Class_4_FFDCB461A077D183* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_FFDCB461A077D183*, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_5BC7A534F7CBA368_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_4_2E5577B45C3A6331(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_2E5577B45C3A6331_OFFSET))(a1);
	}

	::System::Void Method_4_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_E5929A4045C7BEE2(::Class_4_FFDCB461A077D183* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_FFDCB461A077D183*, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_E5929A4045C7BEE2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_4_2FF3B28B819291CC(::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_2FF3B28B819291CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B8478F2533DF8175(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_B8478F2533DF8175_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_4_D801FF892512D929(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_D801FF892512D929_OFFSET))(a1);
	}

	static ::System::Void Method_4_53BAC30DE7AC5608(::Class_4_FFDCB461A077D183* a1)
	{
		return ((::System::Void(*)(::Class_4_FFDCB461A077D183*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_53BAC30DE7AC5608_OFFSET))(a1);
	}

	static ::System::Boolean Method_4_D0FA4C165E7E8D36(::Class_4_FFDCB461A077D183* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_4_FFDCB461A077D183*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_D0FA4C165E7E8D36_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_AEFBC2A58B360B6C(::System::Single a1, ::Class_4_FFDCB461A077D183* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_FFDCB461A077D183*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_AEFBC2A58B360B6C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_439D48CD85F60940(::Class_4_FFDCB461A077D183* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::MoleMole::Battle::Entity* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_4_FFDCB461A077D183*, ::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_439D48CD85F60940_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_4_428C26F6CE7DEA86(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_428C26F6CE7DEA86_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_4_FB195C9EE93F4E04(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::Config::ConfigMonsterAlertDetection* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Config::ConfigMonsterAlertDetection*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_FB195C9EE93F4E04_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_A832EF2AAF65C233(::Class_4_FFDCB461A077D183* a1)
	{
		return ((::System::Void(*)(::Class_4_FFDCB461A077D183*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_A832EF2AAF65C233_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_4_FB195C9EE93F4E04_1(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::Config::ConfigMonsterAlertDetection* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Config::ConfigMonsterAlertDetection*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_FB195C9EE93F4E04_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C38D3AD2C8A4807D(::System::Single a1, ::Class_4_FFDCB461A077D183* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_FFDCB461A077D183*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_C38D3AD2C8A4807D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_DD38D2554F3D0693(::MoleMole::Battle::Entity* a1, ::Class_2_F6579EDC26D1BFF1* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_F6579EDC26D1BFF1*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_DD38D2554F3D0693_OFFSET))(a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_4_BC512A0BB61C3B7B(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::Config::ConfigMonsterAlertDetection* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Config::ConfigMonsterAlertDetection*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_BC512A0BB61C3B7B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_4E7E61ED60588CD1_1(::System::Single a1, ::Class_4_FFDCB461A077D183* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_FFDCB461A077D183*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_4E7E61ED60588CD1_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_64D6A528AE399C90(::Class_4_FFDCB461A077D183* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::MoleMole::Battle::Entity* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_4_FFDCB461A077D183*, ::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_64D6A528AE399C90_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_4_53BAC30DE7AC5608_1(::Class_4_FFDCB461A077D183* a1)
	{
		return ((::System::Void(*)(::Class_4_FFDCB461A077D183*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_53BAC30DE7AC5608_1_OFFSET))(a1);
	}

	static ::System::Single Method_4_07260E158E16F5C8(::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_07260E158E16F5C8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_E4D104544ADAA888(::Class_4_FFDCB461A077D183* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_FFDCB461A077D183*, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_E4D104544ADAA888_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_4_8A295C6FC3A23A45(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_8A295C6FC3A23A45_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_4_469418C6905C3EB6(::Class_4_FFDCB461A077D183* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::Class_4_FFDCB461A077D183*, ::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_469418C6905C3EB6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_4_B83F1E7CDFC3D4E4(::Class_4_FFDCB461A077D183* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_FFDCB461A077D183*, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_B83F1E7CDFC3D4E4_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_4_BB89B5B63C3D548B(::Class_4_FFDCB461A077D183* a1)
	{
		return ((::System::Boolean(*)(::Class_4_FFDCB461A077D183*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_BB89B5B63C3D548B_OFFSET))(a1);
	}

	static ::System::Void Method_4_65C50CE6B76D8197(::MoleMole::Battle::Entity* a1, ::Class_2_F6579EDC26D1BFF1* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_F6579EDC26D1BFF1*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_65C50CE6B76D8197_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_B08381E23A67004A(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_B08381E23A67004A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_985496D5F8D75979(::Class_4_FFDCB461A077D183* a1)
	{
		return ((::System::Boolean(*)(::Class_4_FFDCB461A077D183*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_985496D5F8D75979_OFFSET))(a1);
	}

	static ::System::Boolean Method_4_D1C1A181C07AE800(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955_METHOD_4_D1C1A181C07AE800_OFFSET))(a1, a2);
	}
};

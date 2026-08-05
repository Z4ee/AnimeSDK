#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_2B006B25A7D108A2.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_E21DA91F1EC19317;
class Class_1_E6CD3AEFAC6BAD7C;
class Class_1_EA1FEF8121ADE963;
class Class_2_F6579EDC26D1BFF1;
class Class_3_C93CC3D2C2AC4067;
class Class_4_C2BA23F5AA27FA67;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_4_4311AF09DCA0996A_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x117AFC40)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_07260E158E16F5C8_OFFSET UNITYSDK_OFFSET(0x117B2200)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_0967101E100517FC_OFFSET UNITYSDK_OFFSET(0x117B4E80)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_0C0E6FEF93BF1219_OFFSET UNITYSDK_OFFSET(0x117B0960)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_0FE88C3959B3B724_OFFSET UNITYSDK_OFFSET(0x117B5610)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_129B3AD46FA81160_OFFSET UNITYSDK_OFFSET(0x117B3B50)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_226C775B51829DC1_OFFSET UNITYSDK_OFFSET(0x117B3610)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_28494FC51F675FDA_OFFSET UNITYSDK_OFFSET(0x117B16A0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_2E5577B45C3A6331_OFFSET UNITYSDK_OFFSET(0x117B3F60)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_2FF3B28B819291CC_OFFSET UNITYSDK_OFFSET(0x117B4AD0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_344787185C649B80_OFFSET UNITYSDK_OFFSET(0x117B07A0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_3D0534AA2D432BB1_OFFSET UNITYSDK_OFFSET(0x117B6120)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_428C26F6CE7DEA86_OFFSET UNITYSDK_OFFSET(0x117B5A00)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_42D59398E65EF6BC_OFFSET UNITYSDK_OFFSET(0x117B2520)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_453C30DBA4890F13_OFFSET UNITYSDK_OFFSET(0x117B51B0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_4E7E61ED60588CD1_1_OFFSET UNITYSDK_OFFSET(0x117B4BB0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_4E7E61ED60588CD1_OFFSET UNITYSDK_OFFSET(0x117B1240)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_4EBC9684B2E2CE60_OFFSET UNITYSDK_OFFSET(0x117B47B0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_53BAC30DE7AC5608_1_OFFSET UNITYSDK_OFFSET(0x117B75D0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_53BAC30DE7AC5608_OFFSET UNITYSDK_OFFSET(0x117B5460)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_5D9591118D404F9A_OFFSET UNITYSDK_OFFSET(0x117B1A10)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_64D6A528AE399C90_OFFSET UNITYSDK_OFFSET(0x117B7490)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_7008438461B29FF7_OFFSET UNITYSDK_OFFSET(0x117B01B0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_709B45724FE4A1EE_OFFSET UNITYSDK_OFFSET(0x117B4180)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_83ABEDAA83837786_OFFSET UNITYSDK_OFFSET(0x117B3DB0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_847C1B36A2E5F30B_OFFSET UNITYSDK_OFFSET(0x117B7650)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_8F71DFF68B0C6273_OFFSET UNITYSDK_OFFSET(0x117B5790)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_8F7FFE5E741FE472_OFFSET UNITYSDK_OFFSET(0x117B5BC0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_8F88A2BE8E5DAEFC_1_OFFSET UNITYSDK_OFFSET(0x117B2E20)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_8F88A2BE8E5DAEFC_OFFSET UNITYSDK_OFFSET(0x117B30E0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_985496D5F8D75979_OFFSET UNITYSDK_OFFSET(0x117B1E00)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_98F988E1A5D06C27_OFFSET UNITYSDK_OFFSET(0x117B14F0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_9A7497FF590B7422_OFFSET UNITYSDK_OFFSET(0x117B4960)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_A832EF2AAF65C233_OFFSET UNITYSDK_OFFSET(0x117B7770)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_AEFBC2A58B360B6C_OFFSET UNITYSDK_OFFSET(0x117B54D0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_B08381E23A67004A_OFFSET UNITYSDK_OFFSET(0x117B0460)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_B83F1E7CDFC3D4E4_OFFSET UNITYSDK_OFFSET(0x117B5530)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_B9ADF089460CF7F5_OFFSET UNITYSDK_OFFSET(0x117B2650)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x117B5700)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_BB89B5B63C3D548B_OFFSET UNITYSDK_OFFSET(0x117B1430)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_BC190DB1DC4B95D3_OFFSET UNITYSDK_OFFSET(0x117B32F0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_BC191CFA96DD03E5_OFFSET UNITYSDK_OFFSET(0x117B6330)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_C38D3AD2C8A4807D_OFFSET UNITYSDK_OFFSET(0x117B6020)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x117B6090)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_CF27DE949099FE11_OFFSET UNITYSDK_OFFSET(0x117B1D00)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_D1C1A181C07AE800_OFFSET UNITYSDK_OFFSET(0x117B1BC0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_D6F2B5AF7B3774A1_OFFSET UNITYSDK_OFFSET(0x117B1C60)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_DD38D2554F3D0693_OFFSET UNITYSDK_OFFSET(0x117B0EA0)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_DF5F3C3A7843679E_OFFSET UNITYSDK_OFFSET(0x117B1E80)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_E2ABCE88E4210F30_OFFSET UNITYSDK_OFFSET(0x117B0590)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_E484621534821291_OFFSET UNITYSDK_OFFSET(0x117B1A90)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_E5929A4045C7BEE2_OFFSET UNITYSDK_OFFSET(0x117B4310)
#define CLASS_4_4311AF09DCA0996A_METHOD_4_F0F3E91CEF16AAC1_OFFSET UNITYSDK_OFFSET(0x117B5FC0)
#define CLASS_4_4311AF09DCA0996A_UPDATE_OFFSET UNITYSDK_OFFSET(0x117B0000)
#define CLASS_4_4311AF09DCA0996A__CTOR_OFFSET UNITYSDK_OFFSET(0x117B0160)

inline static constexpr unsigned int Class_4_4311AF09DCA0996A_TypeDefinitionIndex = 78182;

class Class_4_4311AF09DCA0996A : public ::Class_3_2B006B25A7D108A2
{
public:
	::Nap::NapECS::EcsFilter* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_4_7008438461B29FF7(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_7008438461B29FF7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_344787185C649B80(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_344787185C649B80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_4E7E61ED60588CD1(::System::Single a1, ::Class_4_C2BA23F5AA27FA67* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_C2BA23F5AA27FA67*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_4E7E61ED60588CD1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_98F988E1A5D06C27(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_98F988E1A5D06C27_OFFSET))(a1);
	}

	static ::System::Void Method_4_28494FC51F675FDA(::Class_4_C2BA23F5AA27FA67* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_28494FC51F675FDA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_4_D1C1A181C07AE800(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_D1C1A181C07AE800_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_CF27DE949099FE11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_CF27DE949099FE11_OFFSET))(a1);
	}

	static ::System::Boolean Method_4_985496D5F8D75979(::Class_4_C2BA23F5AA27FA67* a1)
	{
		return ((::System::Boolean(*)(::Class_4_C2BA23F5AA27FA67*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_985496D5F8D75979_OFFSET))(a1);
	}

	static ::System::Boolean Method_4_DF5F3C3A7843679E(::MoleMole::Battle::Entity* a1, ::Class_1_E21DA91F1EC19317* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Class_1_E21DA91F1EC19317*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_DF5F3C3A7843679E_OFFSET))(a1, a2);
	}

	static ::System::Single Method_4_07260E158E16F5C8(::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_07260E158E16F5C8_OFFSET))(a1, a2);
	}

	::System::Void Method_4_42D59398E65EF6BC(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_42D59398E65EF6BC_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_4_B9ADF089460CF7F5(::Class_4_C2BA23F5AA27FA67* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::MoleMole::Battle::Entity* a3, ::Class_1_E21DA91F1EC19317* a4)
	{
		return ((::System::Boolean(*)(::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*, ::MoleMole::Battle::Entity*, ::Class_1_E21DA91F1EC19317*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_B9ADF089460CF7F5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_4_129B3AD46FA81160(::UnityEngine::Collider* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_129B3AD46FA81160_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_83ABEDAA83837786(::Class_1_EA1FEF8121ADE963* a1)
	{
		return ((::System::Boolean(*)(::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_83ABEDAA83837786_OFFSET))(a1);
	}

	static ::System::Boolean Method_4_2E5577B45C3A6331(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_2E5577B45C3A6331_OFFSET))(a1);
	}

	static ::System::Void Method_4_709B45724FE4A1EE(::Class_4_C2BA23F5AA27FA67* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_709B45724FE4A1EE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_E5929A4045C7BEE2(::Class_4_C2BA23F5AA27FA67* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_E5929A4045C7BEE2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_4_E2ABCE88E4210F30(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_E2ABCE88E4210F30_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_226C775B51829DC1(::Class_4_C2BA23F5AA27FA67* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_226C775B51829DC1_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_4_8F88A2BE8E5DAEFC(::Class_3_C93CC3D2C2AC4067* a1, ::Class_1_E21DA91F1EC19317* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_1_E21DA91F1EC19317*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_8F88A2BE8E5DAEFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_4E7E61ED60588CD1_1(::System::Single a1, ::Class_4_C2BA23F5AA27FA67* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_C2BA23F5AA27FA67*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_4E7E61ED60588CD1_1_OFFSET))(a1, a2);
	}

	::System::Void Method_4_0967101E100517FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_0967101E100517FC_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_4_BB89B5B63C3D548B(::Class_4_C2BA23F5AA27FA67* a1)
	{
		return ((::System::Boolean(*)(::Class_4_C2BA23F5AA27FA67*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_BB89B5B63C3D548B_OFFSET))(a1);
	}

	static ::System::Void Method_4_453C30DBA4890F13(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_453C30DBA4890F13_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_4_53BAC30DE7AC5608(::Class_4_C2BA23F5AA27FA67* a1)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_53BAC30DE7AC5608_OFFSET))(a1);
	}

	static ::System::Void Method_4_AEFBC2A58B360B6C(::System::Single a1, ::Class_4_C2BA23F5AA27FA67* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_C2BA23F5AA27FA67*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_AEFBC2A58B360B6C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B83F1E7CDFC3D4E4(::Class_4_C2BA23F5AA27FA67* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_B83F1E7CDFC3D4E4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_4_E484621534821291(::Class_1_E6CD3AEFAC6BAD7C* a1)
	{
		return ((::System::Void(*)(::Class_1_E6CD3AEFAC6BAD7C*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_E484621534821291_OFFSET))(a1);
	}

	::System::Void Method_4_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_4_2FF3B28B819291CC(::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_2FF3B28B819291CC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_4_B08381E23A67004A(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_B08381E23A67004A_OFFSET))(a1, a2);
	}

	static ::System::Single Method_4_8F71DFF68B0C6273(::Class_4_C2BA23F5AA27FA67* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::Class_4_C2BA23F5AA27FA67*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_8F71DFF68B0C6273_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_4_4EBC9684B2E2CE60(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_4EBC9684B2E2CE60_OFFSET))(a1);
	}

	static ::System::Single Method_4_0FE88C3959B3B724(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_0FE88C3959B3B724_OFFSET))(a1);
	}

	::System::Void Method_4_428C26F6CE7DEA86(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_428C26F6CE7DEA86_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_0C0E6FEF93BF1219(::MoleMole::Battle::Entity* a1, ::Class_2_F6579EDC26D1BFF1* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_F6579EDC26D1BFF1*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_0C0E6FEF93BF1219_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8F7FFE5E741FE472(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_8F7FFE5E741FE472_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_4_5D9591118D404F9A(::Class_1_E6CD3AEFAC6BAD7C* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_1_E6CD3AEFAC6BAD7C*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_5D9591118D404F9A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F0F3E91CEF16AAC1(::Class_4_C2BA23F5AA27FA67* a1)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_F0F3E91CEF16AAC1_OFFSET))(a1);
	}

	static ::System::Void Method_4_C38D3AD2C8A4807D(::System::Single a1, ::Class_4_C2BA23F5AA27FA67* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_4_C2BA23F5AA27FA67*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_C38D3AD2C8A4807D_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_4_8F88A2BE8E5DAEFC_1(::Class_3_C93CC3D2C2AC4067* a1, ::Class_1_E21DA91F1EC19317* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_1_E21DA91F1EC19317*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_8F88A2BE8E5DAEFC_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_9A7497FF590B7422(::Class_4_C2BA23F5AA27FA67* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::MoleMole::Battle::Entity* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_9A7497FF590B7422_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_4_3D0534AA2D432BB1(::Class_4_C2BA23F5AA27FA67* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_3D0534AA2D432BB1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_4_DD38D2554F3D0693(::MoleMole::Battle::Entity* a1, ::Class_2_F6579EDC26D1BFF1* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_F6579EDC26D1BFF1*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_DD38D2554F3D0693_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_64D6A528AE399C90(::Class_4_C2BA23F5AA27FA67* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::MoleMole::Battle::Entity* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_64D6A528AE399C90_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_4_D6F2B5AF7B3774A1(::Class_4_C2BA23F5AA27FA67* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_4_C2BA23F5AA27FA67*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_D6F2B5AF7B3774A1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_53BAC30DE7AC5608_1(::Class_4_C2BA23F5AA27FA67* a1)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_53BAC30DE7AC5608_1_OFFSET))(a1);
	}

	static ::System::Void Method_4_847C1B36A2E5F30B(::Class_4_C2BA23F5AA27FA67* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_847C1B36A2E5F30B_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_4_BC190DB1DC4B95D3(::Class_3_C93CC3D2C2AC4067* a1, ::Class_1_E21DA91F1EC19317* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_1_E21DA91F1EC19317*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_BC190DB1DC4B95D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BC191CFA96DD03E5(::Class_4_C2BA23F5AA27FA67* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_BC191CFA96DD03E5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_4_A832EF2AAF65C233(::Class_4_C2BA23F5AA27FA67* a1)
	{
		return ((::System::Void(*)(::Class_4_C2BA23F5AA27FA67*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A_METHOD_4_A832EF2AAF65C233_OFFSET))(a1);
	}
};

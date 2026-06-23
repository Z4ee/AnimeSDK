#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_52E0F81CBC57DA32;
class Class_3_AF7A56E03A4D3952;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_3_03DF6D1EEBD140B1_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12767EA0)
#define CLASS_3_03DF6D1EEBD140B1_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12768080)
#define CLASS_3_03DF6D1EEBD140B1_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12768440)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_014EAE7EFF8EC0A0_OFFSET UNITYSDK_OFFSET(0x1276A2D0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_04CB298E9858E5AF_OFFSET UNITYSDK_OFFSET(0x127704F0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_0541B19D48F1A088_OFFSET UNITYSDK_OFFSET(0x1276B3E0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_0BDBEC9B952A5902_OFFSET UNITYSDK_OFFSET(0x1276F3D0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_16F2A1693858D34E_OFFSET UNITYSDK_OFFSET(0x1276A830)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_25B7F857A7311F34_OFFSET UNITYSDK_OFFSET(0x12769970)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_3077D57D359C6291_OFFSET UNITYSDK_OFFSET(0x1276D0D0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_340E0D07F354C094_OFFSET UNITYSDK_OFFSET(0x12770B80)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_3CB75B3C605BF462_OFFSET UNITYSDK_OFFSET(0x1276DD90)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_4715DF8127932F28_OFFSET UNITYSDK_OFFSET(0x1276A7C0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_4C8193FDDF9A44F7_OFFSET UNITYSDK_OFFSET(0x1276E770)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_51E13C0B1A849A83_OFFSET UNITYSDK_OFFSET(0x1276D8F0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_572F4CEEFEB169B4_OFFSET UNITYSDK_OFFSET(0x1276E370)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_58A96E664C38A3CC_OFFSET UNITYSDK_OFFSET(0x12769560)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_59A3E9BF10655520_OFFSET UNITYSDK_OFFSET(0x1276CB90)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_1_OFFSET UNITYSDK_OFFSET(0x1276CF10)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_2_OFFSET UNITYSDK_OFFSET(0x1276D6A0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_3_OFFSET UNITYSDK_OFFSET(0x1276FB60)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_4_OFFSET UNITYSDK_OFFSET(0x1276FD20)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_5_OFFSET UNITYSDK_OFFSET(0x127706D0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_OFFSET UNITYSDK_OFFSET(0x12769B60)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_770E1B3EEC229FBA_OFFSET UNITYSDK_OFFSET(0x1276FEE0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_85CB75616CD4E7BF_OFFSET UNITYSDK_OFFSET(0x12770000)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_925EA3B2013DFD65_OFFSET UNITYSDK_OFFSET(0x12770890)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_9CC6C786E0D42D1A_OFFSET UNITYSDK_OFFSET(0x1276C410)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_A018A37380130301_OFFSET UNITYSDK_OFFSET(0x1276EA80)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_A256783BB3FB254A_OFFSET UNITYSDK_OFFSET(0x12768120)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1276FAD0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_BDAFFECA5DB764E0_OFFSET UNITYSDK_OFFSET(0x1276F9B0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1276E120)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1276FA40)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x1276FF70)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x12771180)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1276D860)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_D5A8827C3A157E39_OFFSET UNITYSDK_OFFSET(0x12769DD0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_DF9F9C336BA14A4A_OFFSET UNITYSDK_OFFSET(0x1276C7D0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_E300FD9CF0E897AD_OFFSET UNITYSDK_OFFSET(0x1276E1B0)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_E6B06A5187EC6577_OFFSET UNITYSDK_OFFSET(0x12769D20)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_ED9CB5305D3819FD_OFFSET UNITYSDK_OFFSET(0x1276F210)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_F384B9CD96311076_OFFSET UNITYSDK_OFFSET(0x12768650)
#define CLASS_3_03DF6D1EEBD140B1_METHOD_3_F41AEED354208C45_OFFSET UNITYSDK_OFFSET(0x1276D280)
#define CLASS_3_03DF6D1EEBD140B1_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12767E50)
#define CLASS_3_03DF6D1EEBD140B1_START_OFFSET UNITYSDK_OFFSET(0x12767E00)
#define CLASS_3_03DF6D1EEBD140B1_UPDATE_OFFSET UNITYSDK_OFFSET(0x12768280)
#define CLASS_3_03DF6D1EEBD140B1__CTOR_OFFSET UNITYSDK_OFFSET(0x12768600)

inline static constexpr unsigned int Class_3_03DF6D1EEBD140B1_TypeDefinitionIndex = 84897;

class Class_3_03DF6D1EEBD140B1 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Class_3_03DF6D1EEBD140B1** StaticGet_Field_3_1()
	{
		return (::Class_3_03DF6D1EEBD140B1**)Il2CppClass::FromTypeDefinitionIndex(Class_3_03DF6D1EEBD140B1_TypeDefinitionIndex)->GetStaticField(0x31EC0);
	}
	static ::System::Int32* StaticGet_Field_3_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_03DF6D1EEBD140B1_TypeDefinitionIndex)->GetStaticField(0xBF20);
	}
	static ::System::Boolean* StaticGet_Field_3_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_03DF6D1EEBD140B1_TypeDefinitionIndex)->GetStaticField(0xBF24);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_F384B9CD96311076(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_F384B9CD96311076_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_25B7F857A7311F34(::MoleMole::EntityHandle a1, ::Class_3_AF7A56E03A4D3952* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_25B7F857A7311F34_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5B1AA85B1436EC6E(::UnityEngine::Collider* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D5A8827C3A157E39(::UnityEngine::Collider* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_D5A8827C3A157E39_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4715DF8127932F28(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_4715DF8127932F28_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DF9F9C336BA14A4A(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_DF9F9C336BA14A4A_OFFSET))(a1);
	}

	::System::Void Method_3_A256783BB3FB254A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_A256783BB3FB254A_OFFSET))(this);
	}

	static ::MoleMole::Battle::ColliderEventDispatcher* Method_3_59A3E9BF10655520(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::MoleMole::Battle::ColliderEventDispatcher*(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_59A3E9BF10655520_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5B1AA85B1436EC6E_1(::UnityEngine::Collider* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3077D57D359C6291(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_3077D57D359C6291_OFFSET))(a1);
	}

	static ::System::Void Method_3_F41AEED354208C45(::MoleMole::EntityHandle a1, ::Class_3_AF7A56E03A4D3952* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_F41AEED354208C45_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5B1AA85B1436EC6E_2(::UnityEngine::Collider* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_2_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_51E13C0B1A849A83(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_51E13C0B1A849A83_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_58A96E664C38A3CC(::Class_3_DFD5D1FDB9D2A4AC* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_58A96E664C38A3CC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_E300FD9CF0E897AD(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_E300FD9CF0E897AD_OFFSET))(a1);
	}

	static ::System::Void Method_3_572F4CEEFEB169B4(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_572F4CEEFEB169B4_OFFSET))(a1);
	}

	static ::System::Void Method_3_4C8193FDDF9A44F7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_4C8193FDDF9A44F7_OFFSET))(a1);
	}

	static ::System::Void Method_3_3CB75B3C605BF462(::MoleMole::EntityHandle a1, ::Class_3_AF7A56E03A4D3952* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_3CB75B3C605BF462_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0BDBEC9B952A5902(::UnityEngine::Collider* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_0BDBEC9B952A5902_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BDAFFECA5DB764E0(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_BDAFFECA5DB764E0_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5B1AA85B1436EC6E_3(::UnityEngine::Collider* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5B1AA85B1436EC6E_4(::UnityEngine::Collider* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9CC6C786E0D42D1A(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_9CC6C786E0D42D1A_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_770E1B3EEC229FBA(::Class_3_52E0F81CBC57DA32* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5)
	{
		return ((::System::Boolean(*)(::Class_3_52E0F81CBC57DA32*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_770E1B3EEC229FBA_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	static ::System::Void Method_3_0541B19D48F1A088(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_0541B19D48F1A088_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_85CB75616CD4E7BF(::MoleMole::EntityHandle a1, ::Class_3_AF7A56E03A4D3952* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_85CB75616CD4E7BF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_ED9CB5305D3819FD(::MoleMole::EntityHandle a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_ED9CB5305D3819FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_04CB298E9858E5AF(::MoleMole::EntityHandle a1, ::Class_3_AF7A56E03A4D3952* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_04CB298E9858E5AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A018A37380130301(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_A018A37380130301_OFFSET))(a1);
	}

	static ::System::Void Method_3_16F2A1693858D34E(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_16F2A1693858D34E_OFFSET))(a1);
	}

	static ::System::Void Method_3_014EAE7EFF8EC0A0(::MoleMole::EntityHandle a1, ::Class_3_AF7A56E03A4D3952* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_014EAE7EFF8EC0A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5B1AA85B1436EC6E_5(::UnityEngine::Collider* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_5B1AA85B1436EC6E_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_925EA3B2013DFD65(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_925EA3B2013DFD65_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_E6B06A5187EC6577(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_E6B06A5187EC6577_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_340E0D07F354C094(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_340E0D07F354C094_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03DF6D1EEBD140B1_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}
};

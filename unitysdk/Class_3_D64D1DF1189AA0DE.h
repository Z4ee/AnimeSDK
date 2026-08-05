#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_AF79B05AF2017C4C.h"
#include "unitysdk/Enum_3_F0974F25AA471541.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_79;
class Class_1_A00B784DE48ED0A8;
class Class_1_AF06687F962EEF63;
class Class_1_B7E341C5F1A6F199;
class Class_2_1B1B79CF034B93D1;
class Class_2_25A326E4E7F9FCFE;
class Class_2_B242825AD4217625;
class Class_2_EFBBB9EB13AB1B92;
class Class_3_06419CA21ECB69E6;
class Class_3_D252341484B6EB1D;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define CLASS_3_D64D1DF1189AA0DE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x112BBE40)
#define CLASS_3_D64D1DF1189AA0DE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x112BC660)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x167F6400)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_0508563E26675EC4_OFFSET UNITYSDK_OFFSET(0x167EFAA0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_0539F1DF6B7FACDB_OFFSET UNITYSDK_OFFSET(0x167F4E10)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x167F63A0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_08E666F7EFE21B1A_OFFSET UNITYSDK_OFFSET(0x167F6A80)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_0B15EE09EC20D1B1_OFFSET UNITYSDK_OFFSET(0x112BDB40)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x167F0730)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_0C1A9D6D9E04543C_OFFSET UNITYSDK_OFFSET(0x167F4400)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x167F7B80)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_0DBEBD74722C00C2_OFFSET UNITYSDK_OFFSET(0x167F4F80)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_0FE88C3959B3B724_OFFSET UNITYSDK_OFFSET(0x167F5110)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_0FF755CF0787BB5E_OFFSET UNITYSDK_OFFSET(0x167F46E0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_1180431AF7AE9BE5_OFFSET UNITYSDK_OFFSET(0x112BF250)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_1467E749545241DE_OFFSET UNITYSDK_OFFSET(0x167F37D0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x167EE230)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_22E59727FCC3AC03_1_OFFSET UNITYSDK_OFFSET(0x167F01F0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_22E59727FCC3AC03_OFFSET UNITYSDK_OFFSET(0x112BD840)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_27ADCCDE7A11CC5E_OFFSET UNITYSDK_OFFSET(0x112BF510)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_29F0C501FEEE7583_OFFSET UNITYSDK_OFFSET(0x167F79D0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_2BE98EB9F95F2CDC_OFFSET UNITYSDK_OFFSET(0x112BCA20)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_2C8AC6FC25B32219_1_OFFSET UNITYSDK_OFFSET(0x167F61D0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_2C8AC6FC25B32219_OFFSET UNITYSDK_OFFSET(0x167F4C40)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_2CC9263E08F5BAB5_OFFSET UNITYSDK_OFFSET(0x167F42F0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x167F5E60)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x167F1680)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_385AA2E42A1A69EE_OFFSET UNITYSDK_OFFSET(0x112BCDB0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_3B522448B1B3BE68_OFFSET UNITYSDK_OFFSET(0x167F7440)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_3DFE04DC823D9D33_OFFSET UNITYSDK_OFFSET(0x112BE820)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_3FEBC466DBC9364E_OFFSET UNITYSDK_OFFSET(0x167EEEB0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_435FA878CD73DCB7_OFFSET UNITYSDK_OFFSET(0x167F7600)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_4532289116D98671_OFFSET UNITYSDK_OFFSET(0x167F1320)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x167F6010)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_54B11888037F6FA8_OFFSET UNITYSDK_OFFSET(0x167F0AD0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_5B7CC969AF8C5A2C_OFFSET UNITYSDK_OFFSET(0x167EEB10)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_5D0C7528A8F66838_OFFSET UNITYSDK_OFFSET(0x112BD260)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_5DF574466CCD0CE3_OFFSET UNITYSDK_OFFSET(0x167F53C0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_5FC63A1AC659F0AE_OFFSET UNITYSDK_OFFSET(0x167F0290)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_61EA3E091E3ACE3A_OFFSET UNITYSDK_OFFSET(0x167EF8E0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x112BD630)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_63B90F078483E737_OFFSET UNITYSDK_OFFSET(0x112BCA60)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_66E92F0F1F2E149A_OFFSET UNITYSDK_OFFSET(0x167F3720)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_6950DFC9E62DCDC3_OFFSET UNITYSDK_OFFSET(0x112BEC10)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_6C3E18151183E806_OFFSET UNITYSDK_OFFSET(0x167EFA10)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x112C0020)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x167F3DA0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_73325761F6F6EE1A_OFFSET UNITYSDK_OFFSET(0x112BCB60)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_77F5509F60E9D563_OFFSET UNITYSDK_OFFSET(0x167F5370)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_783CA7E5D026CECE_OFFSET UNITYSDK_OFFSET(0x112BE9E0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_78DAA902E254D7A6_OFFSET UNITYSDK_OFFSET(0x167EF6A0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_7CF4C26DEA99534A_OFFSET UNITYSDK_OFFSET(0x167F40F0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_82ABFE24D5168B0C_1_OFFSET UNITYSDK_OFFSET(0x112BF1C0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x112BD7B0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_838A7B6FC3359269_OFFSET UNITYSDK_OFFSET(0x167F3F30)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_8C0A991B87BCB7E5_OFFSET UNITYSDK_OFFSET(0x167F0F00)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x112BEA40)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x112BCD70)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_ACC82255344BDFD8_OFFSET UNITYSDK_OFFSET(0x112BE1F0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_AEE872C3CF7A8370_OFFSET UNITYSDK_OFFSET(0x167EFC60)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_AF747A56A0F2C0A4_OFFSET UNITYSDK_OFFSET(0x167EFD00)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_AFAB48268B1DC353_OFFSET UNITYSDK_OFFSET(0x167F6BF0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x167F3EA0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_BD354EC62647EDC0_OFFSET UNITYSDK_OFFSET(0x167F33A0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_BF6A40F21F41755D_OFFSET UNITYSDK_OFFSET(0x167F6F30)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x112BBB80)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x167F6440)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_C5F7038291B9C7AC_OFFSET UNITYSDK_OFFSET(0x112BE070)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x167F1290)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x167F3E10)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x167F6140)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x167F0160)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x167F7B20)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x167F43A0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_D26D9E10340F3CAD_OFFSET UNITYSDK_OFFSET(0x167F5200)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_D29C037630E55AC9_OFFSET UNITYSDK_OFFSET(0x112BE380)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_DC234E107C1FEC2D_OFFSET UNITYSDK_OFFSET(0x112BE660)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_E17EE2B1462746AE_OFFSET UNITYSDK_OFFSET(0x167F7130)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x167F68F0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_E48D6654AD4E7EC9_OFFSET UNITYSDK_OFFSET(0x167F39A0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_E580FB8A7DB7EB67_OFFSET UNITYSDK_OFFSET(0x112BD000)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_E5B23F8EF798AAA5_OFFSET UNITYSDK_OFFSET(0x112BF920)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_E610E6ED7355DD4E_OFFSET UNITYSDK_OFFSET(0x112BD8E0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_E8F3294104A2A048_OFFSET UNITYSDK_OFFSET(0x112BE7D0)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_E8F49BF844103AAC_OFFSET UNITYSDK_OFFSET(0x167F0D00)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_F44843D801E0CB03_OFFSET UNITYSDK_OFFSET(0x167F6060)
#define CLASS_3_D64D1DF1189AA0DE_METHOD_3_F5F44F1A22EBC8ED_OFFSET UNITYSDK_OFFSET(0x167F4940)
#define CLASS_3_D64D1DF1189AA0DE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x112BBBD0)
#define CLASS_3_D64D1DF1189AA0DE_START_OFFSET UNITYSDK_OFFSET(0x112BB940)
#define CLASS_3_D64D1DF1189AA0DE_UPDATE_OFFSET UNITYSDK_OFFSET(0x112BC240)
#define CLASS_3_D64D1DF1189AA0DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x112BC9E0)
#define CLASS_3_D64D1DF1189AA0DE__CTOR_OFFSET UNITYSDK_OFFSET(0x112BC7E0)

inline static constexpr unsigned int Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex = 48224;

class Class_3_D64D1DF1189AA0DE : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Class_3_D64D1DF1189AA0DE** StaticGet_Field_3_11()
	{
		return (::Class_3_D64D1DF1189AA0DE**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0x344D0);
	}
	static ::Enum_3_AF79B05AF2017C4C* StaticGet_Field_3_4()
	{
		return (::Enum_3_AF79B05AF2017C4C*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0xC2A0);
	}
	static ::System::Boolean* StaticGet_Field_3_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0xC2A1);
	}
	static ::System::Boolean* StaticGet_Field_3_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0xC2A2);
	}
	static ::Enum_3_F0974F25AA471541* StaticGet_Field_3_5()
	{
		return (::Enum_3_F0974F25AA471541*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0xC2A4);
	}
	static ::System::Single* StaticGet_Field_3_20()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0xC2A8);
	}
	static ::System::Single* StaticGet_Field_3_16()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0xC2AC);
	}
	static ::System::Boolean* StaticGet_Field_3_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0xC2B0);
	}
	static ::System::Boolean* StaticGet_Field_3_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0xC2B1);
	}
	static ::System::Single* StaticGet_Field_3_21()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0xC2B4);
	}
	static ::System::Single* StaticGet_Field_3_26()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0xC2B8);
	}
	static ::Class_1_43BD383C98B4C0C5_79** StaticGet_Field_3_7()
	{
		return (::Class_1_43BD383C98B4C0C5_79**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Class_1_AF06687F962EEF63** StaticGet_Field_3_0()
	{
		return (::Class_1_AF06687F962EEF63**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D64D1DF1189AA0DE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Int32 Field_3_27 = 0x2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_13; // 0x20
	::Class_1_43BD383C98B4C0C5_79* Field_3_8; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_9; // 0x30
	::System::Collections::Generic::List_1<::Class_1_AF06687F962EEF63*>* Field_3_10; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_19; // 0x40
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_12; // 0x48
	::Nap::NapECS::EcsFilter* Field_3_23; // 0x50
	::Unity::Jobs::JobHandle Field_3_15; // 0x58
	::System::Boolean Field_3_14; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_UPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_FIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_2BE98EB9F95F2CDC(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_2BE98EB9F95F2CDC_OFFSET))(a1);
	}

	::System::Void Method_3_63B90F078483E737(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_63B90F078483E737_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_D252341484B6EB1D* a1)
	{
		return ((::System::Void(*)(::Class_3_D252341484B6EB1D*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_385AA2E42A1A69EE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_385AA2E42A1A69EE_OFFSET))(a1);
	}

	::System::Void Method_3_E580FB8A7DB7EB67(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_E580FB8A7DB7EB67_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5D0C7528A8F66838(::Class_3_D252341484B6EB1D* a1)
	{
		return ((::System::Void(*)(::Class_3_D252341484B6EB1D*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_5D0C7528A8F66838_OFFSET))(a1);
	}

	::System::Void Method_3_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_62593EE2FE331D20_OFFSET))(this);
	}

	static ::Class_1_43BD383C98B4C0C5_79* Method_3_82ABFE24D5168B0C()
	{
		return ((::Class_1_43BD383C98B4C0C5_79*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_82ABFE24D5168B0C_OFFSET))();
	}

	::System::Void Method_3_22E59727FCC3AC03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_22E59727FCC3AC03_OFFSET))(this);
	}

	static ::System::Boolean Method_3_E610E6ED7355DD4E(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_E610E6ED7355DD4E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0B15EE09EC20D1B1(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_0B15EE09EC20D1B1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C5F7038291B9C7AC(::Class_2_B242825AD4217625* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B242825AD4217625*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_C5F7038291B9C7AC_OFFSET))(a1, a2);
	}

	::System::Void Method_3_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	static ::System::Void Method_3_ACC82255344BDFD8(::Class_2_1B1B79CF034B93D1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_1B1B79CF034B93D1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_ACC82255344BDFD8_OFFSET))(a1, a2);
	}

	::System::Void Method_3_73325761F6F6EE1A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_73325761F6F6EE1A_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_D29C037630E55AC9(::Class_1_AF06687F962EEF63* a1, ::Class_1_43BD383C98B4C0C5_79* a2)
	{
		return ((::System::Void(*)(::Class_1_AF06687F962EEF63*, ::Class_1_43BD383C98B4C0C5_79*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_D29C037630E55AC9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E8F3294104A2A048(::Class_3_D252341484B6EB1D* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_D252341484B6EB1D*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_E8F3294104A2A048_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_3DFE04DC823D9D33(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_3DFE04DC823D9D33_OFFSET))(a1, a2, a3);
	}

	static ::Enum_3_F0974F25AA471541 Method_3_783CA7E5D026CECE()
	{
		return ((::Enum_3_F0974F25AA471541(*)())((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_783CA7E5D026CECE_OFFSET))();
	}

	static ::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_97D83E4CB3B11935_OFFSET))();
	}

	static ::System::Void Method_3_6950DFC9E62DCDC3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_6950DFC9E62DCDC3_OFFSET))(a1);
	}

	static ::Class_1_AF06687F962EEF63* Method_3_82ABFE24D5168B0C_1()
	{
		return ((::Class_1_AF06687F962EEF63*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_82ABFE24D5168B0C_1_OFFSET))();
	}

	static ::System::Void Method_3_1180431AF7AE9BE5(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_1180431AF7AE9BE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_27ADCCDE7A11CC5E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_27ADCCDE7A11CC5E_OFFSET))(a1);
	}

	static ::System::Void Method_3_DC234E107C1FEC2D(::Class_1_A00B784DE48ED0A8*& a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Boolean& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::Class_1_A00B784DE48ED0A8*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Boolean&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_DC234E107C1FEC2D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_E5B23F8EF798AAA5(::MoleMole::EntityHandle a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_E5B23F8EF798AAA5_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_3_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_3_5B7CC969AF8C5A2C(::Class_3_D252341484B6EB1D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D252341484B6EB1D*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_5B7CC969AF8C5A2C_OFFSET))(this, a1);
	}

	::System::Void Method_3_78DAA902E254D7A6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_78DAA902E254D7A6_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_6C3E18151183E806()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_6C3E18151183E806_OFFSET))();
	}

	static ::System::Void Method_3_0508563E26675EC4(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_0508563E26675EC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AF747A56A0F2C0A4(::Class_3_D252341484B6EB1D* a1, ::Class_3_06419CA21ECB69E6* a2)
	{
		return ((::System::Void(*)(::Class_3_D252341484B6EB1D*, ::Class_3_06419CA21ECB69E6*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_AF747A56A0F2C0A4_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_22E59727FCC3AC03_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_22E59727FCC3AC03_1_OFFSET))(this);
	}

	::System::Void Method_3_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_3_54B11888037F6FA8(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_54B11888037F6FA8_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_8C0A991B87BCB7E5(::Class_3_D252341484B6EB1D* a1)
	{
		return ((::System::Void(*)(::Class_3_D252341484B6EB1D*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_8C0A991B87BCB7E5_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_5FC63A1AC659F0AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_5FC63A1AC659F0AE_OFFSET))(this);
	}

	::System::Void Method_3_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_3_BD354EC62647EDC0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_BD354EC62647EDC0_OFFSET))(this, a1);
	}

	static ::MoleMole::AttackType Method_3_66E92F0F1F2E149A(::Class_3_D252341484B6EB1D* a1, ::Class_3_06419CA21ECB69E6* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::AttackType(*)(::Class_3_D252341484B6EB1D*, ::Class_3_06419CA21ECB69E6*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_66E92F0F1F2E149A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_1467E749545241DE(::Enum_3_F0974F25AA471541 a1)
	{
		return ((::System::Void(*)(::Enum_3_F0974F25AA471541))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_1467E749545241DE_OFFSET))(a1);
	}

	static ::System::Void Method_3_E48D6654AD4E7EC9(::MoleMole::EntityHandle a1, ::System::String* a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_E48D6654AD4E7EC9_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E8F49BF844103AAC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_E8F49BF844103AAC_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_838A7B6FC3359269(::Class_3_D252341484B6EB1D* a1)
	{
		return ((::System::Void(*)(::Class_3_D252341484B6EB1D*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_838A7B6FC3359269_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_7CF4C26DEA99534A(::MoleMole::EntityHandle a1, ::System::Action_2<::System::UInt32, ::System::Boolean>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_7CF4C26DEA99534A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_3_3FEBC466DBC9364E(::Class_3_D252341484B6EB1D* a1)
	{
		return ((::System::Void(*)(::Class_3_D252341484B6EB1D*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_3FEBC466DBC9364E_OFFSET))(a1);
	}

	::System::Void Method_3_0C1A9D6D9E04543C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_0C1A9D6D9E04543C_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_2C8AC6FC25B32219(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_2C8AC6FC25B32219_OFFSET))(a1);
	}

	static ::System::Void Method_3_0539F1DF6B7FACDB(::Class_2_25A326E4E7F9FCFE* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_25A326E4E7F9FCFE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_0539F1DF6B7FACDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AEE872C3CF7A8370(::Class_2_EFBBB9EB13AB1B92* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_EFBBB9EB13AB1B92*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_AEE872C3CF7A8370_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_0FE88C3959B3B724(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_0FE88C3959B3B724_OFFSET))(a1);
	}

	::System::Void Method_3_0FF755CF0787BB5E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_0FF755CF0787BB5E_OFFSET))(this, a1);
	}

	static ::MoleMole::AttackType Method_3_D26D9E10340F3CAD(::System::String* a1, ::MoleMole::AttackType a2)
	{
		return ((::MoleMole::AttackType(*)(::System::String*, ::MoleMole::AttackType))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_D26D9E10340F3CAD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_77F5509F60E9D563(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_77F5509F60E9D563_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0DBEBD74722C00C2(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_0DBEBD74722C00C2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5DF574466CCD0CE3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_5DF574466CCD0CE3_OFFSET))(a1);
	}

	static ::System::Void Method_3_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_32B2368221A04800_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_61EA3E091E3ACE3A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_61EA3E091E3ACE3A_OFFSET))(a1);
	}

	static ::System::Void Method_3_F44843D801E0CB03(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_F44843D801E0CB03_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	static ::System::Void Method_3_2C8AC6FC25B32219_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_2C8AC6FC25B32219_1_OFFSET))(a1);
	}

	static ::System::String* Method_3_2CC9263E08F5BAB5(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_2CC9263E08F5BAB5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_055E3BF644BB741B_OFFSET))(a1);
	}

	static ::System::Void Method_3_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	::System::Void Method_3_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_C5F2E178DAEB1793_OFFSET))(this);
	}

	static ::System::Boolean Method_3_08E666F7EFE21B1A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_08E666F7EFE21B1A_OFFSET))(a1);
	}

	::System::Void Method_3_AFAB48268B1DC353(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_AFAB48268B1DC353_OFFSET))(this, a1);
	}

	::System::Void Method_3_BF6A40F21F41755D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_BF6A40F21F41755D_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E17EE2B1462746AE(::Class_3_D252341484B6EB1D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_D252341484B6EB1D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_E17EE2B1462746AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F5F44F1A22EBC8ED(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Action_2<::System::UInt32, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Action_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_F5F44F1A22EBC8ED_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_D252341484B6EB1D* a1)
	{
		return ((::System::Void(*)(::Class_3_D252341484B6EB1D*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	::System::Void Method_3_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_3_4532289116D98671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_4532289116D98671_OFFSET))(this);
	}

	static ::System::Int32 Method_3_3B522448B1B3BE68(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_3B522448B1B3BE68_OFFSET))(a1);
	}

	static ::System::Void Method_3_435FA878CD73DCB7(::MoleMole::EntityHandle a1, ::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_435FA878CD73DCB7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_29F0C501FEEE7583(::Class_3_D252341484B6EB1D* a1)
	{
		return ((::System::Void(*)(::Class_3_D252341484B6EB1D*))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_29F0C501FEEE7583_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_CE34EA208837238D_1_OFFSET))();
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_6.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_1824EF69C8E376A3;
class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_4ABED7A3ACE6D8EB;
class Class_3_5609242270A80DFB;
class Class_3_F97B015544BE936B;
namespace MoleMole { class TeamDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F6BCF1258D8E9782_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD1F67C0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_10F45F84D3E1152C_OFFSET UNITYSDK_OFFSET(0xD1F6B30)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_13559AA4CA02ED1B_OFFSET UNITYSDK_OFFSET(0xD1FE2A0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0xD1FCA60)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_19C34437D6FEEB25_1_OFFSET UNITYSDK_OFFSET(0xD1F9E40)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_19C34437D6FEEB25_OFFSET UNITYSDK_OFFSET(0xD1F9DA0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_1A7A8ACC077F0EA1_OFFSET UNITYSDK_OFFSET(0xD1FF3A0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_1DC31F77FBFEB8FE_OFFSET UNITYSDK_OFFSET(0xD205760)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_21F9ED826BBBD097_1_OFFSET UNITYSDK_OFFSET(0xD202560)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_21F9ED826BBBD097_OFFSET UNITYSDK_OFFSET(0xD202350)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_27A7ABE664099E6C_OFFSET UNITYSDK_OFFSET(0xD1FD500)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_2833053B53AFEA39_OFFSET UNITYSDK_OFFSET(0xD205C20)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_2C08FB598F20BACF_OFFSET UNITYSDK_OFFSET(0xD1FE520)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_2C13F47305D47FC9_OFFSET UNITYSDK_OFFSET(0xD2040C0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0xD1FB1C0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_31DAF84A0D860A34_OFFSET UNITYSDK_OFFSET(0xD1F8EF0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0xD1FB280)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_387F08D16D59BE75_OFFSET UNITYSDK_OFFSET(0xD1FF300)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_3B94D5800FEBB847_OFFSET UNITYSDK_OFFSET(0xD2052A0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_3BBA7F8FA5C53AA4_OFFSET UNITYSDK_OFFSET(0xD204210)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_40A6DDB78491ADAF_OFFSET UNITYSDK_OFFSET(0xD1F8500)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_46D590622C1F8845_OFFSET UNITYSDK_OFFSET(0xD1FA400)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0xD1FC3C0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_4BB225E6F914CE0A_OFFSET UNITYSDK_OFFSET(0xD202770)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_5006CB03D2C134A9_OFFSET UNITYSDK_OFFSET(0xD2021F0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD1F8EB0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_5FF084E7946F0BE2_OFFSET UNITYSDK_OFFSET(0xD201EB0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_62FC2DCD2EF869D5_OFFSET UNITYSDK_OFFSET(0xD202890)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_677DE49F185C2709_OFFSET UNITYSDK_OFFSET(0xD1F7B90)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_67E519021630CA8E_1_OFFSET UNITYSDK_OFFSET(0xD205260)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_67E519021630CA8E_OFFSET UNITYSDK_OFFSET(0xD202240)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_70C8164B9A340D5F_OFFSET UNITYSDK_OFFSET(0xD1FC0B0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_74FE0F242303E029_OFFSET UNITYSDK_OFFSET(0xD1F7A30)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_79D572573E1F9B29_OFFSET UNITYSDK_OFFSET(0xD2018A0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_8FB003E0B14E93DE_OFFSET UNITYSDK_OFFSET(0xD1F92E0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_90828A8C58E70242_OFFSET UNITYSDK_OFFSET(0xD1FD630)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_9C5DC87C98662174_OFFSET UNITYSDK_OFFSET(0xD1F9CE0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_9CC631A3BDB2D8B4_OFFSET UNITYSDK_OFFSET(0xD1FF5E0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_9E87A6D17A76AF2B_OFFSET UNITYSDK_OFFSET(0xD202280)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_A11144519902A27F_1_OFFSET UNITYSDK_OFFSET(0xD1FE1F0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0xD1FB230)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_A5C2309F3EB20ED4_OFFSET UNITYSDK_OFFSET(0xD1F9FB0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_A5CFF0B966A17EAC_OFFSET UNITYSDK_OFFSET(0xD1FAC00)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_A7D2BDFA1FA2DBBE_OFFSET UNITYSDK_OFFSET(0xD1FA230)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_AF1E2ABE9825B624_OFFSET UNITYSDK_OFFSET(0xD2038D0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_B1065DE5A0D9350E_OFFSET UNITYSDK_OFFSET(0xD200C90)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_B10FB9597F17FCB4_OFFSET UNITYSDK_OFFSET(0xD204160)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0xD205A00)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xD1FDEE0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_CD6826AAAC12D074_1_OFFSET UNITYSDK_OFFSET(0xD205A60)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_CD6826AAAC12D074_OFFSET UNITYSDK_OFFSET(0xD1FE240)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_D78AF06792F1AE92_OFFSET UNITYSDK_OFFSET(0xD1FB340)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_E79DA4EE94477ECE_OFFSET UNITYSDK_OFFSET(0xD1F9EE0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_E7F7C46AFF28952E_OFFSET UNITYSDK_OFFSET(0xD1F94C0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0xD200060)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_F47473D760C2FCEC_OFFSET UNITYSDK_OFFSET(0xD205AC0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_FA11FA6435D78FF7_OFFSET UNITYSDK_OFFSET(0xD2053F0)
#define CLASS_3_F6BCF1258D8E9782_METHOD_3_FCB0D5F9B234088E_OFFSET UNITYSDK_OFFSET(0xD1FDF70)
#define CLASS_3_F6BCF1258D8E9782__CTOR_OFFSET UNITYSDK_OFFSET(0xD1F6AE0)

inline static constexpr unsigned int Class_3_F6BCF1258D8E9782_TypeDefinitionIndex = 79696;

class Class_3_F6BCF1258D8E9782 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_10F45F84D3E1152C(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_10F45F84D3E1152C_OFFSET))(a1);
	}

	static ::System::Void Method_3_677DE49F185C2709(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_677DE49F185C2709_OFFSET))(a1);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_3_31DAF84A0D860A34(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_31DAF84A0D860A34_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_8FB003E0B14E93DE(::System::Int32 a1, ::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_8FB003E0B14E93DE_OFFSET))(a1, a2);
	}

	static ::System::Double Method_3_9C5DC87C98662174(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Double(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_9C5DC87C98662174_OFFSET))(a1);
	}

	static ::System::Void Method_3_E79DA4EE94477ECE(::Struct_2_B6A3FA7992F9F37E_6 a1)
	{
		return ((::System::Void(*)(::Struct_2_B6A3FA7992F9F37E_6))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_E79DA4EE94477ECE_OFFSET))(a1);
	}

	static ::System::Void Method_3_40A6DDB78491ADAF(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_40A6DDB78491ADAF_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_3_A5C2309F3EB20ED4(::System::UInt32 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_A5C2309F3EB20ED4_OFFSET))(a1);
	}

	::System::Void Method_3_A7D2BDFA1FA2DBBE(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_A7D2BDFA1FA2DBBE_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_46D590622C1F8845(::MoleMole::TeamDataItem* a1)
	{
		return ((::System::Void(*)(::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_46D590622C1F8845_OFFSET))(a1);
	}

	static ::System::Void Method_3_A5CFF0B966A17EAC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_A5CFF0B966A17EAC_OFFSET))(a1, a2);
	}

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_36F46336ADA62D13()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_36F46336ADA62D13_OFFSET))();
	}

	static ::System::Void Method_3_D78AF06792F1AE92(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* a1, ::System::Collections::Generic::List_1<::Class_3_5609242270A80DFB*>* a2, ::Struct_2_B6A3FA7992F9F37E_6 a3, ::System::Action* a4, ::System::Action* a5, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::System::Collections::Generic::List_1<::Class_3_5609242270A80DFB*>*, ::Struct_2_B6A3FA7992F9F37E_6, ::System::Action*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_D78AF06792F1AE92_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Double Method_3_19C34437D6FEEB25(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Double(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_19C34437D6FEEB25_OFFSET))(a1);
	}

	static ::System::Void Method_3_27A7ABE664099E6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_27A7ABE664099E6C_OFFSET))();
	}

	static ::System::Void Method_3_90828A8C58E70242(::Class_2_1824EF69C8E376A3* a1)
	{
		return ((::System::Void(*)(::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_90828A8C58E70242_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_FCB0D5F9B234088E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_FCB0D5F9B234088E_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4805283D59625FD9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_4805283D59625FD9_OFFSET))();
	}

	static ::System::Void Method_3_CD6826AAAC12D074(::Class_3_F97B015544BE936B* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_CD6826AAAC12D074_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_3_2C08FB598F20BACF(::Class_2_1824EF69C8E376A3* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4, ::Foundation::AssetPath a5, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a6)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_2_1824EF69C8E376A3*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::Foundation::AssetPath, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_2C08FB598F20BACF_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::MoleMole::Battle::Entity* Method_3_387F08D16D59BE75(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_387F08D16D59BE75_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1A7A8ACC077F0EA1(::Class_2_1824EF69C8E376A3* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::Class_2_1824EF69C8E376A3*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_1A7A8ACC077F0EA1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_14AFBA2E8A242644()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_14AFBA2E8A242644_OFFSET))();
	}

	static ::System::Void Method_3_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_EEED34E9AAC26D51_OFFSET))();
	}

	static ::System::Void Method_3_9CC631A3BDB2D8B4(::MoleMole::Battle::Entity* a1, ::Class_2_1824EF69C8E376A3* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_1824EF69C8E376A3*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_9CC631A3BDB2D8B4_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_70C8164B9A340D5F(::Class_2_1824EF69C8E376A3* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* a2)
	{
		return ((::System::Void(*)(::Class_2_1824EF69C8E376A3*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_70C8164B9A340D5F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_67E519021630CA8E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_67E519021630CA8E_OFFSET))();
	}

	static ::System::Void Method_3_9E87A6D17A76AF2B(::Class_3_F97B015544BE936B* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_9E87A6D17A76AF2B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5FF084E7946F0BE2(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_5FF084E7946F0BE2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_62FC2DCD2EF869D5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_62FC2DCD2EF869D5_OFFSET))();
	}

	static ::System::Void Method_3_AF1E2ABE9825B624(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_AF1E2ABE9825B624_OFFSET))(a1);
	}

	::System::Void Method_3_2C13F47305D47FC9(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_2C13F47305D47FC9_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_B10FB9597F17FCB4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_B10FB9597F17FCB4_OFFSET))();
	}

	static ::System::Boolean Method_3_79D572573E1F9B29(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_79D572573E1F9B29_OFFSET))(a1);
	}

	static ::System::Void Method_3_3BBA7F8FA5C53AA4(::Class_2_1824EF69C8E376A3* a1, ::System::Int32 a2, ::Foundation::AssetPath a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a7)
	{
		return ((::System::Void(*)(::Class_2_1824EF69C8E376A3*, ::System::Int32, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_3BBA7F8FA5C53AA4_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_3_67E519021630CA8E_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_67E519021630CA8E_1_OFFSET))();
	}

	static ::System::Void Method_3_3B94D5800FEBB847(::UnityEngine::Vector3& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_3B94D5800FEBB847_OFFSET))(a1, a2);
	}

	static ::System::Double Method_3_19C34437D6FEEB25_1(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Double(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_19C34437D6FEEB25_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_5006CB03D2C134A9(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_5006CB03D2C134A9_OFFSET))(a1);
	}

	static ::System::Void Method_3_E7F7C46AFF28952E(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80 a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_E7F7C46AFF28952E_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::Entity* Method_3_B1065DE5A0D9350E(::Class_2_1824EF69C8E376A3* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_2_1824EF69C8E376A3*, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_B1065DE5A0D9350E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_FA11FA6435D78FF7(::Class_3_4ABED7A3ACE6D8EB* a1)
	{
		return ((::System::Void(*)(::Class_3_4ABED7A3ACE6D8EB*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_FA11FA6435D78FF7_OFFSET))(a1);
	}

	static ::System::Void Method_3_74FE0F242303E029(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_74FE0F242303E029_OFFSET))(a1);
	}

	static ::System::Void Method_3_1DC31F77FBFEB8FE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_1DC31F77FBFEB8FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_13559AA4CA02ED1B(::Class_3_F97B015544BE936B* a1, ::Class_3_F97B015544BE936B* a2, ::MoleMole::Config::BaseProperty a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_F97B015544BE936B*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_13559AA4CA02ED1B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_B34C1EF5D195AA30(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_B34C1EF5D195AA30_OFFSET))(a1);
	}

	static ::System::Void Method_3_4BB225E6F914CE0A(::Class_3_F97B015544BE936B* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_4BB225E6F914CE0A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F47473D760C2FCEC(::Class_2_1824EF69C8E376A3* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_2_1824EF69C8E376A3*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_F47473D760C2FCEC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_21F9ED826BBBD097(::Class_3_F97B015544BE936B* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_21F9ED826BBBD097_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CD6826AAAC12D074_1(::Class_3_F97B015544BE936B* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_CD6826AAAC12D074_1_OFFSET))(a1, a2);
	}

	::System::Void Method_3_A11144519902A27F_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_A11144519902A27F_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_2833053B53AFEA39(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_2833053B53AFEA39_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_21F9ED826BBBD097_1(::Class_3_F97B015544BE936B* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782_METHOD_3_21F9ED826BBBD097_1_OFFSET))(a1, a2);
	}
};

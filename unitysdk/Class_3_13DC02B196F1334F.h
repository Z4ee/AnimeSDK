#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_0D0B57FF916F9911;
class Class_2_1A855E5EED3B1B47_1;
class Class_2_2B5C3D9688202862;
class Class_2_874AD1BB59BFEABD_2;
class Class_3_710CD2A9B301B56D;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_13DC02B196F1334F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12AED140)
#define CLASS_3_13DC02B196F1334F_METHOD_3_04437470B889FCAB_OFFSET UNITYSDK_OFFSET(0x12AEEF70)
#define CLASS_3_13DC02B196F1334F_METHOD_3_12E2584290784D11_OFFSET UNITYSDK_OFFSET(0x12AEE310)
#define CLASS_3_13DC02B196F1334F_METHOD_3_18C28FFFE188B2BE_OFFSET UNITYSDK_OFFSET(0x12AEFCC0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_1D93B6C03FF06521_OFFSET UNITYSDK_OFFSET(0x12AEDB80)
#define CLASS_3_13DC02B196F1334F_METHOD_3_29C77972DB53BD47_OFFSET UNITYSDK_OFFSET(0x12AEE810)
#define CLASS_3_13DC02B196F1334F_METHOD_3_2D06A13AF82B03B1_OFFSET UNITYSDK_OFFSET(0x12AED6C0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_49581DC19BD3C45B_OFFSET UNITYSDK_OFFSET(0x12AEE3F0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_4BCEE542E57059FC_OFFSET UNITYSDK_OFFSET(0x12AF0EE0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_61263B89A4121DFD_OFFSET UNITYSDK_OFFSET(0x12AF0450)
#define CLASS_3_13DC02B196F1334F_METHOD_3_6571A7C59F871048_OFFSET UNITYSDK_OFFSET(0x12AF10D0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_799AB3BA296A2576_OFFSET UNITYSDK_OFFSET(0x12AF0040)
#define CLASS_3_13DC02B196F1334F_METHOD_3_7A4BFF33636159B6_1_OFFSET UNITYSDK_OFFSET(0x12AEED70)
#define CLASS_3_13DC02B196F1334F_METHOD_3_7A4BFF33636159B6_OFFSET UNITYSDK_OFFSET(0x12AEEE70)
#define CLASS_3_13DC02B196F1334F_METHOD_3_84E862F935BF6A44_OFFSET UNITYSDK_OFFSET(0x12AEE990)
#define CLASS_3_13DC02B196F1334F_METHOD_3_875763D9FADCD5CC_OFFSET UNITYSDK_OFFSET(0x12AEE470)
#define CLASS_3_13DC02B196F1334F_METHOD_3_8C9D922DA2922EDF_OFFSET UNITYSDK_OFFSET(0x12AEDFA0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_91D97064765DCBF1_OFFSET UNITYSDK_OFFSET(0x12AEF7A0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0x12AEFF80)
#define CLASS_3_13DC02B196F1334F_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x12AEFC80)
#define CLASS_3_13DC02B196F1334F_METHOD_3_A8E32A6E7543F8F2_1_OFFSET UNITYSDK_OFFSET(0x12AEF530)
#define CLASS_3_13DC02B196F1334F_METHOD_3_A8E32A6E7543F8F2_OFFSET UNITYSDK_OFFSET(0x12AEE560)
#define CLASS_3_13DC02B196F1334F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x12AEF110)
#define CLASS_3_13DC02B196F1334F_METHOD_3_C145B9163994FF6A_OFFSET UNITYSDK_OFFSET(0x12AEF1A0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_C456DA8D21F058D6_OFFSET UNITYSDK_OFFSET(0x12AF0E00)
#define CLASS_3_13DC02B196F1334F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AF0660)
#define CLASS_3_13DC02B196F1334F_METHOD_3_D3F337291E08D220_OFFSET UNITYSDK_OFFSET(0x12AEF8B0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_D7EC6EA1892FBC2A_OFFSET UNITYSDK_OFFSET(0x12AEFFC0)
#define CLASS_3_13DC02B196F1334F_METHOD_3_DFE9C06DFC50DB35_OFFSET UNITYSDK_OFFSET(0x12AF06F0)
#define CLASS_3_13DC02B196F1334F_UPDATE_OFFSET UNITYSDK_OFFSET(0x12AED510)
#define CLASS_3_13DC02B196F1334F__CTOR_OFFSET UNITYSDK_OFFSET(0x12AED670)

inline static constexpr unsigned int Class_3_13DC02B196F1334F_TypeDefinitionIndex = 74397;

class Class_3_13DC02B196F1334F : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_2D06A13AF82B03B1(::MoleMole::Battle::Entity* a1, ::Class_2_874AD1BB59BFEABD_2* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_874AD1BB59BFEABD_2*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_2D06A13AF82B03B1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_8C9D922DA2922EDF(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_8C9D922DA2922EDF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_12E2584290784D11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_12E2584290784D11_OFFSET))(a1);
	}

	static ::System::Void Method_3_875763D9FADCD5CC(::Class_3_710CD2A9B301B56D* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_710CD2A9B301B56D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_875763D9FADCD5CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A8E32A6E7543F8F2(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_A8E32A6E7543F8F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_29C77972DB53BD47(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_29C77972DB53BD47_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_04437470B889FCAB(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_04437470B889FCAB_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_C145B9163994FF6A(::Class_3_710CD2A9B301B56D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Boolean(*)(::Class_3_710CD2A9B301B56D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_C145B9163994FF6A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7A4BFF33636159B6(::MoleMole::Battle::Entity* a1, ::Class_2_1A855E5EED3B1B47_1* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_1A855E5EED3B1B47_1*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_7A4BFF33636159B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A8E32A6E7543F8F2_1(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_A8E32A6E7543F8F2_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_91D97064765DCBF1(::Class_3_710CD2A9B301B56D* a1)
	{
		return ((::System::Void(*)(::Class_3_710CD2A9B301B56D*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_91D97064765DCBF1_OFFSET))(a1);
	}

	static ::System::Single Method_3_D3F337291E08D220(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2B5C3D9688202862* a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::Class_3_F41D242A20F8FE06*, ::Class_2_2B5C3D9688202862*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_D3F337291E08D220_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_18C28FFFE188B2BE(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_18C28FFFE188B2BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_D7EC6EA1892FBC2A(::Class_3_710CD2A9B301B56D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Boolean(*)(::Class_3_710CD2A9B301B56D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_D7EC6EA1892FBC2A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_799AB3BA296A2576(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_799AB3BA296A2576_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_61263B89A4121DFD(::Class_3_710CD2A9B301B56D* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_710CD2A9B301B56D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_61263B89A4121DFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7A4BFF33636159B6_1(::MoleMole::Battle::Entity* a1, ::Class_2_1A855E5EED3B1B47_1* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_1A855E5EED3B1B47_1*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_7A4BFF33636159B6_1_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_84E862F935BF6A44(::MoleMole::Battle::Entity* a1, ::Class_2_0D0B57FF916F9911* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_0D0B57FF916F9911*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_84E862F935BF6A44_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DFE9C06DFC50DB35(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_DFE9C06DFC50DB35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1D93B6C03FF06521(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EVariantElement a2, ::Class_2_874AD1BB59BFEABD_2* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EVariantElement, ::Class_2_874AD1BB59BFEABD_2*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_1D93B6C03FF06521_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_C456DA8D21F058D6(::Class_3_710CD2A9B301B56D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Boolean(*)(::Class_3_710CD2A9B301B56D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_C456DA8D21F058D6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_4BCEE542E57059FC(::Class_3_710CD2A9B301B56D* a1, ::MoleMole::Config::DamageElementType a2, ::MoleMole::Config::EVariantElement a3)
	{
		return ((::System::Void(*)(::Class_3_710CD2A9B301B56D*, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_4BCEE542E57059FC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_6571A7C59F871048(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::DamageElementType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::DamageElementType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_6571A7C59F871048_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_49581DC19BD3C45B(::Class_3_710CD2A9B301B56D* a1)
	{
		return ((::System::Boolean(*)(::Class_3_710CD2A9B301B56D*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F_METHOD_3_49581DC19BD3C45B_OFFSET))(a1);
	}
};
